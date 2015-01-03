//------------------------------------------------------------------------------
// Tooling sample. Demonstrates:
//
// * How to write a simple source tool using libTooling.
// * How to use RecursiveASTVisitor to find interesting AST nodes.
// * How to use the Rewriter API to rewrite the source code.
//
// Eli Bendersky (eliben@gmail.com)
// This code is in the public domain
//------------------------------------------------------------------------------
#include <sstream>
#include <string>

#include "clang/AST/AST.h"
#include "clang/AST/ASTConsumer.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Frontend/ASTConsumers.h"
#include "clang/Frontend/FrontendActions.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"
#include "clang/Rewrite/Core/Rewriter.h"
#include "llvm/Support/raw_ostream.h"

#include "NumDebugTransform.h"
#include "DesiredInsertions.h"

using namespace clang;
using namespace clang::driver;
using namespace clang::tooling;

static llvm::cl::OptionCategory ToolingSampleCategory("numdebug options");
static llvm::cl::opt<std::string> line_info_file("l",
        llvm::cl::desc("Line info filename"), llvm::cl::value_desc("line_file"));
static llvm::cl::opt<std::string> function_start_file("f",
        llvm::cl::desc("Function start info filename"),
        llvm::cl::value_desc("function_start_file"));
static llvm::cl::opt<std::string> struct_file("s",
        llvm::cl::desc("Struct info filename"),
        llvm::cl::value_desc("struct_file"));
static llvm::cl::opt<std::string> function_exits_file("x",
        llvm::cl::desc("Function exits info filename"),
        llvm::cl::value_desc("function_exits_file"));
static llvm::cl::opt<std::string> stack_allocs_file("a",
        llvm::cl::desc("Stack allocations info filename"),
        llvm::cl::value_desc("stack_allocs_file"));
static llvm::cl::opt<std::string> original_file("i",
        llvm::cl::desc("Original input file"),
        llvm::cl::value_desc("original_file"));
static llvm::cl::opt<std::string> declarations_file("d",
        llvm::cl::desc("Declarations file"),
        llvm::cl::value_desc("decl_file"));
static llvm::cl::opt<std::string> heap_file("m",
        llvm::cl::desc("Heap info file"),
        llvm::cl::value_desc("heap_file"));
static llvm::cl::opt<std::string> labels_file("b",
        llvm::cl::desc("Labels info file"),
        llvm::cl::value_desc("label_file"));

DesiredInsertions *insertions = NULL;
std::string curr_func;
std::vector<StackAlloc *> *insert_at_front = NULL;
int lbl_counter;

extern clang::SourceLocation lastGoto;
extern bool hasLastGoto;

static std::vector<std::string> created_vars;

std::string constructMangledName(std::string varname) {
    int count = 0;
    std::stringstream ss;
    ss << curr_func << "|" << varname << "|";
    std::string base = ss.str();

    std::string mangled;
    do {
        std::stringstream ss2;
        ss2 << base << count;
        mangled = ss2.str();
        count++;
    } while(std::find(created_vars.begin(), created_vars.end(), mangled) !=
            created_vars.end());
    return mangled;
}

// Implementation of the ASTConsumer interface for reading an AST produced
// by the Clang parser.
class TransformASTConsumer : public ASTConsumer {
public:
  TransformASTConsumer(Rewriter &set_R) : visitor(set_R), R(set_R) {}

  // Override the method that gets called for each parsed top-level
  // declaration.
  bool HandleTopLevelDecl(DeclGroupRef DR) override {
    for (DeclGroupRef::iterator b = DR.begin(), e = DR.end(); b != e; ++b) {
      // Traverse the declaration using our AST visitor.
      Decl *toplevel = *b;

      if (FunctionDecl *fdecl = clang::dyn_cast<FunctionDecl>(toplevel)) {
          curr_func = fdecl->getName().str();

          assert(insert_at_front == NULL);
          insert_at_front = new std::vector<StackAlloc *>();
          lbl_counter = 0;

          for (FunctionDecl::param_iterator i = fdecl->param_begin(),
                  e = fdecl->param_end(); i != e; i++) {
              ParmVarDecl *param = *i;
              std::string mangled = constructMangledName(param->getName().str());
              StackAlloc *alloc = insertions->findStackAlloc(mangled);
              if (alloc != NULL) {
                  insert_at_front->push_back(alloc);
              }
          }

          if (insert_at_front->empty()) insert_at_front = NULL;
      }

      hasLastGoto = false;
      if ((*b)->getBody() != NULL) {
          visitor.Visit((*b)->getBody());
      }

      if (hasLastGoto) {
          std::stringstream ss;
          ss << "lbl_" << lbl_counter << ": if (____numdebug_replaying) { "
              "int dst = get_next_call(); switch(dst) { ";
          for (std::vector<LabelInfo *>::iterator l_iter =
                  insertions->labels_begin(), l_end = insertions->labels_end();
                  l_iter != l_end; l_iter++) {
              LabelInfo *label = *l_iter;
              if (label->get_function() == curr_func && label->get_type() == CALLSITE) {
                  ss << "case(" << label->get_lbl() << ") { goto call_lbl_" <<
                      label->get_lbl() << "; } ";
              }
          }
          ss << "default: { fprintf(stderr, \"Unknown label %d at %s:%d\\n\", "
              "dst, __FILE__, __LINE__); exit(1); }";
          ss << " } } ";
          R.InsertTextAfterToken(lastGoto, ss.str());
      }
    }
    return true;
  }

private:
  NumDebugTransform visitor;
  Rewriter &R;
};

// For each source file provided to the tool, a new FrontendAction is created.
class NumDebugFrontendAction : public ASTFrontendAction {
public:
  NumDebugFrontendAction() {}
  void EndSourceFileAction() override {
    SourceManager &SM = TheRewriter.getSourceMgr();
    llvm::errs() << "** EndSourceFileAction for: "
                 << SM.getFileEntryForID(SM.getMainFileID())->getName() << "\n";

    // Now emit the rewritten buffer.
    TheRewriter.getEditBuffer(SM.getMainFileID()).write(llvm::outs());
  }

  std::unique_ptr<ASTConsumer> CreateASTConsumer(CompilerInstance &CI,
                                                 StringRef file) override {
    llvm::errs() << "** Creating AST consumer for: " << file << "\n";
    TheRewriter.setSourceMgr(CI.getSourceManager(), CI.getLangOpts());
    return llvm::make_unique<TransformASTConsumer>(TheRewriter);
  }

private:
  Rewriter TheRewriter;
};

int main(int argc, const char **argv) {
  CommonOptionsParser op(argc, argv, ToolingSampleCategory);
  ClangTool Tool(op.getCompilations(), op.getSourcePathList());

  insertions = new DesiredInsertions(original_file.c_str(),
          line_info_file.c_str(),
          function_start_file.c_str(), struct_file.c_str(),
          function_exits_file.c_str(), stack_allocs_file.c_str(),
          declarations_file.c_str(), heap_file.c_str(),
          labels_file.c_str());

  return Tool.run(newFrontendActionFactory<NumDebugFrontendAction>().get());
}
