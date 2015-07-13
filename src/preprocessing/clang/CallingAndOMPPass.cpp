#include <sstream>
#include <set>

#include "CallingAndOMPPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <clang/AST/Decl.h>
#include <clang/AST/Expr.h>
#include <llvm/Support/raw_ostream.h>

using namespace std;
using namespace clang;


// #define VERBOSE

/**
 * This pass is responsible for setting up the intra-function jumps for both OMP
 * regions and for regular function calls.
 */

extern DesiredInsertions *insertions;
extern std::string stmtToString(const clang::Stmt *S, clang::ASTContext *Context);
extern clang::FunctionDecl *curr_func_decl;
extern std::set<std::string> *ignorable;
extern std::map<int, std::vector<CallLabel> > call_lbls;
extern std::map<std::string, std::set<string>> func_to_alias_locs;
extern std::set<std::string> npm_functions;
extern std::map<std::string, ExternalNPMCall> external_calls;
extern std::set<string> definitions_in_main_file;
extern std::string merge_filename;
extern std::vector<Merge> static_merges;
extern std::vector<Merge> dynamic_merges;
extern bool blockCheckpoints;

extern std::string constructMangledName(std::string varname);

CallingAndOMPPass::CallingAndOMPPass(bool set_gen_quick) :
        chimes_parent_thread_counter(0),
        blocker_varname_counter(0), parent_stack_depth_varname_counter(0),
        call_stack_depth_varname_counter(0), region_varname_counter(0),
        disable_varname_counter(0) {
    gen_quick = set_gen_quick;

    std::set<std::string> supported_parallel_clauses;
    supported_parallel_clauses.insert("private");
    supported_parallel_clauses.insert("firstprivate");
    supported_parallel_clauses.insert("reduction"); // no explicit support required
    supported_parallel_clauses.insert("num_threads");
    /*
     * assume that if collapse is present this is a parallel for, otherwise the
     * compiler will throw an error.
     */
    supported_parallel_clauses.insert("collapse");
    /*
     * We don't actually support checkpointing inside parallel for loops, but we
     * allow them to exist as long as checkpoint() isn't called inside.
     */
    supported_parallel_clauses.insert("for");
    // doesn't seem like anything special needs to be done to support this
    supported_parallel_clauses.insert("shared");
    supported_parallel_clauses.insert("schedule");
    supported_omp_clauses.insert(pair<string, set<string> >("parallel",
                supported_parallel_clauses));

    std::set<std::string> supported_for_clauses;
    supported_for_clauses.insert("firstprivate");
    supported_for_clauses.insert("private");
    supported_for_clauses.insert("reduction");
    supported_for_clauses.insert("schedule");
    supported_for_clauses.insert("collapse");
    supported_omp_clauses.insert(pair<string, set<string> >("for",
                supported_for_clauses));

    std::set<std::string> supported_task_clauses;
    supported_task_clauses.insert("firstprivate");
    supported_task_clauses.insert("private");
    supported_task_clauses.insert("shared");
    supported_task_clauses.insert("untied");
    supported_task_clauses.insert("if");
    supported_omp_clauses.insert(pair<string, set<string> >("task",
                supported_task_clauses));

    std::set<std::string> supported_single_clauses;
    supported_single_clauses.insert("nowait");
    supported_omp_clauses.insert(pair<string, set<string> >("single",
                supported_single_clauses));

    std::set<std::string> supported_master_clauses;
    supported_omp_clauses.insert(pair<string, set<string> >("master",
                supported_master_clauses));

    supported_omp_pragmas.insert("parallel");
    supported_omp_pragmas.insert("for");
    supported_omp_pragmas.insert("critical");
    supported_omp_pragmas.insert("barrier");
    supported_omp_pragmas.insert("task");
    supported_omp_pragmas.insert("single");
    supported_omp_pragmas.insert("master");
    // don't need to do anything, but we also don't support checkpoints inside task
    supported_omp_pragmas.insert("taskwait");
    // don't need to do anything
    supported_omp_pragmas.insert("flush");
    /*
     * Since compilers wouldn't allow a checkpoint() call to be made inside of
     * an atomic pragma, no special handling is needed.
     */
    supported_omp_pragmas.insert("atomic");
}

std::string CallingAndOMPPass::get_unique_argument_varname() {
    std::stringstream ss;
    ss << "____chimes_arg" << arg_counter;
    arg_counter++;
    return ss.str();
}

std::string CallingAndOMPPass::get_unique_parent_stack_depth_varname() {
    std::stringstream ss;
    ss << "____chimes_parent_stack_depth" << parent_stack_depth_varname_counter;
    parent_stack_depth_varname_counter++;
    return ss.str();
}

std::string CallingAndOMPPass::get_unique_call_stack_depth_varname() {
    std::stringstream ss;
    ss << "____chimes_call_stack_depth" << call_stack_depth_varname_counter;
    call_stack_depth_varname_counter++;
    return ss.str();
}

std::string CallingAndOMPPass::get_unique_blocker_varname() {
    std::stringstream ss;
    ss << "____chimes_first_iter" << blocker_varname_counter;
    blocker_varname_counter++;
    return ss.str();
}

std::string CallingAndOMPPass::get_chimes_parent_thread_varname() {
    std::stringstream ss;
    ss << "____chimes_parent_thread" << chimes_parent_thread_counter;
    chimes_parent_thread_counter++;
    return ss.str();
}

std::string CallingAndOMPPass::get_chimes_parent_ctx_varname() {
    std::stringstream ss;
    ss << "____chimes_parent_ctx" << chimes_parent_thread_counter;
    chimes_parent_ctx_counter++;
    return ss.str();
}

std::string CallingAndOMPPass::get_unique_region_varname() {
    std::stringstream ss;
    ss << "____chimes_region_id" << region_varname_counter;
    region_varname_counter++;
    return ss.str();
}

std::string CallingAndOMPPass::get_unique_disable_varname() {
    std::stringstream ss;
    ss << "____chimes_disable" << (disable_varname_counter++);
    return ss.str();
}

std::map<clang::VarDecl *, StackAlloc *> CallingAndOMPPass::hasValidDeclarations(
        const clang::DeclStmt *d) {
    std::map<clang::VarDecl *, StackAlloc *> allocs;

    for (clang::DeclStmt::const_decl_iterator i = d->decl_begin(),
            e = d->decl_end(); i != e; i++) {
        clang::Decl *dd = *i;
        if (clang::VarDecl *v = clang::dyn_cast<clang::VarDecl>(dd)) {
            std::string mangled = constructMangledName(v->getName().str());
            StackAlloc *alloc = insertions->findStackAlloc(mangled);

            if (alloc != NULL && (alloc->get_may_checkpoint() ||
                        alloc->is_array_type())) {
                assert(allocs.find(v) == allocs.end());
                allocs[v] = alloc;
            }
        }
    }
    return allocs;
}

