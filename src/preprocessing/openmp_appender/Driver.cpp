#include <sstream>
#include <fstream>
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

#include "OpenmpAppender.h"

using namespace clang;
using namespace clang::driver;
using namespace clang::tooling;

static llvm::cl::OptionCategory ToolingSampleCategory("chimes options");
static llvm::cl::opt<std::string> output_file("o",
        llvm::cl::desc("Output file"), llvm::cl::value_desc("output_file"));
static llvm::cl::opt<std::string> omp_file("m",
        llvm::cl::desc("OpenMP file"), llvm::cl::value_desc("openmp_file"));

static OpenmpAppender *transform = NULL;
int func_start_line = -1;
int func_start_col = -1;
int func_end_line = -1;
int func_end_col = -1;
std::string curr_func;

class TransformASTConsumer : public ASTConsumer {
public:
  TransformASTConsumer(Rewriter &set_R, ASTContext &set_Context) :
          R(set_R), Context(set_Context) { }

  void handleFunctionDecl(FunctionDecl *fdecl) {
#ifdef VERBOSE
      llvm::errs() << "Looking at function " <<
          fdecl->getNameAsString() << "\n";
#endif

      if (fdecl->isThisDeclarationADefinition() &&
              R.getSourceMgr().isInMainFile(fdecl->getLocation())) {
          clang::Stmt *body = fdecl->getBody();
          clang::SourceRange range = body->getSourceRange();
          clang::SourceLocation start = range.getBegin();
          clang::SourceLocation end = range.getEnd();

          func_start_line = R.getSourceMgr().getPresumedLoc(start).getLine();
          func_start_col = R.getSourceMgr().getPresumedLoc(start).getColumn();
          func_end_line = R.getSourceMgr().getPresumedLoc(end).getLine();
          func_end_col = R.getSourceMgr().getPresumedLoc(end).getColumn();

          curr_func = fdecl->getNameAsString();

          transform->Visit(body);
          transform->finalize();
      }
#ifdef VERBOSE
      llvm::errs() << "Done\n";
#endif
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

        if (FunctionDecl *fdecl = dyn_cast<FunctionDecl>(toplevel)) {
            handleFunctionDecl(fdecl);
        } else if (LinkageSpecDecl *ldecl = clang::dyn_cast<LinkageSpecDecl>(
                    toplevel)) {
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
#if LLVM_VERSION_MAJOR == 3 && LLVM_VERSION_MINOR == 8
      std::error_code EC; 
      out = new llvm::raw_fd_ostream(output_file.c_str(), EC, 
              llvm::sys::fs::OpenFlags::F_None);
#else
      std::string code;
      out = new llvm::raw_fd_ostream(output_file.c_str(), code,
              llvm::sys::fs::OpenFlags::F_None);
#endif
  }

  void EndSourceFileAction() override {
    SourceManager &SM = rewriter.getSourceMgr();
    rewriter.getEditBuffer(SM.getMainFileID()).write(*out);
    out->close();
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
  llvm::raw_fd_ostream *out;
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

  check_opt(output_file, "output_file");
  check_opt(omp_file, "omp_file");

  std::map<int, AppendInfo> *appends = new std::map<int, AppendInfo>();
  std::ifstream omp_fp(omp_file);
  std::string line;
  while (std::getline(omp_fp, line)) {

      size_t end = line.find(' ');
      int pragma_line = atoi(line.substr(0, end).c_str());
      line = line.substr(end + 1);

      end = line.find(' ');
      int is_parallel_for = atoi(line.substr(0, end).c_str());
      line = line.substr(end + 1);

      end = line.find(' ');
      std::string funcname = line.substr(0, end);
      line = line.substr(end + 1);

      end = line.find(' ');
      std::string filename = line.substr(0, end);
      line = line.substr(end + 1);

      end = line.find(' ');
      int body_start_line = atoi(line.substr(0, end).c_str());
      line = line.substr(end + 1);

      end = line.find(' ');
      int body_start_col = atoi(line.substr(0, end).c_str());
      line = line.substr(end + 1);

      end = line.find(' ');
      int body_end_line = atoi(line.substr(0, end).c_str());
      line = line.substr(end + 1);

      end = line.find(' ');
      int body_end_col = atoi(line.substr(0, end).c_str());
      line = line.substr(end + 1);

      std::string before, after, at_start, at_end;
      std::getline(omp_fp, before);
      std::getline(omp_fp, after);
      std::getline(omp_fp, at_start);
      std::getline(omp_fp, at_end);

      assert(appends->find(pragma_line) == appends->end());
      appends->insert(std::pair<int, AppendInfo>(pragma_line, AppendInfo(pragma_line,
                      is_parallel_for, funcname, filename, body_start_line, body_start_col, body_end_line,
                      body_end_col, after, at_start, at_end)));
      llvm::errs() << appends->at(pragma_line).str() << "\n";
  }
  omp_fp.close();

  assert(op.getSourcePathList().size() == 1);
  std::string just_filename = op.getSourcePathList()[0].substr(
          op.getSourcePathList()[0].rfind('/') + 1);
  just_filename = just_filename.substr(0, just_filename.rfind("."));

  std::unique_ptr<FrontendActionFactory> factory_ptr = newFrontendActionFactory<
      NumDebugFrontendAction<TransformASTConsumer>>();
  FrontendActionFactory *factory = factory_ptr.get();

  transform = new OpenmpAppender(appends);
  ClangTool *Tool = new ClangTool(op.getCompilations(), op.getSourcePathList());
  int err = Tool->run(factory);
  /*
   * Ignore err. We expect there to be errors following the OMP appender because
   * this only appends the statements necessary after a OMP region. We are still
   * missing statements before OMP regions until the next pass by
   * openmp_inserter.py.
   */

  for (std::map<int, AppendInfo>::iterator i = appends->begin(),
          e = appends->end(); i != e; i++) {
      if (i->second.nmatches() != 2) {
          llvm::errs() << "Expected 2 matches for OMP pragma " <<
              i->second.str() << " but got " << i->second.nmatches() << "\n";
          exit(1);
      }
  }

  return 0;
}
