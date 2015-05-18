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

#include "CallTranslator.h"

using namespace clang;
using namespace clang::driver;
using namespace clang::tooling;

static llvm::cl::OptionCategory ToolingSampleCategory("chimes options");
static llvm::cl::opt<std::string> output_file("o",
        llvm::cl::desc("Output file"), llvm::cl::value_desc("output_file"));
static llvm::cl::opt<std::string> data_file("d",
        llvm::cl::desc("Data file"), llvm::cl::value_desc("data_file"));

INSIDE_QUICK_FUNC curr_func_is_quick = UNKNOWN;
static CallTranslator *transform = NULL;

class TransformASTConsumer : public ASTConsumer {
public:
  TransformASTConsumer(Rewriter &set_R, ASTContext &set_Context) :
          R(set_R), Context(set_Context) { }

  // Override the method that gets called for each parsed top-level
  // declaration.
  bool HandleTopLevelDecl(DeclGroupRef DR) override {
    assert(transform != NULL);
    transform->setRewriter(R);
    transform->setContext(Context);

    // For each top-level function defined
    for (DeclGroupRef::iterator b = DR.begin(), e = DR.end(); b != e; ++b) {
        Decl *toplevel = *b;

        if (isa<FunctionDecl>(toplevel)) {
            FunctionDecl *fdecl = clang::dyn_cast<FunctionDecl>(toplevel);
            assert(fdecl != NULL);

            if (fdecl->isThisDeclarationADefinition() &&
                    R.getSourceMgr().isInMainFile(fdecl->getLocation())) {
                std::string fname = fdecl->getName().str();
                std::string quick("_quick");
                std::string resumable("_resumable");
                if (fname.find(quick) == fname.size() - quick.size()) {
                    curr_func_is_quick = YES;
                } else if (fname.find(resumable) == fname.size() -
                        resumable.size()) {
                    curr_func_is_quick = NO;
                } else {
                    curr_func_is_quick = UNKNOWN;
                }

                transform->Visit((*b)->getBody());
            }
        }
    }
    return true;
  }

private:
  Rewriter &R;
  ASTContext &Context;
};

// For each source file provided to the tool, a new FrontendAction is created.
template <class c> class NumDebugFrontendAction : public ASTFrontendAction {
public:
  NumDebugFrontendAction() {
      std::string code;
      out = new llvm::raw_fd_ostream(output_file.c_str(), code,
              llvm::sys::fs::OpenFlags::F_None);
  }

  void EndSourceFileAction() override {
    SourceManager &SM = rewriter.getSourceMgr();
    rewriter.getEditBuffer(SM.getMainFileID()).write(*out);
    out->close();
  }

  clang::ASTConsumer *CreateASTConsumer(CompilerInstance &CI,
                                                 StringRef file) override {
    rewriter.setSourceMgr(CI.getSourceManager(), CI.getLangOpts());
    return new TransformASTConsumer(rewriter, CI.getASTContext());
  }

private:
  llvm::raw_fd_ostream *out;
  Rewriter rewriter;
};

static void check_opt(llvm::cl::opt<std::string> s, const char *msg) {
    if (s.size() == 0) {
        llvm::errs() << std::string(msg) << " is required\n";
        exit(1);
    }
}

int main(int argc, const char **argv) {
  CommonOptionsParser op(argc, argv, ToolingSampleCategory);

  check_opt(output_file, "output_file");
  check_opt(data_file, "data_file");

  assert(op.getSourcePathList().size() == 1);
  std::string just_filename = op.getSourcePathList()[0].substr(
          op.getSourcePathList()[0].rfind('/') + 1);
  just_filename = just_filename.substr(0, just_filename.rfind("."));

  std::unique_ptr<FrontendActionFactory> factory_ptr = newFrontendActionFactory<
      NumDebugFrontendAction<TransformASTConsumer>>();
  FrontendActionFactory *factory = factory_ptr.get();

  transform = new CallTranslator(data_file.c_str());
  ClangTool *Tool = new ClangTool(op.getCompilations(), op.getSourcePathList());
  int err = Tool->run(factory);
  if (err) return err;

  return 0;
}