std::string CallingAndOMPPass::constructStartingRegistrations(
        std::vector<DeclarationInfo> *vars, unsigned n_hoisted,
        std::string *transition_str_ptr, bool has_callbacks, int insert_at_line) {
    std::stringstream acc_args;
    std::stringstream acc_decls;
    std::stringstream acc_conds;
    bool any_unconditional_vars = false;
    unsigned count_args = 0;
    unsigned count_decls = 0;
    unsigned count_conds = 0;
    bool first_insert = true;

    for (unsigned i = 0; i < n_hoisted; i++) {
        DeclarationInfo curr = vars->at(i);
        const clang::DeclStmt *d = curr.get_decl();
        std::map<clang::VarDecl *, StackAlloc *> allocs = curr.get_allocs();

        for (clang::DeclStmt::const_decl_iterator i = d->decl_begin(),
                e = d->decl_end(); i != e; i++) {
            clang::Decl *dd = *i;
            if (clang::VarDecl *v = clang::dyn_cast<clang::VarDecl>(dd)) {

                if (allocs.find(v) != allocs.end()) {
                    StackAlloc *alloc = allocs.at(v);
                    /*
                     * If this was identified as a variable which may have a
                     * STORE->LOAD pair across a function call which MAY/DOES
                     * create a checkpoint.
                     *
                     * alloc->checkpoint_causes only includes functions which
                     * MAY or DOES create a checkpoint, no DOES_NOT.
                     */
                    assert(alloc->get_may_checkpoint() || alloc->is_array_type());

                    assert(curr.get_as_string().size() > 0);
                    if (!first_insert) {
                        acc_decls << "# " << insert_at_line << "\n";
                    }
                    first_insert = false;
                    acc_decls << curr.get_as_string();
                    count_decls++;

                    if (alloc->get_may_checkpoint()) {
                        if (count_args > 0) {
                            acc_args << ", ";
                        }
                        acc_args << constructRegisterStackVarArgs(alloc);
                        if (insertions->always_checkpoints(alloc)) {
                            any_unconditional_vars = true;
                        } else {
                            if (count_conds > 0) {
                                acc_conds << " || ";
                            }
                            acc_conds << get_cond_registration_varname(
                                    alloc->get_mangled_varname());
                            count_conds++;
                        }
                        count_args++;
                    }
                }
            }
        }
    }

    if (count_decls > 0) {
        std::stringstream complete;
        complete << acc_decls.str();
        if (!first_insert) {
            complete << "# " << insert_at_line << "\n";
        }
        first_insert = false;
        if (count_args > 0) {
            if (!any_unconditional_vars && acc_conds.str().size() > 0) {
                complete << " if (" << acc_conds.str() << ") {";
            }
            complete << " register_stack_vars(" << count_args << ", " <<
                acc_args.str() << "); ";
            if (!any_unconditional_vars && acc_conds.str().size() > 0) {
                complete << " } ";
            }
        }

        if (!gen_quick) {
            if (n_hoisted == vars->size() && !has_callbacks) {
                complete << " if (____chimes_replaying) { " <<
                    *transition_str_ptr << " } ";
            } else {
                complete << " if (____chimes_replaying) { goto lbl_0; } ";
            }
        }
        return complete.str();
    } else {
        return "";
    }
}

std::string CallingAndOMPPass::handleDecl(const clang::DeclStmt *d,
        std::map<clang::VarDecl *, StackAlloc *> allocs, std::string *force) {
    clang::SourceLocation start = d->getLocStart();
    clang::SourceLocation end = d->getLocEnd();

    std::stringstream acc;

    bool anyInitLists = false;
    bool add_wrapping_lbl = false;
    for (clang::DeclStmt::const_decl_iterator i = d->decl_begin(),
            e = d->decl_end(); i != e; i++) {
        clang::Decl *dd = *i;
        if (clang::VarDecl *v = clang::dyn_cast<clang::VarDecl>(dd)) {

            if (allocs.find(v) != allocs.end()) {
                StackAlloc *alloc = allocs.at(v);
                /*
                 * If this was identified as a variable which may have a
                 * STORE->LOAD pair across a function call which MAY/DOES create
                 * a checkpoint.
                 *
                 * alloc->checkpoint_causes only includes functions which
                 * MAY or DOES create a checkpoint, no DOES_NOT.
                 */
                assert(alloc->get_may_checkpoint() || alloc->is_array_type());
                if (alloc->get_may_checkpoint()) {
                    acc << constructRegisterStackVar(alloc);
                }

                /*
                 * We add a wrapping label to jump to as part of function resume
                 * for variables that are either checkpointable (i.e. they may
                 * be on the stack when a checkpoint is created) or array
                 * allocations. The reasoning behind checkpointable labels is
                 * obvious: we need these labels to jump to the associated
                 * variable registration during resume. We place labels on
                 * arrays simply because the compiler will complain about jumps
                 * over variable initialization if we do not jump through those
                 * initializations.
                 */
                add_wrapping_lbl = true;
                if (v->hasInit() && clang::dyn_cast<clang::InitListExpr>(
                            v->getInit())) {
                    anyInitLists = true;
                }
            }
        }
    }

    if (add_wrapping_lbl) {
        std::stringstream label_ss;
        int lbl = getNextRegisterLabel();
        label_ss << "lbl_" << lbl;

        std::stringstream ss;
        ss << " " << label_ss.str() << ": ";

        std::stringstream ss2;
        if (!gen_quick) {
            if (force != NULL) {
                ss2 << " if (____chimes_replaying) { " << *force << " } ";
            } else {
                ss2 << " if (____chimes_replaying) { goto lbl_" << (lbl + 1) <<
                    "; } ";
            }
        }

        InsertTextBefore(start, ss.str());
        InsertTextAfterToken(end, acc.str());
        InsertTextAfterToken(end, ss2.str());

        return label_ss.str();
    }

    return "";
}

static bool is_hoistable(const clang::DeclStmt *d,
        std::map<clang::VarDecl *, StackAlloc *> allocs) {
    bool hoistable = true;
    for (clang::DeclStmt::const_decl_iterator i = d->decl_begin(),
            e = d->decl_end(); i != e; i++) {
        clang::Decl *dd = *i;
        if (clang::VarDecl *v = clang::dyn_cast<clang::VarDecl>(dd)) {

            if (allocs.find(v) != allocs.end()) {
                StackAlloc *alloc = allocs.at(v);
                /*
                 * An allocation cannot be moved if it either does not have a
                 * unique name in this function, or is array typed (in case of a
                 * dynamically size array allocation with a dependency on some
                 * other variable specifying its size). This is a rather coarse
                 * approach and could be dramatically improved (e.g. a variable
                 * doesn't have to be completely unique in a function to be
                 * hoisted).
                 */
                if (!alloc->get_is_unique_in_function() ||
                        (alloc->is_array_type() &&
                         !alloc->is_statically_sized_array_type())) {
                    hoistable = false;
                }
            }
        }
    }
    return (hoistable);
}

static string aggregateFromVec(vector<string> *vec) {
    std::stringstream ss;
    for (vector<string>::iterator i = vec->begin(), e = vec->end(); i != e; i++) {
        ss << *i << " ";
    }
    return ss.str();
}

void CallingAndOMPPass::addInsertsForRegion(OMPRegion *region) {
    int pragma_line = region->get_line();
    const clang::Stmt *body = region->get_body();

    clang::SourceLocation startLoc = body->getLocStart();
    clang::SourceLocation endLoc = body->getLocEnd();

    clang::SourceLocation start;
    if (region->is_parallel_for() || region->is_omp_for()) {
        const clang::ForStmt *for_stmt = clang::dyn_cast<clang::ForStmt>(body);
        assert(for_stmt);
        start = for_stmt->getBody()->getLocStart();
    } else {
        start = body->getLocStart();
    }
    // InsertTextAfterToken(start, aggregateFromVec(&region->insert_at_region_start));
    InsertTextAfterToken(start, " { ");

    clang::SourceLocation end = body->getLocEnd();
    // InsertTextBefore(end, at_end);
    InsertTextBefore(end, " } ");

    if (!gen_quick) {
        std::string before = aggregateFromVec(&region->insert_before_region);
        std::string after = aggregateFromVec(&region->insert_after_region);
        std::string at_start = aggregateFromVec(&region->insert_at_region_start);
        std::string at_end = aggregateFromVec(&region->insert_at_region_end);

        if (before.size() > 0 || after.size() > 0 || at_start.size() > 0 ||
                at_end.size() > 0) {
            clang::PresumedLoc presumedStart = SM->getPresumedLoc(startLoc);
            clang::PresumedLoc presumedEnd = SM->getPresumedLoc(endLoc);
            insertions->AppendToOMPInserts(pragma_line,
                    (region->is_parallel_for() || region->is_omp_for()),
                    presumedStart.getFilename(),
                    presumedStart.getLine(), presumedStart.getColumn(),
                    presumedEnd.getLine(), presumedEnd.getColumn(),
                    before, after, at_start, at_end);
        }
    }
}

