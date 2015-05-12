#include <sstream>
#include <set>

#include "CallingAndOMPPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <clang/AST/Decl.h>
#include <llvm/Support/raw_ostream.h>

using namespace std;
using namespace clang;

/**
 * This pass is responsible for setting up the intra-function jumps for both OMP
 * regions and for regular function calls.
 */

extern DesiredInsertions *insertions;
extern std::string stmtToString(const clang::Stmt *S, clang::ASTContext *Context);
extern clang::FunctionDecl *curr_func_decl;
extern std::set<std::string> *ignorable;

extern std::string constructMangledName(std::string varname);

CallingAndOMPPass::CallingAndOMPPass() : chimes_parent_thread_counter(0),
        blocker_varname_counter(0), parent_stack_depth_varname_counter(0),
        call_stack_depth_varname_counter(0), region_varname_counter(0) {
    supported_omp_clauses.insert("private");
    supported_omp_clauses.insert("firstprivate");
    supported_omp_clauses.insert("reduction"); // no explicit support required
    /*
     * We don't actually support checkpointing inside parallel for loops, but we
     * allow them to exist as long as checkpoint() isn't called inside.
     */
    supported_omp_clauses.insert("for");
    // doesn't seem like anything special needs to be done to support this
    supported_omp_clauses.insert("shared");

    supported_omp_pragmas.insert("parallel");
    supported_omp_pragmas.insert("for");
    supported_omp_pragmas.insert("critical");
    supported_omp_pragmas.insert("barrier");
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

std::string CallingAndOMPPass::get_unique_region_varname() {
    std::stringstream ss;
    ss << "____chimes_region_id" << region_varname_counter;
    region_varname_counter++;
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
        std::string *transition_str_ptr) {
    std::stringstream acc_args;
    std::stringstream acc_decls;
    std::stringstream acc_conds;
    bool any_unconditional_vars = false;
    unsigned count_args = 0;
    unsigned count_decls = 0;
    unsigned count_conds = 0;

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

        if (n_hoisted == vars->size()) {
            complete << " if (____chimes_replaying) { " <<
                *transition_str_ptr << " } ";
        } else {
            complete << " if (____chimes_replaying) { goto lbl_0; } ";
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
        if (force != NULL) {
            ss2 << " if (____chimes_replaying) { " << *force << " } ";
        } else {
            ss2 << " if (____chimes_replaying) { goto lbl_" << (lbl + 1) <<
                "; } ";
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

// region may be NULL
void CallingAndOMPPass::VisitRegion(OMPRegion *region) {
    std::vector<OMPRegion *> children = ompTree->get_all_children(region);
    std::vector<ContainedFunctionCall> *calls = ompTree->get_contained_calls(
            region);

    std::stringstream ss;
    ss << " switch(get_next_call()) { ";
    for (std::vector<OMPRegion *>::iterator i = children.begin(),
            e = children.end(); i != e; i++) {
        OMPRegion *region = *i;
        int lbl = region->get_lbl();
        ss << "case(" << lbl << "): { goto call_lbl_" << lbl << "; } ";
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

    /*
     * We only get new_stack calls for the NULL entry region of each function.
     * For all other regions (i.e. OMP parallel regions) we need to insert this
     * immediately following the register_thread_local_stack_vars call, which
     * has only been recently inserted in this pass.
     */
    clang::SourceLocation toInsertAt;
    if (region == NULL) {
        assert(new_stack_calls.find(curr_func_decl) != new_stack_calls.end());
        const clang::CallExpr *new_stack_call = new_stack_calls[curr_func_decl];
        toInsertAt = new_stack_call->getLocEnd().getLocWithOffset(1);
    } else {
        if (region->is_parallel_for()) {
            const clang::ForStmt *for_stmt = clang::dyn_cast<clang::ForStmt>(
                    region->get_body());
            assert(for_stmt);
            toInsertAt = for_stmt->getBody()->getLocStart();
        } else {
            toInsertAt = region->get_start().getLocWithOffset(1);
        }
    }

    if (region != NULL && (region->is_parallel_for() ||
                region->get_is_critical())) {
        std::stringstream entry_ss;
        entry_ss << " if (____chimes_replaying) { chimes_error(); } ";
        InsertTextAfterToken(toInsertAt, entry_ss.str());
    } else if (vars_in_regions.find(region) != vars_in_regions.end()) {
        std::vector<DeclarationInfo> *vars = vars_in_regions[region];
        std::string first_label;
        std::string entry_str;

        bool first_is_hoisted = (*vars)[0].is_hoisted();

        unsigned n_hoisted = 0;
        while (n_hoisted < vars->size() && vars->at(n_hoisted).is_hoisted()) {
            n_hoisted++;
        }

        if (n_hoisted > 0) {
            entry_str = constructStartingRegistrations(vars, n_hoisted,
                    &transition_str);
        }

        for (unsigned i = n_hoisted; i < vars->size(); i++) {
            DeclarationInfo curr = (*vars)[i];
            assert(!curr.is_hoisted());
            const clang::DeclStmt *d = curr.get_decl();
            std::map<clang::VarDecl *, StackAlloc *> allocs = curr.get_allocs();

            std::string *force = NULL;
            if (i == vars->size() - 1) force = &transition_str;

            if (i == 0) {
                first_label = handleDecl(d, allocs, force);
            } else {
                handleDecl(d, allocs, force);
            }
        }

        if (first_is_hoisted) {
            InsertTextAfterToken(toInsertAt, entry_str);
        } else {
            std::stringstream entry_ss;
            if (!first_is_hoisted) {
                entry_ss << " if (____chimes_replaying) { goto " <<
                    first_label << "; } ";
            }
            InsertTextAfterToken(toInsertAt, entry_ss.str());
        }
    } else {
        std::stringstream entry_ss;
        entry_ss << " if (____chimes_replaying) { " << transition_str <<
            " } ";
        InsertTextAfterToken(toInsertAt, entry_ss.str());
    }

    for (std::vector<OMPRegion *>::iterator i = children.begin(),
            e = children.end(); i != e; i++) {
        OMPRegion *child = *i;
        VisitRegion(child);
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

void CallingAndOMPPass::VisitTopLevel(clang::Decl *toplevel) {

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

    std::vector<OpenMPPragma> *omp_pragmas = insertions->get_omp_pragmas_for(
            curr_func_decl, *SM);

    for (std::vector<OpenMPPragma>::iterator i = omp_pragmas->begin(),
            e = omp_pragmas->end(); i != e; i++) {
        OpenMPPragma pragma = *i;
        std::string pragma_name = pragma.get_pragma_name();
        std::map<std::string, std::vector<std::string> > clauses =
            pragma.get_clauses();
        bool is_parallel_for = (clauses.find("for") != clauses.end() ||
                pragma_name == "for");
        bool is_critical = (pragma_name == "critical");
        bool is_barrier = (pragma_name == "barrier");
        bool spawns_threads = (pragma_name == "parallel");
        if (supported_omp_pragmas.find(pragma_name) == supported_omp_pragmas.end()) {
            llvm::errs() << "Unexpected pragma name " << pragma_name << "\n";
            assert(false);
        }

        if (is_barrier) continue;

        assert(predecessors.find(pragma.get_line()) != predecessors.end());
        assert(successors.find(pragma.get_line()) != successors.end());

        const clang::Stmt *pre = predecessors[pragma.get_line()];
        clang::SourceLocation pre_loc;
        // TODO remove this, see point #5 in the TODO file
        if (is_inside_if_cond(pre)) {
            const clang::Stmt *parent = getParent(pre);
            while (!clang::isa<clang::IfStmt>(parent)) {
                parent = getParent(parent);
            }
            const clang::IfStmt *if_stmt = clang::dyn_cast<clang::IfStmt>(parent);
            assert(if_stmt);
            pre_loc = if_stmt->getThen()->getLocStart();
        } else if (is_inside_while_cond(pre)) {
            const clang::Stmt *parent = getParent(pre);
            while (!clang::isa<clang::WhileStmt>(parent)) {
                parent = getParent(parent);
            }
            const clang::WhileStmt *while_stmt =
                clang::dyn_cast<clang::WhileStmt>(parent);
            assert(while_stmt);
            pre_loc = while_stmt->getBody()->getLocStart();
        } else {
            pre_loc = pre->getLocEnd();
        }

        const clang::Stmt *post = successors[pragma.get_line()];
        clang::SourceLocation post_loc = post->getLocEnd();
        clang::SourceLocation inner_loc = post->getLocStart();
        if (is_parallel_for) {
            const clang::ForStmt *for_stmt = clang::dyn_cast<clang::ForStmt>(
                    post);
            assert(for_stmt);
            inner_loc = for_stmt->getBody()->getLocStart();
        }

        std::set<std::string> private_vars;

        for(map<string, vector<string> >::iterator clause_i = clauses.begin(),
                clause_e = clauses.end(); clause_i != clause_e; clause_i++) {
            if (supported_omp_clauses.find(clause_i->first) ==
                    supported_omp_clauses.end()) {
                llvm::errs() << "Unsupported OMP clause " << clause_i->first <<
                    "\n";
                assert(false);
            }
        }

        if (clauses.find("private") != clauses.end()) {
            std::vector<std::string> args = clauses["private"];
            for (std::vector<std::string>::iterator argi = args.begin(),
                    arge = args.end(); argi != arge; argi++) {
                private_vars.insert(*argi);
            }
        }
        if (clauses.find("firstprivate") != clauses.end()) {
            std::vector<std::string> args = clauses["firstprivate"];
            for (std::vector<std::string>::iterator argi = args.begin(),
                    arge = args.end(); argi != arge; argi++) {
                private_vars.insert(*argi);
            }
        }

        int lbl = getNextFunctionLabel();

        OMPRegion *region = new OMPRegion(pragma.get_line(),
                post->getLocStart(), post->getLocEnd(), pragma_name, clauses,
                lbl, is_parallel_for, post, is_critical);
        ompTree->add_region(region);

        //TODO kinda hacky....
        std::string parent_thread_varname = get_chimes_parent_thread_varname();
        std::string stack_depth_varname = get_unique_parent_stack_depth_varname();
        std::string call_depth_varname = get_unique_call_stack_depth_varname();
        std::string region_id_varname = get_unique_region_varname();

        std::stringstream entering_ss;
        entering_ss << "; " << " { call_lbl_" << lbl << ": unsigned " <<
            stack_depth_varname << " = get_parent_vars_stack_depth(); " <<
            "unsigned " << call_depth_varname << " = get_thread_stack_depth(); " <<
            "size_t " << region_id_varname << "; " << 
            "unsigned " << parent_thread_varname <<
            " = entering_omp_parallel(" << lbl << ", &" << region_id_varname <<
            ", " << private_vars.size();
        for (std::set<std::string>::iterator varsi = private_vars.begin(),
                varse = private_vars.end(); varsi != varse; varsi++) {
            entering_ss << ", &" << *varsi;
        }
        entering_ss << "); ";
        std::string blocker_varname;
        if (is_parallel_for) {
            blocker_varname = get_unique_blocker_varname();
            entering_ss << "int " << blocker_varname << " = 1; ";

            insertions->AppendFirstPrivate(pragma.get_line(),
                    pragma.get_last_line(), blocker_varname);
        }

        InsertTextAfterToken(pre_loc, entering_ss.str());

        std::stringstream register_ss;
        if (is_parallel_for) {
            register_ss << "if (" << blocker_varname << ") {";
        }
        register_ss << " " <<
            "register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), " <<
            parent_thread_varname << ", " << "LIBCHIMES_NUM_THREADS(), " <<
            (spawns_threads ? "true" : "false") << ", " <<
            (is_parallel_for ? "true" : "false") << ", " <<
            (is_critical ? "true" : "false") << ", " <<
            stack_depth_varname << ", " << region_id_varname << ", " <<
            private_vars.size();
        for (std::set<std::string>::iterator varsi = private_vars.begin(),
                varse = private_vars.end(); varsi != varse; varsi++) {
            register_ss << ", &" << *varsi;
        }
        register_ss << "); ";
        if (is_parallel_for) {
            register_ss << blocker_varname << " = 0; }";
        }
        InsertTextAfterToken(inner_loc, register_ss.str());

        std::stringstream leaving_stream;
        leaving_stream << " leaving_omp_parallel(" << call_depth_varname <<
            ", " << region_id_varname << "); } ";
        InsertTextAfterToken(post_loc, leaving_stream.str());
    }

    for (std::map<int, std::vector<CallLocation>>::iterator i =
            calls_found.begin(), e = calls_found.end(); i != e; i++) {
        std::vector<CallLocation> calls = i->second;
        std::sort(calls.begin(), calls.end());

        for (std::vector<CallLocation>::iterator ii = calls.begin(),
                ee = calls.end(); ii != ee; ii++) {
            CallLocation loc = *ii;

            if (ignorable->find(loc.get_funcname()) == ignorable->end()) {
                ompTree->add_function_call(loc.get_call(), loc.get_label());

                AliasesPassedToCallSite callsite =
                    insertions->findFirstMatchingCallsite(i->first,
                        loc.get_funcname());

                bool may_cause_checkpoint = true;
                std::string func_symbol;
                if (loc.get_funcname() == "anon") {
                    func_symbol = stmtToString(loc.get_call()->getCallee());
                } else {
                    func_symbol = "&" + loc.get_funcname();
                    may_cause_checkpoint = insertions->may_cause_checkpoint(
                            loc.get_funcname());
                }

                std::stringstream ss;
                if (may_cause_checkpoint) {
                    ss << " call_lbl_" << loc.get_label() << ": ";
                }
                ss << " calling((void*)" <<
                    func_symbol << ", " << loc.get_label() << ", " <<
                    callsite.get_return_alias() << "UL, " << callsite.nparams();
                for (unsigned a = 0; a < callsite.nparams(); a++) {
                    ss << ", (size_t)(" << callsite.alias_no_for(a) << "UL)";
                }
                ss << "); ";

                InsertAtFront(loc.get_call(), ss.str());
            }
        }
    }

    for (std::vector<DeclarationInfo>::iterator i = vars_to_classify.begin(),
            e = vars_to_classify.end(); i != e; i++) {
        DeclarationInfo curr = *i;

        if (is_omp_for_iter_declaration(curr.get_decl())) continue;

        bool hoistable = is_hoistable(curr.get_decl(), curr.get_allocs());
        OMPRegion *region;
        if (hoistable) {
            region = NULL;
            curr.hoist(stmtToString(curr.get_decl()));
            RemoveText(clang::SourceRange(curr.get_decl()->getLocStart(),
                        curr.get_decl()->getLocEnd()));
        } else {
            region = ompTree->find_containing_region(curr.get_decl());
        }
        if (vars_in_regions.find(region) == vars_in_regions.end()) {
            vars_in_regions[region] =
                new std::vector<DeclarationInfo>();
        }

        std::vector<DeclarationInfo> *vars = vars_in_regions[region];
        if (hoistable) {
            vars->insert(vars->begin(), curr);
        } else {
            vars->push_back(curr);
        }
    }

    VisitRegion(NULL);

    vars_in_regions.clear();
    calls_found.clear();
    vars_to_classify.clear();
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

        if (const clang::CallExpr *call =
                clang::dyn_cast<const clang::CallExpr>(s)) {

            std::string callee_name;
            if (call->getDirectCallee() == NULL) {
                callee_name = "anon";
            } else {
                callee_name = call->getDirectCallee()->getNameAsString();
            }

            /*
             * This means we can't support checkpoints from inside
             * constructors.
             */
            if (!clang::isa<const clang::CXXConstructExpr>(call)) {

                clang::PresumedLoc presumed = SM->getPresumedLoc(start);
                int line_no = presumed.getLine();

                if (calls_found.find(line_no) == calls_found.end()) {
                    calls_found[line_no] =
                        std::vector<CallLocation>();
                }
                int lbl;
                if (callee_name == "anon" ||
                        insertions->may_cause_checkpoint(callee_name)) {
                    lbl = getNextFunctionLabel();
                } else {
                    lbl = -1;
                }
                calls_found[line_no].push_back(CallLocation(
                            callee_name, presumed.getColumn(), lbl, call));
            }

            if (callee_name == "new_stack") {
                if (new_stack_calls.find(curr_func_decl) !=
                        new_stack_calls.end()) {
                    llvm::errs() << curr_func << "\n";
                    assert(false);
                }
                new_stack_calls[curr_func_decl] = call;
            }
        }

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
