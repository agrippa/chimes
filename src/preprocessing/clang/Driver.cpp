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

#include "ParentTransform.h"
#include "InitPass.h"
#include "StartExitPass.h"
#include "CallingPass.h"
#include "SplitInitsPass.h"
#include "RegisterStackPass.h"
#include "MallocPass.h"
#include "AliasChangedPass.h"
#include "DesiredInsertions.h"

using namespace clang;
using namespace clang::driver;
using namespace clang::tooling;

static llvm::cl::OptionCategory ToolingSampleCategory("numdebug options");
static llvm::cl::opt<std::string> line_info_file("l",
        llvm::cl::desc("Line info filename"), llvm::cl::value_desc("line_file"));
static llvm::cl::opt<std::string> struct_file("s",
        llvm::cl::desc("Struct info filename"),
        llvm::cl::value_desc("struct_file"));
static llvm::cl::opt<std::string> stack_allocs_file("a",
        llvm::cl::desc("Stack allocations info filename"),
        llvm::cl::value_desc("stack_allocs_file"));
static llvm::cl::opt<std::string> original_file("i",
        llvm::cl::desc("Original input file"),
        llvm::cl::value_desc("original_file"));
static llvm::cl::opt<std::string> heap_file("m",
        llvm::cl::desc("Heap info file"),
        llvm::cl::value_desc("heap_file"));

DesiredInsertions *insertions = NULL;
std::string curr_func;
std::vector<StackAlloc *> *insert_at_front = NULL;

static std::vector<std::string> created_vars;
static std::string current_output_file;
static std::map<std::string, int> num_register_labels;
static std::map<std::string, int> num_call_labels;

class Pass {
public:
    Pass(ParentTransform *set_impl,
            const char *set_suffix) : impl(set_impl), suffix(set_suffix) { }

    ParentTransform *get_impl() { return impl; }
    std::string get_suffix() { return suffix; }
private:
    ParentTransform *impl;
    std::string suffix;
};

ParentTransform *curr_visitor = NULL;
std::vector<Pass *> passes;

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

    created_vars.push_back(mangled);
    return mangled;
}

class TransformASTConsumer : public ASTConsumer {
public:
  TransformASTConsumer(Rewriter &set_R, ASTContext &set_Context) :
          R(set_R), Context(set_Context) { }

  // Override the method that gets called for each parsed top-level
  // declaration.
  bool HandleTopLevelDecl(DeclGroupRef DR) override {
    ParentTransform *visitor = curr_visitor;
    visitor->setRewriter(R);
    visitor->setContext(Context);

    for (DeclGroupRef::iterator b = DR.begin(), e = DR.end(); b != e; ++b) {
      // Traverse the declaration using our AST visitor.
      Decl *toplevel = *b;
      clang::SourceLocation loc = toplevel->getLocation();

      if (isa<FunctionDecl>(toplevel) && toplevel->hasBody() &&
              visitor->getSM()->isInMainFile(loc)) {
          FunctionDecl *fdecl = clang::dyn_cast<FunctionDecl>(toplevel);
          assert(fdecl != NULL);
          curr_func = fdecl->getNameAsString();

          clang::PresumedLoc pre_loc = visitor->getSM()->getPresumedLoc(loc);
          std::string filename(pre_loc.getFilename());

          if (visitor->usesStackInfo()) {
              assert(insert_at_front == NULL);
              insert_at_front = new std::vector<StackAlloc *>();

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
          } else {
              insert_at_front = NULL;
          }

          if (visitor->createsRegisterLabels())
              visitor->resetRegisterLabels();
          if (visitor->createsFunctionLabels())
              visitor->resetFunctionLabels();
          if (visitor->setsLastGoto())
              visitor->resetLastGoto();
          visitor->resetRootFlag();

          // (*b)->dump();
          // llvm::errs() << "\n";
          visitor->Visit((*b)->getBody());
          visitor->VisitTopLevel(*b);

          std::stringstream id_str;
          std::string demangled_filename = remove_filename_insertions(filename);
          id_str << demangled_filename << ":" << curr_func << ":" <<
              pre_loc.getLine() << ":" << pre_loc.getColumn();

          if (visitor->createsRegisterLabels()) {
              assert(num_register_labels.find(id_str.str()) == num_register_labels.end());
              num_register_labels[id_str.str()] = visitor->getNumRegisterLabels();
          }

          if (visitor->createsFunctionLabels()) {
              assert(num_call_labels.find(id_str.str()) == num_call_labels.end());
              num_call_labels[id_str.str()] = visitor->getNumFunctionLabels();
          }

          if (visitor->setsLastGoto() && visitor->hasLastGoto()) {
              assert(num_register_labels.find(id_str.str()) != num_register_labels.end());
              assert(num_call_labels.find(id_str.str()) != num_call_labels.end());
              std::stringstream ss;
              ss << "lbl_" << num_register_labels[id_str.str()] << ": if (____numdebug_replaying) { "
                  "int dst = get_next_call(); switch(dst) { ";
              for (int l = 0; l < num_call_labels[id_str.str()]; l++) {
                  ss << "case(" << l << "): { goto call_lbl_" << l << "; } ";
              }
              ss << "default: { fprintf(stderr, \"Unknown label %d at %s:%d\\n\", "
                  "dst, __FILE__, __LINE__); exit(1); }";
              ss << " } } ";
              R.InsertTextAfterToken(visitor->getLastGoto(), ss.str());
          }
      }
    }
    return true;
  }

private:
  std::string remove_filename_insertions(std::string filename) {
      for (std::vector<Pass *>::iterator pass_iter = passes.begin(),
              pass_end = passes.end(); pass_iter != pass_end; pass_iter++) {
          Pass *pass = *pass_iter;
          std::string suffix = pass->get_suffix();
          size_t index = filename.find(suffix);
          if (index != std::string::npos && index == filename.length() - 4 -
                  suffix.length()) {
              std::stringstream ss;
              ss << filename.substr(0, filename.length() - 4 -
                      suffix.length()) << ".cpp";
              return ss.str();
          }
      }
      return filename;
  }

