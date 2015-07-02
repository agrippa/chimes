#include <sstream>
#include <set>

#include "CallLabelInsertPass.h"
#include "CallingAndOMPPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <clang/AST/Decl.h>
#include <clang/AST/Expr.h>
#include <llvm/Support/raw_ostream.h>

using namespace std;
using namespace clang;

extern DesiredInsertions *insertions;
extern std::set<std::string> *ignorable;
extern clang::FunctionDecl *curr_func_decl;
extern std::map<int, std::vector<CallLabel> > call_lbls;

void CallLabelInsertPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (insertions->findMatchingFunctionNullReturn(curr_func) == NULL) {
        /*
         * LLVM determines some functions are uncallable (e.g. static and not
         * called in the same compilation unit) and doesn't bother passing them
         * to our analysis pass. We don't need to insert any callbacks for these
         * functions, as they are not used.
         */
        return;
    }

    if (start.isValid() && end.isValid() && SM->isInMainFile(end)) {
        clang::PresumedLoc presumed_start = SM->getPresumedLoc(start);
        clang::PresumedLoc presumed_end = SM->getPresumedLoc(end);

        if (const clang::CallExpr *call =
                clang::dyn_cast<const clang::CallExpr>(s)) {

            std::string callee_name = get_callee_name(call);

            if (callee_name != "register_custom_init_handler" &&
                    !clang::isa<const clang::CXXConstructExpr>(call)) {
                /*
                 * This means we can't support checkpoints from inside
                 * constructors.
                 */
                clang::PresumedLoc presumed = SM->getPresumedLoc(start);
                int line_no = presumed.getLine();

                int lbl;
                if (callee_name == "anon" ||
                        insertions->may_cause_checkpoint(callee_name)) {
                    lbl = getNextFunctionLabel();
                } else {
                    lbl = -1;
                }

                if (call_lbls.find(line_no) == call_lbls.end()) {
                    call_lbls[line_no] =
                        std::vector<CallLabel>();
                }
                call_lbls.at(line_no).push_back(CallLabel(presumed.getColumn(),
                            lbl));

                if (lbl >= 0 && ignorable->find(callee_name) == ignorable->end()) {
                    std::stringstream lbl_ss;
                    lbl_ss << " call_lbl_" << lbl << ": ";
                    InsertAtFront(call, lbl_ss.str());
                    insertions->update_alias_change_locations(
                            presumed.getLine(), presumed.getColumn(),
                            presumed.getFilename(), lbl_ss.str().size());
                }
            }

        }
    }

    visitChildren(s);
}