// region may be NULL
void CallingAndOMPPass::VisitRegion(OMPRegion *region, int new_stack_line) {
    if (region && !region->resumable()) {
        addInsertsForRegion(region);
        return;
    }

    std::vector<OMPRegion *> children = ompTree->get_all_children(region);
    std::vector<ContainedFunctionCall> *calls = ompTree->get_contained_calls(
            region);

    /*
     * Collect possible jump destinations during resume (either nested regions
     * or function calls within this region) and construct a switch statement
     * for resume.
     */
    std::stringstream ss;
    ss << " switch(get_next_call()) { ";
    for (std::vector<OMPRegion *>::iterator i = children.begin(),
            e = children.end(); i != e; i++) {
        OMPRegion *region = *i;
        int lbl = region->get_lbl();
        if (region->resumable()) {
            ss << "case(" << lbl << "): { goto call_lbl_" << lbl << "; } ";
        }
    }

    for (std::vector<ContainedFunctionCall>::iterator i = calls->begin(),
            e = calls->end(); i != e; i++) {
        ContainedFunctionCall call = *i;
        int lbl = call.get_lbl();
        if (lbl != -1) {
            ss << "case(" << lbl << "): { goto call_lbl_" << lbl << "; } ";
        }
    }
    ss << "default: { chimes_error(); } } ";
    std::string transition_str = ss.str();

    if (region != NULL && (region->is_parallel_for() ||
                region->get_is_critical())) {
        if (!gen_quick) {
            region->insert_at_region_start.push_back(
                    "if (____chimes_replaying) { chimes_error(); } ");
        }
    } else if (vars_in_regions.find(region) != vars_in_regions.end() ||
            calls_to_register_callbacks.size() > 0) {
        std::vector<DeclarationInfo> *vars = vars_in_regions[region];
        std::string first_label;
        std::string hoisted_var_regs;

        unsigned n_hoisted = 0;
        while (n_hoisted < vars->size() && vars->at(n_hoisted).is_hoisted()) {
            n_hoisted++;
        }

        if (n_hoisted > 0) {
            hoisted_var_regs = constructStartingRegistrations(vars, n_hoisted,
                    &transition_str, calls_to_register_callbacks.size() > 0, new_stack_line);
        }

        /*
         * Handle unhoisted variables. If there are no resumable function calls
         * in this region, append the transition_str for jumping to the next
         * function call in the trace to the last non-hoisted variable.
         */
        for (unsigned i = n_hoisted; i < vars->size(); i++) {
            DeclarationInfo curr = (*vars)[i];
            assert(!curr.is_hoisted());
            const clang::DeclStmt *d = curr.get_decl();
            std::map<clang::VarDecl *, StackAlloc *> allocs = curr.get_allocs();

            std::string *force = NULL;
            if (i == vars->size() - 1 &&
                    calls_to_register_callbacks.size() == 0) {
                force = &transition_str;
            }

            if (i == 0) {
                first_label = handleDecl(d, allocs, force);
            } else {
                handleDecl(d, allocs, force);
            }
        }

        // Handle function calls in this region
        for (unsigned i = 0; i < calls_to_register_callbacks.size(); i++) {
            const CallExpr *c = calls_to_register_callbacks[i];
            int lbl = getNextRegisterLabel();
            std::stringstream label_ss;
            label_ss << " lbl_" << lbl;

            std::stringstream ss;
            ss << " " << label_ss.str() << ": ";

            if (first_label.size() == 0) {
                first_label = label_ss.str();
            }

            std::stringstream ss2;
            if (!gen_quick) {
                if (i == calls_to_register_callbacks.size() - 1) {
                    ss2 << "; if (____chimes_replaying) { " << transition_str <<
                        " } ";
                } else {
                    ss2 << "; if (____chimes_replaying) { goto lbl_" << (lbl + 1) <<
                        "; } ";
                }
            }

            InsertTextBefore(c->getLocStart(), ss.str());
            InsertTextAfterToken(c->getLocEnd(), ss2.str());
        }

        if (n_hoisted > 0) {
            /*
             * If any variables are hoisted, add the hoisted variable
             * registration to the NULL region.
             */
            assert(region == NULL);
            insert_at_front = hoisted_var_regs + " " + insert_at_front;
        } else {
            if (!gen_quick) {
                std::stringstream entry_ss;
                entry_ss << " if (____chimes_replaying) { goto " <<
                    first_label << "; } ";

                if (region == NULL) {
                    insert_at_front = insert_at_front + " " + entry_ss.str();
                } else {
                    region->insert_at_region_start.push_back(entry_ss.str());
                }
            }
        }
    } else {
        std::stringstream entry_ss;
        if (!gen_quick) {
            entry_ss << " if (____chimes_replaying) { " << transition_str <<
                " } ";

            if (region == NULL) {
                insert_at_front = entry_ss.str() + " " + insert_at_front;
            } else {
                region->insert_at_region_start.push_back(entry_ss.str());
            }
        }
    }

    for (std::vector<OMPRegion *>::iterator i = children.begin(),
            e = children.end(); i != e; i++) {
        OMPRegion *child = *i;
        VisitRegion(child, new_stack_line);
    }

    if (region) {
        addInsertsForRegion(region);
    }
}

bool CallingAndOMPPass::is_inside_if_cond(const clang::Stmt *stmt) {
    const clang::Stmt *child = stmt;
    const clang::Stmt *parent = getParentMayBeNull(stmt);
    while (parent != NULL && !clang::isa<clang::IfStmt>(parent)) {
        child = parent;
        parent = getParentMayBeNull(parent);
    }

    if (parent != NULL && clang::isa<clang::IfStmt>(parent)) {
        const clang::IfStmt *if_stmt = clang::dyn_cast<clang::IfStmt>(parent);
        return (if_stmt->getCond() == child);
    } else {
        return (false);
    }
}

bool CallingAndOMPPass::is_inside_while_cond(const clang::Stmt *stmt) {
    const clang::Stmt *child = stmt;
    const clang::Stmt *parent = getParentMayBeNull(stmt);
    while (parent != NULL && !clang::isa<clang::WhileStmt>(parent)) {
        child = parent;
        parent = getParentMayBeNull(parent);
    }

    if (parent != NULL && clang::isa<clang::WhileStmt>(parent)) {
        const clang::WhileStmt *while_stmt = clang::dyn_cast<clang::WhileStmt>(parent);
        return (while_stmt->getCond() == child);
    } else {
        return (false);
    }
}

void CallingAndOMPPass::verify_supported_clauses(std::string pragma_name,
        map<string, vector<string> > *clauses, int line) {
    set<string> supported;
    if (supported_omp_clauses.find(pragma_name) !=
            supported_omp_clauses.end()) {
        supported = supported_omp_clauses.at(pragma_name);
    }

    bool success = true;
    for(map<string, vector<string> >::iterator clause_i = clauses->begin(),
            clause_e = clauses->end(); clause_i != clause_e; clause_i++) {
        if (supported.find(clause_i->first) == supported.end()) {
            llvm::errs() << "Unsupported OMP clause \"" << clause_i->first <<
                "\" for pragma \"" << pragma_name << "\" on line " << line << "\n";
            success = false;
        }
    }

    if (!success) {
        assert(false);
    }
}

