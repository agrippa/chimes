#include <sstream>

#include "StartExitPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;
extern std::vector<StackAlloc *> *insert_at_front;
extern std::string curr_func;

static std::string get_cond_management_varname(std::string func) {
    /*
     * Some auto-generated variable names from the compiler have periods in
     * them?
     */
    std::replace(func.begin(), func.end(), '.', '_');
    std::replace(func.begin(), func.end(), ':', '_');
    return ("____must_manage_" + func);
}

std::string StartExitPass::get_unique_disable_varname() {
    int id = count_disable_variables++;
    std::stringstream ss;
    ss << "____chimes_did_disable" << id;
    return ss.str();
}

static bool need_stack_management_calls(std::string func) {
    FunctionCallees *callees = insertions->get_callees(func);
    FunctionArgumentAliasGroups *funcAliases =
        insertions->findMatchingFunctionNullReturn(func);

    /*
     * TODO We could possibly skip this if callees->get_may_checkpoint() ==
     * DOES_NOT and funcAliases->nargs() == 0 and this is not a pointer return
     * function
     */
    return (true);
    // return (!callees || callees->get_may_checkpoint() != DOES_NOT ||
    //         funcAliases->nargs() > 0);
}

static bool perform_conditional_stack_management(FunctionCallees *callees) {
    return (callees &&
            (callees->get_may_checkpoint() == MAY ||
             callees->get_may_checkpoint() == DOES_NOT) &&
            !callees->get_calls_unknown_functions());
}

void StartExitPass::VisitTopLevel(clang::FunctionDecl *func) {
    if (!current_disable_varname) {
        current_disable_varname = new std::string(get_unique_disable_varname());
    }

    clang::SourceLocation declEnd = func->getBody()->getLocStart();

    FunctionArgumentAliasGroups *funcAliases =
        insertions->findMatchingFunctionNullReturn(curr_func);

    FunctionCallees *callees = insertions->get_callees(curr_func);
    bool inserting_stack_mgmt = need_stack_management_calls(curr_func);
    bool conditional_management = perform_conditional_stack_management(
            callees);

    /*
     * There may be no function info for a given function if it is a static
     * function that is never called in its compilation unit (i.e. a
     * function that LLVM can determine is never called). In that case, it
     * won't even bother presenting that function declaration to us as part
     * of the initial analysis pass. Then, we won't have any function input
     * or exit metadata.
     */
    if (funcAliases != NULL) {
        std::stringstream ss;

        if (inserting_stack_mgmt) {
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
            std::string cond_varname = get_cond_management_varname(
                    curr_func);
            std::string address_of_cond_varname;
            if (conditional_management) {
                address_of_cond_varname = ("&" + cond_varname);
            } else {
                address_of_cond_varname = "(int *)0x0";
            }
            ss << "const int " << *current_disable_varname << " = new_stack((void *)(&" <<
                curr_func << "), \"" << curr_func << "\", " <<
                address_of_cond_varname << ", " <<
                funcAliases->nargs() << ", " << nCheckpointedArgs;
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
        }

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
            if (ss.str().size() > 0) {
                InsertTextAfterToken(declEnd, ss.str());
            }

            const clang::Stmt *last = cmpd->body_back();
            if (!clang::isa<clang::ReturnStmt>(last)) {
                // implicit return at end of void funct
                clang::SourceLocation loc = cmpd->getLocStart();
                clang::PresumedLoc locloc = SM->getPresumedLoc(loc);
                if (insertions->isMainFile(locloc.getFilename())) {
                    InsertText(cmpd->getLocEnd(),
                            constructFunctionEndingStmts(
                                inserting_stack_mgmt,
                                conditional_management), true, true);
                }
            }
        }
    }

    delete current_disable_varname;
    current_disable_varname = NULL;
}

std::string StartExitPass::constructFunctionEndingStmts(bool inserting_rm,
        bool conditional_management) {
    if (!current_disable_varname) {
        current_disable_varname = new std::string(get_unique_disable_varname());
    }

    FunctionExit *info = insertions->getFunctionExitInfo(curr_func);
    std::set<size_t> groups_changed =
        info->get_groups_changed_at_termination();
    std::set<size_t> groups_and_children_changed =
        info->get_groups_and_children_changed_at_termination();
    std::map<std::string, std::set<size_t> > groups_possibly_changed =
        info->get_groups_possibly_changed_at_termination();
    std::string loc_id;
    if (groups_changed.size() > 0 || groups_and_children_changed.size() > 0 ||
            groups_possibly_changed.size() > 0) {
        loc_id = insertions->get_alias_loc_var(info->get_id());
    } else {
        loc_id = "0";
    }
    std::stringstream ss;

    if (inserting_rm) {
        std::string cond_varname = get_cond_management_varname(curr_func);
        std::string address_of_cond_varname;
        if (conditional_management) {
            address_of_cond_varname = ("&" + cond_varname);
        } else {
            address_of_cond_varname = "(int *)0x0";
        }
        if (info->get_return_alias() == 0) {
            ss << "rm_stack(false, 0UL, \"" << curr_func << "\", " <<
                address_of_cond_varname << ", " << loc_id << ", " <<
                *current_disable_varname << "); ";
        } else {
            ss << "rm_stack(true, " << info->get_return_alias() << "UL, \"" <<
                curr_func << "\", " << address_of_cond_varname << ", " <<
                loc_id << ", " << *current_disable_varname << "); ";
        }
    } else {
        if (groups_changed.size() > 0 ||
                groups_and_children_changed.size() > 0 ||
                groups_possibly_changed.size() > 0) {
            ss << "alias_group_changed(" <<
                insertions->get_alias_loc_var(info->get_id()) << "); ";
        }
    }
    return ss.str();
}

void StartExitPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();
    clang::PresumedLoc start_loc = SM->getPresumedLoc(start);

    FunctionCallees *callees = insertions->get_callees(curr_func);
    bool inserting_stack_mgmt = need_stack_management_calls(curr_func);
    bool conditional_management = perform_conditional_stack_management(
            callees);

    if (start.isValid() && end.isValid() &&
            insertions->isMainFile(start_loc.getFilename())) {
        /*
         * Insert rm_stack callbacks.
         */
        if (clang::isa<clang::ReturnStmt>(s)) {
            // See note above in VisitTopLevel on missing function info.
            if (insertions->findMatchingFunctionNullReturn(curr_func) != NULL) {
                InsertText(start, constructFunctionEndingStmts(
                            inserting_stack_mgmt, conditional_management), true,
                        true);
            }
        }
    }

    visitChildren(s);
}
