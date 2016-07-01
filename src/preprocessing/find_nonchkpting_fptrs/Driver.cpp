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

#include "FindNonChkptingFptr.h"

using namespace clang;
using namespace clang::driver;
using namespace clang::tooling;

static llvm::cl::OptionCategory ToolingSampleCategory("chimes options");
static llvm::cl::opt<std::string> non_checkpointing_file("n",
        llvm::cl::desc("Non-checkpointing file"),
        llvm::cl::value_desc("non_checkpointing_file"));

static FindNonChkptingFptr *transform = NULL;
std::set<std::string> non_checkpointing;

class TransformASTConsumer : public ASTConsumer {
public:
  TransformASTConsumer(Rewriter &set_R, ASTContext &set_Context) :
          R(set_R), Context(set_Context) { }

  void handleFunctionDecl(FunctionDecl *fdecl) {
      if (fdecl->isThisDeclarationADefinition() &&
              R.getSourceMgr().isInMainFile(fdecl->getLocation())) {

          transform->reset_noncheckpointing();

#ifdef VERBOSE
          llvm::errs() << "Visiting " << fdecl->getNameAsString() << "\n";
#endif
          transform->Visit(fdecl->getBody());
#ifdef VERBOSE
          llvm::errs() << "Done with " << fdecl->getNameAsString() <<
              "\n";
#endif

          if (transform->get_noncheckpointing() &&
                  transform->get_any_fptr_calls()) {
              non_checkpointing.insert(fdecl->getNameAsString());
          }
      }
  }

  // Override the method that gets called for each parsed top-level
  // declaration.
  bool HandleTopLevelDecl(DeclGroupRef DR) override {
    assert(transform != NULL);
    transform->setRewriter(R);
    transform->setContext(Context);

    // For each top-level function defined
    for (DeclGroupRef::iterator b = DR.begin(), e = DR.end(); b != e; ++b) {
        Decl *toplevel = *b;

        if (FunctionDecl *fdecl = clang::dyn_cast<FunctionDecl>(toplevel)) {
            handleFunctionDecl(fdecl);
        } else if (LinkageSpecDecl *ldecl = clang::dyn_cast<LinkageSpecDecl>(toplevel)) {
            for (DeclContext::decl_iterator di = ldecl->decls_begin(),
                    de = ldecl->decls_end(); di != de; di++) {
                Decl *curr_linkage_decl = *di;
                if (FunctionDecl *fdecl = clang::dyn_cast<FunctionDecl>(
                            curr_linkage_decl)) {
                    handleFunctionDecl(fdecl);
                }
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
  }

  void EndSourceFileAction() override {
    SourceManager &SM = rewriter.getSourceMgr();
  }

#if LLVM_VERSION_MAJOR == 3 && LLVM_VERSION_MINOR == 8
  std::unique_ptr<clang::ASTConsumer> CreateASTConsumer(
#else
  clang::ASTConsumer *CreateASTConsumer(
#endif
      CompilerInstance &CI, StringRef file) override {
    rewriter.setSourceMgr(CI.getSourceManager(), CI.getLangOpts());
    clang::ASTConsumer *result = new TransformASTConsumer(rewriter, CI.getASTContext());
#if LLVM_VERSION_MAJOR == 3 && LLVM_VERSION_MINOR == 8
    return std::unique_ptr<clang::ASTConsumer>(result);
#else
    return result;
#endif
  }

private:
  Rewriter rewriter;
};

static void check_opt(llvm::cl::opt<std::string> &s, const char *msg) {
    if (s.size() == 0) {
        llvm::errs() << std::string(msg) << " is required\n";
        exit(1);
    }
}

int main(int argc, const char **argv) {
  CommonOptionsParser op(argc, argv, ToolingSampleCategory);

  check_opt(non_checkpointing_file, "non_checkpointing_file");

  assert(op.getSourcePathList().size() == 1);
  std::string just_filename = op.getSourcePathList()[0].substr(
          op.getSourcePathList()[0].rfind('/') + 1);
  just_filename = just_filename.substr(0, just_filename.rfind("."));

  std::unique_ptr<FrontendActionFactory> factory_ptr = newFrontendActionFactory<
      NumDebugFrontendAction<TransformASTConsumer>>();
  FrontendActionFactory *factory = factory_ptr.get();

  transform = new FindNonChkptingFptr();
  ClangTool *Tool = new ClangTool(op.getCompilations(), op.getSourcePathList());
  int err = Tool->run(factory);
  if (err) return err;

  std::ofstream out(std::string(non_checkpointing_file.c_str()));
  for (std::set<std::string>::iterator i = non_checkpointing.begin(),
          e = non_checkpointing.end(); i != e; i++) {
      out << *i << "\n";
  }
  out.close();

  return 0;
}