std::set<std::string> CallingAndOMPPass::get_private_vars(map<string,
        vector<string> > *clauses) {
    std::set<std::string> private_vars;

    if (clauses->find("private") != clauses->end()) {
        std::vector<std::string> args = clauses->at("private");
        for (std::vector<std::string>::iterator argi = args.begin(),
                arge = args.end(); argi != arge; argi++) {
            private_vars.insert(*argi);
        }
    }
    if (clauses->find("firstprivate") != clauses->end()) {
        std::vector<std::string> args = clauses->at("firstprivate");
        for (std::vector<std::string>::iterator argi = args.begin(),
                arge = args.end(); argi != arge; argi++) {
            private_vars.insert(*argi);
        }
    }

    /*
     * This block of code finds the stack variables that will be hoisted out of
     * OMP regions and ensures that they are passed to the
     * register_thread_local_stack_vars call made below.
     */
    for (std::vector<DeclarationInfo>::iterator i = vars_to_classify.begin(),
            e = vars_to_classify.end(); i != e; i++) {
        DeclarationInfo curr = *i;
        std::map<clang::VarDecl *, StackAlloc *> allocs =
            curr.get_allocs();

        if (is_omp_for_iter_declaration(curr.get_decl())) continue;

        OMPRegion *true_region =
            ompTree->find_containing_region(curr.get_decl());

        bool hoistable = is_hoistable(curr.get_decl(), allocs);
        /*
         * If is hoistable, and is hoisted out of an OMP region, then we need to
         * register this variable as a thread local variable when we enter that
         * OMP region.
         */
        if (hoistable && true_region) {
            for (std::map<clang::VarDecl *, StackAlloc *>::iterator ii =
                    allocs.begin(), ee = allocs.end(); ii != ee; ii++) {
                std::string varname =
                    ii->second->get_varname_from_mangled_name();
                private_vars.insert(varname);
            }
        }
    }

    return (private_vars);
}

std::string CallingAndOMPPass::get_region_setup_code(
        std::set<std::string> private_vars, bool is_parallel_for,
        std::string disable_varname, std::string blocker_varname,
        std::string parent_thread_varname, std::string parent_ctx_varname, std::string stack_depth_varname,
        std::string region_id_varname, std::string call_depth_varname,
        OMPRegion *region, OpenMPPragma pragma) {
    /*
     * This block of code generates the code that must be run
     * immediately prior to entering a parallel OMP region.
     */
    stringstream entering_ss;
    // Call label to jump to when resuming inside this parallel region
    entering_ss << " { call_lbl_" << region->get_lbl() << ": ";
    if (is_parallel_for) {
        entering_ss << " bool " + disable_varname +
            " = disable_current_thread(); ";
    }
    entering_ss << "void *" << parent_ctx_varname << " = get_thread_ctx(); ";
    entering_ss << "unsigned " << stack_depth_varname <<
        " = get_parent_vars_stack_depth(); ";
    entering_ss << "unsigned " << call_depth_varname <<
        " = get_thread_stack_depth(); ";
    // Unique region ID
    entering_ss << "size_t " << region_id_varname << "; ";
    entering_ss << "unsigned " << parent_thread_varname <<
        " = entering_omp_parallel(" << region->get_lbl() << ", &" <<
        region_id_varname << ", " << private_vars.size();
    for (std::set<std::string>::iterator varsi = private_vars.begin(),
            varse = private_vars.end(); varsi != varse; varsi++) {
        entering_ss << ", &" << *varsi;
    }
    entering_ss << "); ";

    if (is_parallel_for) {
        entering_ss << "int " << blocker_varname << " = 1; ";
        if (!gen_quick) {
            insertions->AppendFirstPrivate(pragma.get_line(),
                    pragma.get_last_line(), blocker_varname);
        }
    }

    return (entering_ss.str());
}

std::string CallingAndOMPPass::get_region_interior_code(bool is_parallel_for,
        std::string blocker_varname, std::string parent_thread_varname,
        std::string parent_ctx_varname, std::string stack_depth_varname,
        std::string region_id_varname, std::set<std::string> private_vars) {
    std::stringstream register_ss;
    register_ss << " { ";
    if (is_parallel_for) {
        register_ss << "if (" << blocker_varname << ") { ";
    }
    register_ss <<
        "register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), " <<
        parent_thread_varname << ", " << parent_ctx_varname <<
        ", LIBCHIMES_NUM_THREADS(), " << stack_depth_varname << ", " <<
        region_id_varname << ", " << private_vars.size();
    for (std::set<std::string>::iterator varsi = private_vars.begin(),
            varse = private_vars.end(); varsi != varse; varsi++) {
        register_ss << ", &" << *varsi;
    }
    register_ss << "); ";
    if (is_parallel_for) {
        register_ss << blocker_varname << " = 0; }";
    }

    return (register_ss.str());
}

std::string CallingAndOMPPass::get_region_cleanup_code(bool is_parallel_for,
        std::string disable_varname, std::string call_depth_varname,
        std::string region_id_varname) {
    std::stringstream leaving_stream;
    leaving_stream << " leaving_omp_parallel(" << call_depth_varname <<
        ", " << region_id_varname << ", " << is_parallel_for << "); ";
    if (is_parallel_for) {
        leaving_stream << " reenable_current_thread(" << disable_varname <<
                "); ";
    }
    leaving_stream << " } ";

    return (leaving_stream.str());
}

bool CallingAndOMPPass::has_side_effects(const Expr *arg) {
    switch (arg->getStmtClass()) {
        case (clang::Stmt::ImplicitCastExprClass): {
            const Expr *sub = dyn_cast<ImplicitCastExpr>(arg)->getSubExpr();

            if (isa<clang::DeclRefExpr>(sub) ||
                    isa<clang::StringLiteral>(sub)) {
                return false;
            }
            if (isa<clang::ImplicitCastExpr>(sub)) {
                const Expr *sub_sub =
                    dyn_cast<ImplicitCastExpr>(sub)->getSubExpr();
                if (isa<clang::DeclRefExpr>(sub_sub)) {
                    return false;
                } else {
#ifdef VERBOSE
                    std::string st = dyn_cast<clang::ImplicitCastExpr>(
                            sub)->getSubExpr()->getStmtClassName();
                    llvm::errs() << "    Doubly nested ImplicitCast " << st <<
                        "\n";
#endif
                }
            }
#ifdef VERBOSE
            llvm::errs() << "  ImplicitCast NESTED " <<
                sub->getStmtClassName() << "\n";
#endif
            break;
        }
        case (clang::Stmt::DeclRefExprClass): {
            return false;
        }
        case (clang::Stmt::IntegerLiteralClass): {
            return false;
        }
        case (clang::Stmt::UnaryOperatorClass): {
            const UnaryOperator *unary = dyn_cast<UnaryOperator>(arg);
            const Expr *sub = unary->getSubExpr();
            switch (unary->getOpcode()) {
                case (UO_AddrOf): {
                    switch (sub->getStmtClass()) {
                        case (clang::Stmt::DeclRefExprClass):
                            // Address of a variable
                            return false;
                        case (clang::Stmt::ParenExprClass):
#ifdef VERBOSE
                            llvm::errs() << "Paren child is " <<
                                dyn_cast<ParenExpr>(
                                        sub)->getSubExpr()->getStmtClassName()
                                << "\n";
#endif
                            break;
                    }
                }
            }
#ifdef VERBOSE
            llvm::errs() << "  UnaryOp NESTED " << sub->getStmtClassName() <<
                " " << "opcode=" << unary->getOpcode() << "\n";
#endif
            break;
        }
    }
#ifdef VERBOSE
    llvm::errs() << "ARG is a " << arg->getStmtClassName() << "\n";
#endif
    return true;
}

