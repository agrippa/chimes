#include <sstream>

#include "NumDebugTransform.h"
#include "DesiredInsertions.h"
#include <clang/AST/Stmt.h>

extern std::string constructMangledName(std::string varname);

extern DesiredInsertions *insertions;
extern std::vector<StackAlloc *> *insert_at_front;

static std::vector<MatchedLocation *> already_matched;
static std::vector<int> matched_exits;
static bool found_main = false;

static bool matched(int line, int col, std::string &filename) {
    for (std::vector<MatchedLocation *>::iterator i = already_matched.begin(),
            e = already_matched.end(); i != e; i++) {
        MatchedLocation *loc = *i;
        if (loc->get_line() == line && loc->get_col() == col &&
                loc->get_filename() == filename) {
            return true;
        }
    }
    return false;
}

static void mark_matched(int line, int col, std::string &filename) {
    MatchedLocation *loc = new MatchedLocation(line, col, filename);
    already_matched.push_back(loc);
}

static std::string constructRegisterStackVar(StackAlloc *alloc) {
    int first_pipe = alloc->get_mangled_varname().find('|');
    std::string actual_name = alloc->get_mangled_varname().substr(
            first_pipe + 1);;
    actual_name = actual_name.substr(0, actual_name.find('|'));

    std::stringstream ss;
    ss << " register_stack_var(\"" << alloc->get_mangled_varname() <<
        "\", \"" << alloc->get_full_type() << "\", &" <<
        actual_name << ", " << (alloc->get_type_size_in_bits() / 8)
        << ", " << (alloc->get_is_ptr() ? "1" : "0") << ", " <<
        (alloc->get_is_struct() ? "1" : "0") << ", " <<
        alloc->get_num_ptr_fields();
    for (std::vector<std::string>::iterator ptrs =
            alloc->ptrs_begin(), ptrs_end = alloc->ptrs_end();
            ptrs != ptrs_end; ptrs++) {
        std::string ptr_field = *ptrs;
        ss << ", (int)offsetof(struct " <<
            alloc->get_struct_type_name() << ", " << ptr_field <<
            ")";
    }
    ss << "); ";

    return ss.str();
}

