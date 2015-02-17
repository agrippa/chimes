#include <sstream>

#include "RegisterStackPass.h"
#include "DesiredInsertions.h"

#include <clang/AST/ASTContext.h>
#include <clang/AST/Stmt.h>
#include <llvm/Support/raw_ostream.h>

extern DesiredInsertions *insertions;
extern std::map<std::string, OMPTree *> ompTrees;

extern std::string constructMangledName(std::string varname);

void RegisterStackPass::handleDecl(const clang::DeclStmt *d,
        std::string *force) {
    clang::SourceLocation start = d->getLocStart();
    clang::SourceLocation end = d->getLocEnd();

    std::stringstream acc;

    bool anyInitLists = false;
    for (clang::DeclStmt::const_decl_iterator i = d->decl_begin(),
            e = d->decl_end(); i != e; i++) {
        clang::Decl *dd = *i;
        if (clang::VarDecl *v = clang::dyn_cast<clang::VarDecl>(dd)) {
            std::string mangled = constructMangledName(v->getName().str());
            StackAlloc *alloc = insertions->findStackAlloc(mangled);

            if (alloc != NULL) {
                acc << constructRegisterStackVar(alloc);
                if (v->hasInit() && clang::dyn_cast<clang::InitListExpr>(v->getInit())) {
                    anyInitLists = true;
                }
            }
        }
    }

    if (acc.str().length() > 0) {
        std::stringstream ss;
        int lbl = getNextRegisterLabel();
        ss << " lbl_" << lbl << ": ";

        std::stringstream ss2;
        if (force != NULL) {
            ss2 << " if (____numdebug_replaying) { " << *force << " } ";
        } else {
            ss2 << " if (____numdebug_replaying) { goto lbl_" << (lbl + 1) <<
                "; } ";
        }

        InsertTextBefore(start, ss.str());
        InsertTextAfterToken(end, acc.str());
        InsertTextAfterToken(end, ss2.str());

        setLastGoto(end);
    }
}

// region may be NULL
void RegisterStackPass::VisitRegion(OMPRegion *region) {
    OMPTree *tree = ompTrees[curr_func];

    std::vector<OMPRegion *> children = tree->get_all_children(region);
    std::vector<ContainedFunctionCall> *calls = tree->get_contained_calls(
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
    ss << "default: { exit(42); } } ";
    std::string transition_str = ss.str();

    if (vars_in_regions.find(region) != vars_in_regions.end()) {
        std::vector<const clang::DeclStmt *> *vars = vars_in_regions[region];
        for (unsigned i = 0; i < vars->size(); i++) {
            const clang::DeclStmt *d = (*vars)[i];
            if (i == vars->size() - 1) {
                handleDecl(d, &transition_str);
            } else {
                handleDecl(d, NULL);
            }
        }
    } else {
        //TODO how to handle regions with no declarations
        assert(false);
    }

    for (std::vector<OMPRegion *>::iterator i = children.begin(),
            e = children.end(); i != e; i++) {
        OMPRegion *child = *i;
        VisitRegion(child);
    }
}

void RegisterStackPass::VisitTopLevel(clang::Decl *toplevel) {
    OMPTree *tree = ompTrees[curr_func];

    VisitRegion(NULL);
}

void RegisterStackPass::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (start.isValid() && end.isValid() && SM->isInMainFile(start)) {
        if (s->getStmtClass() == clang::Stmt::DeclStmtClass) {
            const clang::DeclStmt *d = clang::dyn_cast<clang::DeclStmt>(s);
            assert(ompTrees.find(curr_func) != ompTrees.end());
            OMPTree *tree = ompTrees[curr_func];

            // region may be NULL if this is a top-level stack var
            OMPRegion *region = tree->find_containing_region(d,
                    getParentMap());

            if (vars_in_regions.find(region) == vars_in_regions.end()) {
                vars_in_regions[region] =
                    new std::vector<const clang::DeclStmt *>();
            }
            vars_in_regions[region]->push_back(d);
        }
    }

    visitChildren(s);
}