std::string CallingAndOMPPass::get_func_symbol(const CallExpr *call,
        CallLocation *loc) {
    std::string func_symbol;
    if (loc->get_funcname() == "anon") {
        func_symbol = stmtToString(call->getCallee());
    } else {
        func_symbol = loc->get_funcname();
    }
    return (func_symbol);
}

bool CallingAndOMPPass::needsToBeHoisted(std::string funcname, const Expr *arg) {
    bool may_cause_checkpoint = true;
    if (funcname != "anon") {
        may_cause_checkpoint = insertions->may_cause_checkpoint(funcname);
    }

    return (!gen_quick && may_cause_checkpoint && has_side_effects(arg));
}

int CallingAndOMPPass::extractArgsWithSideEffects(const CallExpr *call,
        CallLocation *loc, int nargs, std::stringstream *ss,
        std::vector<std::string> *arg_varnames) {
    int count_args_with_side_effects = 0;

    for (int i = 0; i < nargs; i++) {
        std::string varname = get_unique_argument_varname();
        const Expr *arg = call->getArg(i);
        assert(!isa<CXXDefaultArgExpr>(arg));

        if (needsToBeHoisted(loc->get_funcname(), arg)) {
            std::string type_str = arg->getType().getAsString();
            if (type_str.find("(*)") != std::string::npos) {
                /*
                 * If one of the arguments is a multi-dimensional stack
                 * array, we need to special case the declaration of its
                 * copy.
                 */
                assert(type_str.find("(*)") == type_str.rfind("(*)"));
                size_t index = type_str.find("(*)");
                type_str.insert(index + 2, varname);
                *ss << " " << type_str << ";";
            } else {
                *ss << " " << arg->getType().getAsString() << " " <<
                    varname << "; ";
            }
            arg_varnames->push_back(varname);
            count_args_with_side_effects++;
        } else {
            std::string arg_str = stmtToString(arg);
#ifdef VERBOSE
            llvm::errs() << "Deciding " << arg_str <<
                " does not have side effects, class=" <<
                arg->getStmtClassName() << "\n";
#endif
            arg_varnames->push_back(arg_str);
        }
    }

    return (count_args_with_side_effects);
}

static std::string get_external_func_name(std::string fname) {
    return ("____chimes_extern_func_" + fname);
}

std::string CallingAndOMPPass::get_loc_arg(const CallExpr *call,
        std::string func_name) {
    clang::PresumedLoc call_start_loc = SM->getPresumedLoc(
            call->getLocStart());
    if (change_loc_iters.find(func_name) == change_loc_iters.end()) {
        change_loc_iters.insert(
                pair<string, map<int, vector<StateChangeInsertion *>::iterator> >(
                    func_name, map<int, vector<StateChangeInsertion *>::iterator>()));
    }
    if (change_loc_iters.at(func_name).find(call_start_loc.getLine()) ==
            change_loc_iters.at(func_name).end()) {
        change_loc_iters.at(func_name).insert(
                pair<int, std::vector<StateChangeInsertion *>::iterator>(
                    call_start_loc.getLine(), insertions->getStateChangesBegin()));
    }

    map<int, vector<StateChangeInsertion *>::iterator>::iterator found =
        change_loc_iters.at(func_name).find(call_start_loc.getLine());
    assert(found != change_loc_iters.at(func_name).end());

    vector<StateChangeInsertion *>::iterator match =
        insertions->get_matching_after(call_start_loc.getLine(),
                call_start_loc.getFilename(), func_name, found->second);
    found->second = match;
    if (match == insertions->getStateChangesEnd()) {
        return "0";
    } else {
        return insertions->get_alias_loc_var((*match)->get_id());
    }
}

std::string CallingAndOMPPass::generateFunctionPointerCall(const CallExpr *call,
        CallLocation loc, AliasesPassedToCallSite callsite, CallLabel lbl) {
    std::stringstream ss;
    std::string fptr_type = call->getCallee()->getType().getAsString();

    std::string loc_arg = get_loc_arg(call, loc.get_funcname());

    ss << "((" << fptr_type << ")(translate_fptr((void *)" <<
        stmtToString(call->getCallee()) << ", " << lbl.get_lbl() << ", " <<
        loc_arg << ", " << callsite.get_return_alias() << "UL, " <<
        callsite.nparams();

    for (int i = 0; i < callsite.nparams(); i++) {
        ss << ", " << callsite.alias_no_for(i) << "UL";
    }
    ss << ")))(";

    for (int a = 0; a < call->getNumArgs(); a++) {
        const Expr *arg = call->getArg(a);
        if (a != 0) ss << ", ";
        ss << getRewrittenText(clang::SourceRange(
                    arg->getLocStart(), arg->getLocEnd()));
    }
    ss << ")";
    return ss.str();
}

std::string CallingAndOMPPass::generateNPMCall(CallLocation loc,
        AliasesPassedToCallSite callsite, const CallExpr *call,
        bool use_function_pointer) {
    std::stringstream ss;
    std::string loc_arg = get_loc_arg(call, loc.get_funcname());

    ss << "({ calling_npm(\"" << loc.get_funcname() << "\", " << loc_arg <<
        "); ";

    if (use_function_pointer) {
        ss << "(*" << get_external_func_name(loc.get_funcname()) << ")(";
    } else {
        ss << loc.get_funcname() + "_npm(";
    }
    for (int a = 0; a < call->getNumArgs(); a++) {
        const Expr *arg = call->getArg(a);
        if (a != 0) ss << ", ";
        ss << getRewrittenText(clang::SourceRange(
                    arg->getLocStart(), arg->getLocEnd()));
    }
    ss << "); })";
    return ss.str();
}

static size_t get_return_alias(std::string fname,
        AliasesPassedToCallSite callsite) {
    return (insertions->isAllocator(fname) ? 0 : callsite.get_return_alias());
}

std::string CallingAndOMPPass::generateNormalCall(const CallExpr *call,
        CallLocation loc, CallLabel lbl, AliasesPassedToCallSite callsite) {
    std::string func_symbol = get_func_symbol(call, &loc);

    /*
     * Default parameters cannot be checkpointed, nor are they
     * printable.
     */
    int nargs = call->getNumArgs();
    while (nargs > 0 &&
            isa<CXXDefaultArgExpr>(call->getArg(
                    nargs - 1))) {
        nargs--;
    }

    std::stringstream ss;
    std::vector<string> arg_varnames;
    int count_args_with_side_effects =
        extractArgsWithSideEffects(call, &loc, nargs, &ss,
                &arg_varnames);

    std::stringstream replace_func_call;
    replace_func_call << "(" << func_symbol << ")(";

    if (count_args_with_side_effects > 0) {
        ss << " if (!____chimes_replaying) { ";
    }
    for (int i = 0; i < nargs; i++) {
        const Expr *arg = call->getArg(i);
        if (needsToBeHoisted(loc.get_funcname(), arg)) {
            ss << arg_varnames[i] << " = (" << stmtToString(arg) <<
                "); ";
        }

        if (i > 0) replace_func_call << ", ";
        replace_func_call << arg_varnames[i];
    }
    if (count_args_with_side_effects > 0) {
        ss << " } ";
    }
    replace_func_call << ")";

    std::string loc_arg = get_loc_arg(call, loc.get_funcname());

    ss << " calling((void*)" << func_symbol << ", " << lbl.get_lbl() << ", " <<
        loc_arg << ", " << get_return_alias(loc.get_funcname(), callsite) <<
        "UL, " << callsite.nparams();
    for (unsigned a = 0; a < callsite.nparams(); a++) {
        ss << ", (size_t)(" << callsite.alias_no_for(a) << "UL)";
    }
    ss << "); ";

    return (" ({ " + ss.str() + replace_func_call.str() + "; }) ");
}

