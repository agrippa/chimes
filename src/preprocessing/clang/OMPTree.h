#ifndef OMP_TREE_H
#define OMP_TREE_H

#include "clang/AST/AST.h"
#include "clang/Basic/SourceManager.h"

#include <vector>

class ContainedFunctionCall {
    public:
        ContainedFunctionCall(const clang::CallExpr *set_call, int set_lbl) :
            call(set_call), lbl(set_lbl) {}

        const clang::CallExpr *get_call() { return call; }
        int get_lbl() { return lbl; }

    private:
        const clang::CallExpr *call;
        int lbl;
};

class OMPRegion {
    public:
        OMPRegion(int set_line, clang::SourceLocation set_start,
                clang::SourceLocation set_end, std::string set_pragma_name,
                std::map<std::string, std::vector<std::string> > set_clauses,
                int set_lbl, bool set_parallel_for,
                const clang::Stmt *set_body) : parent(NULL),
                line(set_line), start(set_start), end(set_end),
                pragma_name(set_pragma_name), clauses(set_clauses),
                lbl(set_lbl), parallel_for(set_parallel_for), body(set_body) {}

        void add_child(OMPRegion *child) { children.push_back(child); }
        void set_parent(OMPRegion *set_parent) { parent = set_parent; }
        clang::SourceLocation get_start() { return start; }
        clang::SourceLocation get_end() { return end; }
        OMPRegion *get_parent() { return parent; }
        std::vector<OMPRegion *> get_children() { return children; }
        int get_lbl() { return lbl; }
        bool is_parallel_for() { return parallel_for; }
        const clang::Stmt *get_body() { return body; }

    private:
        OMPRegion *parent;
        std::vector<OMPRegion *> children;
        int line;
        clang::SourceLocation start, end;
        std::string pragma_name;
        std::map<std::string, std::vector<std::string> > clauses;
        int lbl;
        bool parallel_for;
        const clang::Stmt *body;
};

class OMPTree {
    public:
        OMPTree(clang::SourceManager *set_SM,
                clang::ASTContext *set_Context) : SM(set_SM),
                Context(set_Context) {}

        void add_region(OMPRegion *region);
        OMPRegion *find_containing_region(const clang::Stmt *d);
        void add_function_call(const clang::CallExpr *call, int lbl);

        std::vector<OMPRegion *> get_all_children(OMPRegion *region) {
            if (region == NULL) {
                return roots;
            } else {
                return region->get_children();
            }
        }

        std::vector<ContainedFunctionCall> *get_contained_calls(
                OMPRegion *region) {
            if (calls_in_regions.find(region) == calls_in_regions.end()) {
                return new std::vector<ContainedFunctionCall>();
            } else {
                return calls_in_regions[region];
            }
        }

        std::string str();
        std::string region_str(OMPRegion *region);

    private:
        OMPRegion *find_parent(OMPRegion *region);
        OMPRegion *find_parent_helper(OMPRegion *region, OMPRegion *curr);
        bool isBetween(clang::SourceLocation check,
                clang::SourceLocation start, clang::SourceLocation end);

        std::vector<OMPRegion *> roots;
        std::vector<OMPRegion *> leaves;
        clang::SourceManager *SM;
        clang::ASTContext *Context;
        std::map<OMPRegion *,
            std::vector<ContainedFunctionCall> *> calls_in_regions;
};

#endif
