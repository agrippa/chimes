#ifndef OMP_PASS_H
#define OMP_PASS_H

#include <string>
#include <vector>

#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Basic/SourceManager.h"

#include "ParentTransform.h"

class DeclarationInfo {
    public:
        DeclarationInfo(const clang::DeclStmt *set_decl,
                std::map<clang::VarDecl *, StackAlloc *> set_allocs) :
            decl(set_decl), allocs(set_allocs), hoisted(false) {}

        const clang::DeclStmt *get_decl() { return decl; }
        std::map<clang::VarDecl *, StackAlloc *> get_allocs() { return allocs; }

        void hoist(std::string set_as_string) {
            hoisted = true;
            as_string = set_as_string;
        }
        bool is_hoisted() { return hoisted; }
        std::string get_as_string() { return as_string; }

    private:
        const clang::DeclStmt *decl;
        std::map<clang::VarDecl *, StackAlloc *> allocs;
        bool hoisted;
        std::string as_string;
};

class CallLocation {
    public:
        CallLocation(std::string set_funcname, int set_col, int set_label,
                const clang::CallExpr *set_call) : funcname(set_funcname),
                col(set_col), label(set_label), call(set_call) {}
        int get_col() { return col; }
        int get_label() { return label; }
        const clang::CallExpr *get_call() { return call; }
        std::string get_funcname() { return funcname; }

        bool operator < (const CallLocation& other) const {
            return col < other.col;
        }

    private:
        std::string funcname;
        int col;
        int label;
        const clang::CallExpr *call;
};

class CallingAndOMPPass : public ParentTransform {
public:
    CallingAndOMPPass();

    void VisitStmt(const clang::Stmt *s) override;
    void VisitTopLevel(clang::Decl *toplevel) override;

    bool usesStackInfo() override { return false; }
    bool setsLastGoto() override { return false; }
    bool createsRegisterLabels() override { return true; }
    bool createsFunctionLabels() override { return true; }
    bool createsOMPTree() override { return true; }

private:
    std::map<clang::VarDecl *, StackAlloc *> hasValidDeclarations(
            const clang::DeclStmt *d);
    std::map<int, std::vector<CallLocation>> calls_found;
    std::map<OMPRegion *, std::vector<DeclarationInfo> *> vars_in_regions;
    std::map<clang::FunctionDecl *, const clang::CallExpr *> new_stack_calls;
    std::vector<DeclarationInfo> vars_to_classify;
    std::string get_chimes_parent_thread_varname();
    bool is_inside_if_cond(const clang::Stmt *stmt);
    bool is_inside_while_cond(const clang::Stmt *stmt);
    std::string get_unique_blocker_varname();
    std::string get_unique_parent_stack_depth_varname();
    std::string get_unique_call_stack_depth_varname();
    std::string get_unique_region_varname();

    /*
     * Map from line containing a OMP pragma to its immediate predessor. It is
     * safe to use a line here because no more than one pragma can appear on
     * each line.
     */
    std::map<int, const clang::Stmt *> predecessors;
    std::map<int, const clang::Stmt *> successors;

    std::string handleDecl(const clang::DeclStmt *d,
            std::map<clang::VarDecl *, StackAlloc *> allocs,
            std::string *force, std::stringstream *entry_ss,
            DeclarationInfo *info);
    void VisitRegion(OMPRegion *region);

    std::set<std::string> supported_omp_clauses;
    std::set<std::string> supported_omp_pragmas;
    int chimes_parent_thread_counter;
    int blocker_varname_counter;
    int parent_stack_depth_varname_counter;
    int call_stack_depth_varname_counter;
    int region_varname_counter;
};

#endif