void CallingAndOMPPass::addDynamicMerge(AliasesPassedToCallSite callsite,
        std::string callee_name) {
    if (!gen_quick) {
        dynamic_merges.push_back(Merge(callee_name,
                    get_return_alias(callee_name, callsite),
                    callsite.get_param_aliases()));
    }
}

void CallingAndOMPPass::addStaticMerge(AliasesPassedToCallSite callsite,
        std::string callee_name) {
    if (!gen_quick) {
        static_merges.push_back(Merge(callee_name,
                    get_return_alias(callee_name, callsite),
                    callsite.get_param_aliases()));
    }
}

clang::SourceLocation CallingAndOMPPass::adjustInnerOMPLoc(
        clang::SourceLocation loc, int target_line) {
    while (SM->getPresumedLoc(loc).getLine() >= target_line) {
        loc = loc.getLocWithOffset(-1);
    }
    loc = loc.getLocWithOffset(1);
    return loc;
}

void CallingAndOMPPass::VisitTopLevel(clang::FunctionDecl *toplevel) {

    if (new_stack_calls.find(curr_func_decl) == new_stack_calls.end()) {
        /*
         * We may reach this point without a new_stack() call detected in the
         * case of CUDA compilation for functions that are defined externally to
         * the main cudafe1 file being processed, but which originally belonged
         * to the main file (e.g. the __global__ kernel definition). For these
         * functions, they will be marked as being a member of the main
         * compilation file thanks to #line pragmas but we can't edit them (so
         * the new_stack calls won't have been inserted). Therefore, we won't
         * find the new_stack call, but we will continue to try and modify it
         * for OMP and stack variable registration. Rather than doing so, just
         * abort.
         */
        return;
    }

    clang::SourceLocation name_start = toplevel->getNameInfo().getLoc();
    int current_name_len = toplevel->getNameInfo().getAsString().size();
    if (gen_quick) {
        ReplaceText(name_start, current_name_len,
                toplevel->getNameInfo().getAsString() + "_quick");
    } else {
        ReplaceText(name_start, current_name_len,
                toplevel->getNameInfo().getAsString() + "_resumable");
    }

    std::vector<OpenMPPragma> *omp_pragmas = insertions->get_omp_pragmas_for(
            curr_func_decl, *SM);

    /*
     * It is possible for the insertion of some text during this initial pass
     * over the OMP regions to clash with later text under VisitRegion. If this
     * happens in an undesirable order (e.g. we wanted the text from VisitRegion
     * to come first at a shared location) then we get syntax errors in the
     * generated code.
     *
     * Specifically, we're protecting against insertions of
     * entering_omp_parallel calls immediately following new_stack calls that
     * interfere with variable hoisting.
     */
    insert_at_front.clear();

    // First build the tree of nested OMP regions
    for (std::vector<OpenMPPragma>::iterator i = omp_pragmas->begin(),
            e = omp_pragmas->end(); i != e; i++) {
        OpenMPPragma pragma = *i;

        std::string pragma_name = pragma.get_pragma_name();
        std::map<std::string, std::vector<std::string> > clauses =
            pragma.get_clauses();
        bool is_parallel_for = (pragma_name == "parallel" &&
                clauses.find("for") != clauses.end());

        bool is_barrier = (pragma_name == "barrier");
        bool is_parallel = (pragma_name == "parallel");
        bool is_for = (pragma_name == "for");
        bool is_critical = (pragma_name == "critical");
        bool is_task = (pragma_name == "task");
        bool is_single = (pragma_name == "single");
        bool is_master = (pragma_name == "master");
        bool is_taskwait = (pragma_name == "taskwait");
        bool is_flush = (pragma_name == "flush");
        bool is_atomic = (pragma_name == "atomic");

        if (supported_omp_pragmas.find(pragma_name) ==
                supported_omp_pragmas.end()) {
            llvm::errs() << "Unexpected pragma name " << pragma_name << "\n";
            assert(false);
        }

        if (is_barrier || is_taskwait || is_flush) continue;

        assert(successors.find(pragma.get_line()) != successors.end());
        const clang::Stmt *post = successors[pragma.get_line()];

        int lbl = getNextFunctionLabel();

        OMPRegion *region = new OMPRegion(pragma.get_line(),
                pragma.get_last_line(), post->getLocStart(), post->getLocEnd(),
                pragma_name, clauses, lbl, is_parallel_for, is_for, post,
                is_critical);

        assert(region->insert_before_region.size() == 0);
        assert(region->insert_at_region_start.size() == 0);
        assert(region->insert_at_region_end.size() == 0);
        assert(region->insert_after_region.size() == 0);

        ompTree->add_region(region);
    }

    // For each OMP region, collect insertions
    for (std::vector<OpenMPPragma>::iterator i = omp_pragmas->begin(),
            e = omp_pragmas->end(); i != e; i++) {
        OpenMPPragma pragma = *i;

        std::string pragma_name = pragma.get_pragma_name();
        std::map<std::string, std::vector<std::string> > clauses =
            pragma.get_clauses();
        bool is_barrier = (pragma_name == "barrier");
        bool is_parallel = (pragma_name == "parallel");
        bool is_for = (pragma_name == "for");
        bool is_critical = (pragma_name == "critical");
        bool is_task = (pragma_name == "task");
        bool is_single = (pragma_name == "single");
        bool is_master = (pragma_name == "master");
        bool is_taskwait = (pragma_name == "taskwait");
        bool is_flush = (pragma_name == "flush");
        bool is_atomic = (pragma_name == "atomic");
        if (supported_omp_pragmas.find(pragma_name) == supported_omp_pragmas.end()) {
            llvm::errs() << "Unexpected pragma name " << pragma_name << "\n";
            assert(false);
        }

        OMPRegion *region = ompTree->find_region_for_line(pragma.get_line());
        if (!region) continue;

        verify_supported_clauses(pragma_name, &clauses, pragma.get_line());

        bool is_parallel_for = region->is_parallel_for();
        bool is_omp_for = region->is_omp_for();

        if (is_parallel) {
            std::string disable_varname = get_unique_disable_varname();
            string blocker_varname = get_unique_blocker_varname();
            string parent_thread_varname = get_chimes_parent_thread_varname();
            string parent_ctx_varname = get_chimes_parent_ctx_varname();
            string stack_depth_varname =
                get_unique_parent_stack_depth_varname();
            string region_id_varname = get_unique_region_varname();
            string call_depth_varname = get_unique_call_stack_depth_varname();

            std::set<std::string> private_vars = get_private_vars(&clauses);

            std::string region_entry_code = get_region_setup_code(private_vars,
                    is_parallel_for, disable_varname, blocker_varname,
                    parent_thread_varname, parent_ctx_varname, stack_depth_varname,
                    region_id_varname, call_depth_varname, region, pragma);
            region->insert_before_region.push_back(region_entry_code);

            std::string interior = get_region_interior_code(is_parallel_for,
                    blocker_varname, parent_thread_varname, parent_ctx_varname,
                    stack_depth_varname, region_id_varname, private_vars);
            region->insert_at_region_start.push_back(interior);

            std::string leaving = get_region_cleanup_code(is_parallel_for,
                    disable_varname, call_depth_varname, region_id_varname);
            if (!is_parallel_for) {
                region->insert_at_region_end.push_back(" thread_leaving(); } ");
            } else {
                region->insert_at_region_end.push_back(" } ");
            }

            region->insert_after_region.push_back(leaving);

        } else if (is_critical || is_for) {
            // Disable any threads inside
            std::string disable_varname = get_unique_disable_varname();
            std::string pre = " bool " + disable_varname + "; " +
                disable_varname + " = disable_current_thread(); ";
            std::string post = " reenable_current_thread(" + disable_varname +
                "); ";

            region->insert_before_region.push_back(pre);
            region->insert_after_region.push_back(post);
        } else if (is_task || is_single || is_master) {
            std::string disable_varname = get_unique_disable_varname();
            std::string pre = " bool " + disable_varname + "; " +
                disable_varname + " = disable_current_thread(); ";
            std::string post = " reenable_current_thread(" + disable_varname +
                "); ";

            region->insert_at_region_start.push_back(pre);
            region->insert_at_region_end.push_back(post);
        } else if (is_taskwait || is_flush || is_atomic) {
        } else {
            assert(false);
        }
    }

    // For each call made, create its text insertions
    map<std::string, vector<AliasesPassedToCallSite>::iterator> call_tracker;
    for (std::map<int, std::vector<CallLocation>>::iterator i =
            calls_found.begin(), e = calls_found.end(); i != e; i++) {
        std::vector<CallLocation> calls = i->second;
        std::sort(calls.begin(), calls.end());

        assert(call_lbls.find(i->first) != call_lbls.end());
        std::vector<CallLabel> lbls = call_lbls.at(i->first);
        assert(lbls.size() == calls.size());
        std::sort(lbls.begin(), lbls.end());

        for (int c = 0; c < calls.size(); c++) {
            CallLocation loc = calls[c];
            CallLabel lbl = lbls[c];

            const CallExpr *call = loc.get_call();

            assert(ignorable->find(loc.get_funcname()) == ignorable->end());

            std::string llvm_funcname = loc.get_funcname();
            if (loc.get_funcname() == "bzero") {
                /*
                 * LLVM converts all memset operations to the same
                 * instrinsic instruction (MemSetIntrinsic) so it's
                 * impossible to tell the difference between a bzero and a
                 * memset at that level. Here, if we find a bzero (or any
                 * other function that maps down to a memset intrinsic)
                 * convert it to look like a memset for the purposes of
                 * finding the call.
                 */
                llvm_funcname = "memset";
            }
            std::vector<AliasesPassedToCallSite>::iterator found;
            if (call_tracker.find(loc.get_funcname()) !=
                    call_tracker.end()) {
                found = insertions->findFirstMatchingCallsiteAfter(
                        i->first, loc.get_funcname(),
                        call_tracker.at(loc.get_funcname()));
            } else {
                std::vector<AliasesPassedToCallSite>::iterator begin =
                    insertions->getCallsiteStart();
                found = insertions->findFirstMatchingCallsiteAfter(
                        i->first, loc.get_funcname(), begin);
            }

            if (found == insertions->getCallsiteEnd()) continue;

            call_tracker[loc.get_funcname()] = found;
            AliasesPassedToCallSite callsite = *found;

            bool is_converted_to_npm = (npm_functions.find(
                        loc.get_funcname()) != npm_functions.end());
            bool never_checkpoints = insertions->does_not_cause_checkpoint(
                        loc.get_funcname());
            bool always_checkpoints = insertions->always_checkpoints(
                    loc.get_funcname());
            bool calls_unknown = insertions->calls_unknown_functions(
                    loc.get_funcname());
            /*
             * This block handles functions that are within this compilation
             * unit and have been converted to NPM mode because all of their
             * callees are in the same compilation unit, and none of them
             * checkpoint. This is the simplest case, and allows us to
             * simply emit a direct call to that function.
             */
            if (is_converted_to_npm && never_checkpoints) {
#ifdef VERBOSE
                llvm::errs() << "generating NPM call for call to " << loc.get_funcname() << "\n";
#endif
                std::string npm_call = generateNPMCall(loc, callsite, call,
                        false);
                clang::SourceRange replace_range(call->getLocStart(), call->getLocEnd());
                ReplaceText(replace_range, npm_call);

                addStaticMerge(callsite, loc.get_funcname());

                continue;
            }

            /*
             * This block handles function calls which we may be able to run
             * in NPM mode, but we're not sure (generally because one of the
             * nested callees is defined externally). This either generates
             * a direct call to the NPM version of the immediate child (if
             * it is in the same compilation unit) or a call to a function
             * pointer which will be populated with the NPM version from
             * another compilation unit if it is possible to make this call.
             * In either case, this call is conditional on a boolean set at
             * runtime which indicates if this call can ever create a
             * checkpoint. If false, we do the NPM version.
             *
             * If this function is defined in the same compilation unit we
             * can do the merge statically. If it is defined externally, we
             * conditionally do the merge at runtime if we find a definition
             * for it.
             *
             * The conditional checks that:
             *   1) The call is not made through a function pointer.
             *   2) The callee is not definitely create a checkpoint (it
             *      either does not or may).
             *   3) The callee does not call any function pointers.
             *   4) This call is within a certain distance of main on the
             *      call stack.
             */
            const int main_dist = (insertions->have_main_in_call_tree() ?
                    insertions->get_distance_from_main(curr_func) : -1);
            if (call->getDirectCallee() && !always_checkpoints &&
                    !calls_unknown &&
                    (main_dist != -1 && main_dist < 2) &&
                    loc.get_funcname() != "checkpoint") {
#ifdef VERBOSE
                llvm::errs() << "generating conditional NPM call for call "
                    "to " << loc.get_funcname() <<
                    ", is_converted_to_npm=" << is_converted_to_npm <<
                    ", never_checkpoints=" << never_checkpoints << "\n";
#endif
                /*
                 * Use a function pointer if this is an externally
                 * defined function
                 */
                std::string npm_call = generateNPMCall(loc, callsite, call,
                        npm_functions.find(loc.get_funcname()) ==
                            npm_functions.end());
                std::string regular_call = generateNormalCall(call, loc,
                        lbl, callsite);
                std::string cond_call = "(____chimes_does_checkpoint_" +
                    loc.get_funcname() + "_npm ? (" + regular_call +
                    ") : (" + npm_call + "))";
                clang::SourceRange replace_range(call->getLocStart(), call->getLocEnd());
                ReplaceText(replace_range, cond_call);
                ompTree->add_function_call(call, lbl.get_lbl());

                // External, dynamic
                addDynamicMerge(callsite, loc.get_funcname());

                continue;
            }

            /*
             * This block handles translating function pointers at runtime
             * dynamically to their NPM equivalent.
             */
            if (!call->getDirectCallee()) {
#ifdef VERBOSE
                llvm::errs() << "generating function pointer translation call\n";
#endif
                std::string ptr_call = generateFunctionPointerCall(call,
                        loc, callsite, lbl);
                clang::SourceRange replace_range(call->getLocStart(), call->getLocEnd());
                ReplaceText(replace_range, ptr_call);
                ompTree->add_function_call(call, lbl.get_lbl());
                continue;
            }

            if (ompTree->add_function_call(call, lbl.get_lbl())) {
#ifdef VERBOSE
                llvm::errs() << "generating normal call for " << loc.get_funcname() << "\n";
#endif
                std::string new_call;
                if (loc.get_funcname() == "checkpoint") {
                    std::stringstream ss;
                    if (blockCheckpoints) {
                        ss << "if (0) { ";
                    }
                    ss << "checkpoint_transformed(" << lbl.get_lbl() <<
                        ", " << get_loc_arg(call, loc.get_funcname()) << ")";
                    if (blockCheckpoints) {
                        ss << "; } ";
                    }
                    new_call = ss.str();
                } else {
                    new_call = generateNormalCall(call, loc, lbl, callsite);
                }

                clang::SourceRange replace_range(call->getLocStart(), call->getLocEnd());
                ReplaceText(replace_range, new_call);
            }
        }
    }

    /*
     * For each declaration, decide to hoist it or classify it into a region in
     * this function.
     */
    for (std::vector<DeclarationInfo>::iterator i = vars_to_classify.begin(),
            e = vars_to_classify.end(); i != e; i++) {
        DeclarationInfo curr = *i;
        std::map<clang::VarDecl *, StackAlloc *> allocs = curr.get_allocs();

        if (is_omp_for_iter_declaration(curr.get_decl())) continue;

        OMPRegion *true_region =
            ompTree->find_containing_region(curr.get_decl());

        bool hoistable = is_hoistable(curr.get_decl(), curr.get_allocs());
        OMPRegion *region;
        if (hoistable) {
            region = NULL;
            curr.hoist(stmtToString(curr.get_decl()));
            RemoveText(clang::SourceRange(curr.get_decl()->getLocStart(),
                        curr.get_decl()->getLocEnd()));
            if (!gen_quick && true_region) {
                for (std::map<clang::VarDecl *, StackAlloc *>::iterator ii =
                        allocs.begin(), ee = allocs.end(); ii != ee; ii++) {
                    std::string varname =
                        ii->second->get_varname_from_mangled_name();
                    insertions->AppendFirstPrivate(true_region->get_line(),
                            true_region->get_last_line(), varname);
                }
            }
        } else {
            region = ompTree->find_containing_region(curr.get_decl());
        }
        if (vars_in_regions.find(region) == vars_in_regions.end()) {
            vars_in_regions[region] =
                new std::vector<DeclarationInfo>();
        }

        std::vector<DeclarationInfo> *vars = vars_in_regions.at(region);
        if (hoistable) {
            vars->insert(vars->begin(), curr);
        } else {
            vars->push_back(curr);
        }
    }

    /*
     * Assert that all calls to register custom variable initialization handlers
     * are performed in single-threaded regions.
     */
    for (std::vector<const CallExpr *>::iterator i =
            calls_to_register_callbacks.begin(), e =
            calls_to_register_callbacks.end(); i != e; i++) {
        const CallExpr *call = *i;
        OMPRegion *region = ompTree->find_containing_region(call);
        if (region != NULL) {
            fprintf(stderr, "Calls to register_custom_init_handler must be in "
                    "single-threaded regions.\n");
            exit(1);
        }
    }

    VisitRegion(NULL, SM->getPresumedLineNumber(new_stack_calls.at(
                    curr_func_decl)->getLocStart()));

    InsertTextAfterToken(new_stack_calls.at(curr_func_decl)->getLocEnd(),
            " ; " + insert_at_front);

    vars_in_regions.clear();
    calls_found.clear();
    vars_to_classify.clear();
    calls_to_register_callbacks.clear();
    change_loc_iters.clear();
}

