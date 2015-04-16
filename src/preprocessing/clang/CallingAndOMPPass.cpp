#include <sstream>
#include <set>

#include "CallingAndOMPPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <clang/AST/Decl.h>
#include <llvm/Support/raw_ostream.h>

/**
 * This pass is responsible for setting up the intra-function jumps for both OMP
 * regions and for regular function calls.
 */

extern DesiredInsertions *insertions;
extern std::string stmtToString(const clang::Stmt *S, clang::ASTContext *Context);
extern clang::FunctionDecl *curr_func_decl;
extern std::set<std::string> *ignorable;

extern std::string constructMangledName(std::string varname);

std::map<clang::VarDecl *, StackAlloc *> CallingAndOMPPass::hasValidDeclarations(
        const clang::DeclStmt *d) {
    std::map<clang::VarDecl *, StackAlloc *> allocs;

    for (clang::DeclStmt::const_decl_iterator i = d->decl_begin(),
            e = d->decl_end(); i != e; i++) {
        clang::Decl *dd = *i;
        if (clang::VarDecl *v = clang::dyn_cast<clang::VarDecl>(dd)) {
            std::string mangled = constructMangledName(v->getName().str());
            StackAlloc *alloc = insertions->findStackAlloc(mangled);

            if (alloc != NULL) {
                assert(allocs.find(v) == allocs.end());
                allocs[v] = alloc;
            }
        }
    }
    return allocs;
}

std::string CallingAndOMPPass::handleDecl(const clang::DeclStmt *d,
        std::map<clang::VarDecl *, StackAlloc *> allocs, std::string *force) {
    clang::SourceLocation start = d->getLocStart();
    clang::SourceLocation end = d->getLocEnd();

    std::stringstream acc;

    bool anyInitLists = false;
    for (clang::DeclStmt::const_decl_iterator i = d->decl_begin(),
            e = d->decl_end(); i != e; i++) {
        clang::Decl *dd = *i;
        if (clang::VarDecl *v = clang::dyn_cast<clang::VarDecl>(dd)) {

            if (allocs.find(v) != allocs.end()) {
                StackAlloc *alloc = allocs[v];
                acc << constructRegisterStackVar(alloc);
                if (v->hasInit() && clang::dyn_cast<clang::InitListExpr>(v->getInit())) {
                    anyInitLists = true;
                }
            }
        }
    }

    if (acc.str().length() > 0) {
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
        ss << "case(" << lbl << "): { goto call_lbl_" << lbl << "; } ";
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
        toInsertAt = new_stack_call->getLocEnd();
    } else {
        toInsertAt = region->get_start();
    }

    if (vars_in_regions.find(region) != vars_in_regions.end()) {
        std::vector<DeclarationInfo> *vars = vars_in_regions[region];
        std::string first_label;
        for (unsigned i = 0; i < vars->size(); i++) {
            DeclarationInfo curr = (*vars)[i];
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

        std::stringstream entry_ss;
        entry_ss << " if (____chimes_replaying) { goto " << first_label <<
            "; } ";
        InsertTextAfterToken(toInsertAt.getLocWithOffset(1), entry_ss.str());
    } else {
        std::stringstream entry_ss;
        entry_ss << " if (____chimes_replaying) { " << transition_str <<
            " } ";
        /*
         * Increment past the semicolon at the end of the function call. This is
         * fragile.
         */
        InsertTextAfterToken(toInsertAt.getLocWithOffset(1), entry_ss.str());
    }

    for (std::vector<OMPRegion *>::iterator i = children.begin(),
            e = children.end(); i != e; i++) {
        OMPRegion *child = *i;
        VisitRegion(child);
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
        assert(pragma_name == "parallel");

        assert(predecessors.find(pragma.get_line()) != predecessors.end());
        assert(successors.find(pragma.get_line()) != successors.end());

        const clang::Stmt *pre = predecessors[pragma.get_line()];
        clang::SourceLocation pre_loc = pre->getLocEnd();

        const clang::Stmt *post = successors[pragma.get_line()];
        clang::SourceLocation post_loc = post->getLocEnd();
        clang::SourceLocation inner_loc = post->getLocStart();

        std::set<std::string> private_vars;
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
                lbl);
        ompTree->add_region(region);

        //TODO kinda hacky....
        std::stringstream entering_ss;
        entering_ss << "; " <<
            "call_lbl_" << lbl << ": " <<
            "unsigned ____chimes_parent_thread = entering_omp_parallel(" <<
            lbl << ", " << private_vars.size();
        for (std::set<std::string>::iterator varsi = private_vars.begin(),
                varse = private_vars.end(); varsi != varse; varsi++) {
            entering_ss << ", &" << *varsi;
        }
        entering_ss << ")";

        InsertTextAfterToken(pre_loc, entering_ss.str());

        std::stringstream register_ss;
        register_ss << " " <<
            "register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), " <<
            "____chimes_parent_thread, " << private_vars.size();
        for (std::set<std::string>::iterator varsi = private_vars.begin(),
                varse = private_vars.end(); varsi != varse; varsi++) {
            register_ss << ", &" << *varsi;
        }
        register_ss << "); ";
        InsertTextAfterToken(inner_loc, register_ss.str());

        InsertTextAfterToken(post_loc, " leaving_omp_parallel(); ");
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

                std::string func_symbol;
                if (loc.get_funcname() == "anon") {
                    func_symbol = stmtToString(loc.get_call()->getCallee());
                } else {
                    func_symbol = "&" + loc.get_funcname();
                }

                std::stringstream ss;
                ss << " call_lbl_" << loc.get_label() << ": calling((void*)" <<
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
        OMPRegion *region = ompTree->find_containing_region(curr.get_decl());
        if (vars_in_regions.find(region) == vars_in_regions.end()) {
            vars_in_regions[region] =
                new std::vector<DeclarationInfo>();
        }
        vars_in_regions[region]->push_back(curr);
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
                int lbl = getNextFunctionLabel();
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