  Rewriter &R;
  ASTContext &Context;
};

// For each source file provided to the tool, a new FrontendAction is created.
template <class c> class NumDebugFrontendAction : public ASTFrontendAction {
public:
  NumDebugFrontendAction() {
      std::error_code code;
      out = new llvm::raw_fd_ostream(current_output_file, code,
              llvm::sys::fs::OpenFlags::F_None);
  }

  void EndSourceFileAction() override {
    SourceManager &SM = TheRewriter.getSourceMgr();
    TheRewriter.getEditBuffer(SM.getMainFileID()).write(*out);
    out->close();
  }

  std::unique_ptr<ASTConsumer> CreateASTConsumer(CompilerInstance &CI,
                                                 StringRef file) override {
    TheRewriter.setSourceMgr(CI.getSourceManager(), CI.getLangOpts());
    std::unique_ptr<ASTConsumer> consumer =
        llvm::make_unique<TransformASTConsumer>(TheRewriter,
                CI.getASTContext());
    return consumer;
  }

private:
  llvm::raw_fd_ostream *out;
  Rewriter TheRewriter;
};

int main(int argc, const char **argv) {
  CommonOptionsParser op(argc, argv, ToolingSampleCategory);

  insertions = new DesiredInsertions(line_info_file.c_str(),
          struct_file.c_str(),
          stack_allocs_file.c_str(),
          heap_file.c_str());

  std::string just_filename = original_file.substr(original_file.rfind('/') + 1);
  std::string input_folder = original_file.substr(0, original_file.rfind('/'));
  assert(just_filename.find(".cpp") == just_filename.length() - 4);
  just_filename = just_filename.substr(0, just_filename.find(".cpp"));

  std::stringstream ss;

  /*
   * This pass can get messed up if the starting columns of basic blocks are
   * shifted. This must be run before any passes that might insert things at the
   * start of lines (e.g. labels).
   *
   * This pass also gets messed up if the input filename isn't the original
   * file.
   */
  passes.push_back(new Pass(new AliasChangedPass(), ".alias"));
  passes.push_back(new Pass(new MallocPass(), ".malloc"));
  passes.push_back(new Pass(new CallingPass(), ".calling"));
  passes.push_back(new Pass(new StartExitPass(), ".start"));
  passes.push_back(new Pass(new InitPass(), ".init"));
  passes.push_back(new Pass(new SplitInitsPass(), ".split"));
  passes.push_back(new Pass(new RegisterStackPass(), ".register"));

  std::unique_ptr<FrontendActionFactory> factory_ptr = newFrontendActionFactory<
      NumDebugFrontendAction<TransformASTConsumer>>();
  FrontendActionFactory *factory = factory_ptr.get();

  bool first_pass = true;
  for (std::vector<Pass *>::iterator p = passes.begin(), pe = passes.end();
          p != pe; p++) {
      Pass *pass = *p;
      ClangTool *Tool;

      if (first_pass) {
          llvm::errs() << op.getSourcePathList().size() << "\n";
          Tool = new ClangTool(op.getCompilations(), op.getSourcePathList());
      } else {
          std::vector<std::string> inputs; inputs.push_back(current_output_file);
          Tool = new ClangTool(op.getCompilations(), inputs);
      }

      std::stringstream ss;
      // ss << input_folder << "/" << just_filename << pass->get_suffix() << ".cpp";
      ss << just_filename << pass->get_suffix() << ".cpp";
      current_output_file = ss.str();
      curr_visitor = pass->get_impl();

      llvm::errs() << "Outputting to " << current_output_file << "\n";

      int err = Tool->run(factory);
      if (err) return err;

      first_pass = false;
  }

  return 0;
}
