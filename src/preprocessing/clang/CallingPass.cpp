#include <sstream>
#include <set>

#include "CallingPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;

void CallingPass::VisitTopLevel(clang::Decl *toplevel) {
    for (std::map<unsigned, std::vector<CallLocation>>::iterator i =
            calls_found.begin(), e = calls_found.end(); i != e; i++) {
        std::sort(i->second.begin(), i->second.end());

        for (std::vector<CallLocation>::iterator ii = i->second.begin(),
                ee = i->second.end(); ii != ee; ii++) {
            CallLocation loc = *ii;
            AliasesPassedToCallSite callsite =
                insertions->findFirstMatchingCallsite(i->first);

            std::stringstream ss;
            ss << " call_lbl_" << loc.get_label() << ": calling(" <<
                loc.get_label() << ", " << callsite.get_return_alias() <<
                "UL, " << callsite.nparams();
            for (unsigned a = 0; a < callsite.nparams(); a++) {
                ss << ", (size_t)(" << callsite.alias_no_for(a) << "UL)";
            }
            ss << "); ";

            InsertAtFront(loc.get_call(), ss.str());
        }
    }

    calls_found.clear();
}

void CallingPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    std::string ignorable_arr[] = {"malloc_wrapper", "realloc_wrapper",
        "free_wrapper", "cudaMalloc_wrapper", "cudaFree_wrapper",
        "init_numdebug", "new_stack", "rm_stack", "register_stack_var",
        "alias_group_changed", "printf", "fprintf", "exp", "strchr", "exit",
        "atoi", "atof", "fopen", "getopt"};
    std::set<std::string> ignorable(ignorable_arr,
            ignorable_arr + sizeof(ignorable_arr) / sizeof(ignorable_arr[0]));

    if (start.isValid() && end.isValid() && SM->isInMainFile(start)) {

        // This means we can't support checkpoints from inside constructors
        if (const clang::CallExpr *call =
                clang::dyn_cast<const clang::CallExpr>(s)) {

            const clang::FunctionDecl *decl = call->getDirectCallee();
            std::string callee_name = decl->getNameAsString();

            /*
             * Not necessary, but helps to limit code clutter and reduce
             * overhead
             */
            if (ignorable.find(callee_name) == ignorable.end() &&
                    !clang::isa<const clang::CXXConstructExpr>(call)) {
                clang::PresumedLoc presumed = SM->getPresumedLoc(start);

                if (calls_found.find(presumed.getLine()) == calls_found.end()) {
                    calls_found[presumed.getLine()] = std::vector<CallLocation>();
                }
                int lbl = getNextFunctionLabel();
                calls_found[presumed.getLine()].push_back(CallLocation(
                            presumed.getColumn(), lbl, call));
            }
        }
    }

    visitChildren(s);
}