void NumDebugTransform::VisitStmt(const clang::Stmt *s) {
    clang::SourceLocation start = s->getLocStart();
    clang::SourceLocation end = s->getLocEnd();

    if (start.isValid() && end.isValid() && SM.isInMainFile(start)) {
        unsigned start_line = SM.getPresumedLineNumber(start);
        unsigned start_col = SM.getPresumedColumnNumber(start);
        unsigned end_line = SM.getPresumedLineNumber(end);
        unsigned end_col = SM.getPresumedColumnNumber(end);
        std::string filename = SM.getFilename(start);

        if (insert_at_front != NULL) {
            for (std::vector<StackAlloc *>::iterator i =
                    insert_at_front->begin(), e = insert_at_front->end();
                    i != e; i++) {
                StackAlloc *alloc = *i;

                std::string stmt = constructRegisterStackVar(alloc);

                clang::Stmt::const_child_iterator iter = s->child_begin();
                const clang::Stmt *child = *iter;
                TheRewriter.InsertText(child->getLocStart(), stmt);
            }
            insert_at_front = NULL;
        }

        if (insertions->contains(start_line, start_col, filename) &&
                !matched(start_line, start_col, filename)) {
            mark_matched(start_line, start_col, filename);

            std::vector<int> *groups = insertions->get_groups(start_line,
                    start_col, filename);
            std::stringstream ss;
            ss << "alias_group_changed(" << groups->size();
            for (std::vector<int>::iterator i = groups->begin(),
                    e = groups->end(); i != e; i++) {
                ss << ", " << *i;
            }
            ss << ")";
            switch (parent->getStmtClass()) {
                case clang::Stmt::IfStmtClass: {
                    ss << " || ";
                    TheRewriter.InsertText(start, ss.str(), true, true);
                    break;
                }
                case clang::Stmt::ForStmtClass: {
                    const clang::ForStmt *f = clang::dyn_cast<clang::ForStmt>(parent);
                    if (f->getInit() == s || f->getInc() == s) {
                        ss << ", ";
                        TheRewriter.InsertText(start, ss.str(), true, true);
                    } else if (f->getCond() == s) {
                        llvm::errs() << "Unsupported\n";
                        assert(false);
                    } else {
                        llvm::errs() << "Unsupported\n";
                        assert(false);
                    }
                    break;
                }
                default: {
                    ss << "; ";
                    TheRewriter.InsertText(start, ss.str(), true, true);
                    break;
                }
            }
        }

        if (!found_main && start_line == insertions->get_main_line()) {
            clang::Stmt::const_child_iterator iter = s->child_begin();
            const clang::Stmt *child = *iter;
            std::stringstream ss;

            ss << "init_numdebug(" << insertions->get_struct_fields()->size();
            for (std::vector<StructFields *>::iterator i =
                    insertions->get_struct_fields()->begin(), e =
                    insertions->get_struct_fields()->end(); i != e; i++) {
                StructFields *fields = *i;

                ss << ", \"" << fields->get_name() << "\", " <<
                    fields->num_fields();
                for (std::vector<std::string>::iterator ii = fields->begin(),
                        ee = fields->end(); ii != ee; ii++) {
                    std::string field_name = *ii;
                    ss << ", (int)offsetof(struct " << fields->get_name() <<
                        ", " << field_name << ")";
                }
            }
            ss << "); ";
            TheRewriter.InsertText(child->getLocStart(), ss.str(), true, true);
            found_main = true;
        }

        if (FunctionStartInsertion *insert =
                insertions->is_function_start(start_line)) {
            clang::Stmt::const_child_iterator iter = s->child_begin();
            const clang::Stmt *child = *iter;
            TheRewriter.InsertText(child->getLocStart(), "new_stack(); ", true,
                    true);
        }

        if (insertions->is_function_exit(start_line) &&
                std::find(matched_exits.begin(), matched_exits.end(),
                    start_line) == matched_exits.end()) {
            TheRewriter.InsertText(start, "rm_stack(); ", true,
                    true);
            matched_exits.push_back(start_line);
        }

        if (s->getStmtClass() == clang::Stmt::DeclStmtClass) {
            const clang::DeclStmt *d = clang::dyn_cast<clang::DeclStmt>(s);
            for (clang::DeclStmt::const_decl_iterator i = d->decl_begin(),
                    e = d->decl_end(); i != e; i++) {
                clang::Decl *dd = *i;
                if (clang::VarDecl *v = clang::dyn_cast<clang::VarDecl>(dd)) {
                    std::string mangled = constructMangledName(v->getName().str());
                    StackAlloc *alloc = insertions->findStackAlloc(mangled);
                    if (alloc != NULL) {
                        TheRewriter.InsertTextAfterToken(end, constructRegisterStackVar(alloc));
                    }
                }
            }
        }

        if (s->getStmtClass() == clang::Stmt::CallExprClass) {
            HeapAlloc *alloc = insertions->isMemoryAllocation(start_line,
                    start_col);
            if (alloc != NULL) {
                const clang::CallExpr *call = clang::dyn_cast<clang::CallExpr>(s);
                assert(call != NULL);

                std::stringstream ss;
                ss << alloc->get_fname() << "_wrapper";
                TheRewriter.ReplaceText(start, alloc->get_fname().size(), ss.str());

                std::stringstream ss2;
                ss2 << ", " << alloc->get_group();

                if (alloc->get_fname() == "malloc") {
                    if(alloc->get_have_type_info()) {
                        ss2 << ", 1"; // has type info
                        ss2 << ", " << (alloc->get_is_elem_ptr() ? "1" : "0") <<
                            ", " << (alloc->get_is_elem_struct() ? "1" : "0");
                        if (alloc->get_is_elem_struct()) {
                            ss2 << "< (int)sizeof(struct " <<
                                alloc->get_struct_type_name() << ", " <<
                                alloc->get_num_field_ptrs();

                            std::vector<std::string> *struct_field_ptrs =
                                alloc->get_struct_field_ptrs();
                            for (std::vector<std::string>::iterator p_i =
                                    struct_field_ptrs->begin(), p_e =
                                    struct_field_ptrs->end(); p_i != p_e; p_i++) {
                                std::string fieldname = *p_i;
                                ss2 << ", (int)offsetof(struct " <<
                                    alloc->get_struct_type_name() << ", " <<
                                    fieldname << ")";
                            }
                        }
                    } else {
                        ss2 << ", 0"; // does not have type info
                    }
                }

                const clang::Expr *arg = call->getArg(call->getNumArgs() - 1);
                clang::SourceLocation end_arg = arg->getLocEnd();
                TheRewriter.InsertTextAfterToken(end_arg, ss2.str());
            }
        }
    }

    for (clang::Stmt::const_child_iterator i = s->child_begin(),
            e = s->child_end(); i != e; i++) {
        const clang::Stmt *child = *i;
        if (child != NULL) {
            parent = s;
            VisitStmt(child);
        }
    }
}
