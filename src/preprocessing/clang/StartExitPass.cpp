#include <sstream>

#include "StartExitPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;
extern std::vector<StackAlloc *> *insert_at_front;
extern std::string curr_func;

void StartExitPass::VisitTopLevel(clang::Decl *toplevel) {
    clang::FunctionDecl *func = clang::dyn_cast<clang::FunctionDecl>(toplevel);
    if (func != NULL && func->isThisDeclarationADefinition()) {
        clang::SourceLocation declEnd = func->getBody()->getLocStart();

        FunctionCallees *callees = insertions->get_callees(curr_func);
        if (callees && callees->get_may_checkpoint() == DOES_NOT) return;

        FunctionArgumentAliasGroups *funcAliases =
            insertions->findMatchingFunctionNullReturn(curr_func);

        /*
         * There may be no function info for a given function if it is a static
         * function that is never called in its compilation unit (i.e. a
         * function that LLVM can determine is never called). In that case, it
         * won't even bother presenting that function declaration to us as part
         * of the initial analysis pass. Then, we won't have any function input
         * or exit metadata.
         */
        if (funcAliases != NULL) {
            int nCheckpointedArgs = 0;
            if (insert_at_front != NULL) {
                for (std::vector<StackAlloc *>::iterator i =
                        insert_at_front->begin(), e = insert_at_front->end();
                        i != e; i++) {
                    StackAlloc *alloc = *i;
                    if (alloc->get_may_checkpoint()) {
                        nCheckpointedArgs++;
                    }
                }
            }
            std::stringstream ss;
            ss << "new_stack((void *)(&" << curr_func << "), " << funcAliases->nargs() <<
                ", " << nCheckpointedArgs;
            for (unsigned i = 0; i < funcAliases->nargs(); i++) {
                ss << ", (size_t)(" << funcAliases->alias_no_for(i) << "UL)";
            }

            /*
             * Insert stack registrations for parameters to functions.
             */
            if (insert_at_front != NULL) {
                for (std::vector<StackAlloc *>::iterator i =
                        insert_at_front->begin(), e = insert_at_front->end();
                        i != e; i++) {
                    StackAlloc *alloc = *i;

                    if (alloc->get_may_checkpoint()) {
                        std::string args = constructRegisterStackVarArgs(alloc);
                        ss << ", " << args;
                    }
                }
                insert_at_front = NULL;
            }

            ss << "); ";

            // Insert rm_stack at end of function's body if this is a void
            const clang::Stmt *body = func->getBody();
            assert(clang::isa<clang::CompoundStmt>(body));
            const clang::CompoundStmt *cmpd =
                clang::dyn_cast<const clang::CompoundStmt>(body);

            /*
             * If a function is empty, its body will have no instructions and
             * there's no need to add instrumentation
             */
            if (cmpd->size() > 0) {
                InsertTextAfterToken(declEnd, ss.str());

                const clang::Stmt *last = cmpd->body_back();
                if (!clang::isa<clang::ReturnStmt>(last)) {
                    // implicit return at end of void funct
                    clang::SourceLocation loc = cmpd->getLocStart();
                    clang::PresumedLoc locloc = SM->getPresumedLoc(loc);
                    if (insertions->isMainFile(locloc.getFilename())) {
                        InsertText(cmpd->getLocEnd(),
                                constructFunctionEndingStmts(), true, true);
                    }
                }
            }
        }
    }
}

std::string StartExitPass::constructFunctionEndingStmts() {
    FunctionExit *info = insertions->getFunctionExitInfo(curr_func);
    std::set<size_t> groups_changed =
        info->get_groups_changed_at_termination();

    std::stringstream ss;
    if (groups_changed.size() > 0) {
        ss << "alias_group_changed(" << groups_changed.size();
        for (std::set<size_t>::iterator i = groups_changed.begin(),
                e = groups_changed.end(); i != e; i++) {
            ss << ", (size_t)(" << *i << "UL)";
        }
        ss << "); ";
    }

    if (info->get_return_alias() == 0) {
        ss << "rm_stack(false, 0UL); ";
    } else {
        ss << "rm_stack(true, " << info->get_return_alias() << "UL); ";
    }
    return ss.str();
}

void StartExitPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();
    clang::PresumedLoc start_loc = SM->getPresumedLoc(start);

    FunctionCallees *callees = insertions->get_callees(curr_func);
    if (callees && callees->get_may_checkpoint() == DOES_NOT) return;

    if (start.isValid() && end.isValid() &&
            insertions->isMainFile(start_loc.getFilename())) {
        /*
         * Insert rm_stack callbacks.
         */
        if (clang::isa<clang::ReturnStmt>(s)) {
            // See note above in VisitTopLevel on missing function info.
            if (insertions->findMatchingFunctionNullReturn(curr_func) != NULL) {
                InsertText(start, constructFunctionEndingStmts(), true, true);
            }
        }
    }

    visitChildren(s);
}