void CallingAndOMPPass::VisitStmt(const clang::Stmt *s) {
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

        /*
         * This block of code checks if the current statement is either the
         * first before (predecessors) or after (successors) the line that an
         * OMP pragma is on.
         */
        std::vector<OpenMPPragma> *omp_pragmas =
            insertions->get_omp_pragmas_for(curr_func_decl, *SM);
        for (std::vector<OpenMPPragma>::iterator i = omp_pragmas->begin(),
                e = omp_pragmas->end(); i != e; i++) {
            OpenMPPragma pragma = *i;

            if (presumed_end.getLine() < pragma.get_line()) {
                if (predecessors.find(pragma.get_line()) ==
                        predecessors.end()) {
                    predecessors[pragma.get_line()] = s;
                } else {
                    const clang::Stmt *curr = predecessors[pragma.get_line()];
                    clang::PresumedLoc curr_loc = SM->getPresumedLoc(
                            curr->getLocEnd());
                    if (presumed_end.getLine() > curr_loc.getLine() ||
                            (presumed_end.getLine() == curr_loc.getLine() &&
                             presumed_end.getColumn() > curr_loc.getColumn())) {
                        predecessors[pragma.get_line()] = s;
                    }
                }
            }

            if (presumed_start.getLine() >= pragma.get_line()) {
                if (successors.find(pragma.get_line()) == successors.end()) {
                    successors[pragma.get_line()] = s;
                } else {
                    const clang::Stmt *curr = successors[pragma.get_line()];
                    clang::PresumedLoc curr_loc =
                        SM->getPresumedLoc(curr->getLocStart());
                    if (presumed_start.getLine() < curr_loc.getLine() ||
                            (presumed_start.getLine() == curr_loc.getLine() &&
                             presumed_start.getColumn() < curr_loc.getColumn())) {
                        successors[pragma.get_line()] = s;
                    }
                }
            }
        }

        /*
         * This block of code finds function calls that need to be labelled for
         * resume and for stack tracing, marking them with their line number.
         */
        if (const clang::CallExpr *call =
                clang::dyn_cast<const clang::CallExpr>(s)) {

            std::string callee_name = get_callee_name(call);

            if (should_be_labelled(call)) {
                clang::PresumedLoc presumed = SM->getPresumedLoc(start);
                int line_no = presumed.getLine();

                if (calls_found.find(line_no) == calls_found.end()) {
                    calls_found.insert(pair<int, std::vector<CallLocation> >(
                                line_no, std::vector<CallLocation>()));
                }
                calls_found.at(line_no).push_back(CallLocation(
                            callee_name, presumed.getColumn(), call));
            } else if (callee_name == "register_custom_init_handler") {
                calls_to_register_callbacks.push_back(call);
            }

            /*
             * If this is a direct call to a function declared external to this
             * compilation unit, declare a conditional NPM variable for it and
             * create a function pointer declaration for its NPM version.
             */
            if (call->getDirectCallee() &&
                    ignorable->find(callee_name) == ignorable->end() &&
                    callee_name != "checkpoint" &&
                    definitions_in_main_file.find(callee_name) ==
                        definitions_in_main_file.end()) {
                const int line_no = SM->getPresumedLoc(
                        call->getLocStart()).getLine();

                if (external_calls.find(callee_name) ==
                        external_calls.end()) {
                    /*
                     * Construct a function pointer declaration for this
                     * external function.
                     */
                    const FunctionType *ftype =
                        call->getDirectCallee()->getFunctionType();
                    assert(ftype);
                    std::string type_str =
                        ftype->getCanonicalTypeInternal().getAsString();
                    std::string varname = get_external_func_name(
                            callee_name);

                    int index = 0;
                    while (type_str[index] != '(') index++;
                    type_str.insert(index, "(*" + varname + ")");

                    std::string filename = SM->getPresumedLoc(
                            call->getLocStart()).getFilename();

                    external_calls.insert(
                            std::pair<std::string, ExternalNPMCall>(
                                callee_name, ExternalNPMCall(callee_name,
                                    varname, "static " + type_str, line_no,
                                    filename)));
                } else {
                    external_calls.at(callee_name).update_line(line_no);
                }
            }

            /*
             * Keep track of new_stack calls so we can use them as markers to
             * insert after.
             */
            if (callee_name == "new_stack") {
                if (new_stack_calls.find(curr_func_decl) !=
                        new_stack_calls.end()) {
                    llvm::errs() << curr_func << "\n";
                    assert(false);
                }
                new_stack_calls[curr_func_decl] = call;
            }
        }

        // Track stack variables to record.
        if (s->getStmtClass() == clang::Stmt::DeclStmtClass) {
            const clang::DeclStmt *d = clang::dyn_cast<clang::DeclStmt>(s);

            std::map<clang::VarDecl *, StackAlloc *> allocs =
                hasValidDeclarations(d);
            if (allocs.size() > 0) {
                vars_to_classify.push_back(DeclarationInfo(d, allocs));
            }
        }
    }

    visitChildren(s);
}
