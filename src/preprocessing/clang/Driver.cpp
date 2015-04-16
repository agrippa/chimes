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
#include "CallingAndOMPPass.h"
#include "SplitInitsPass.h"
#include "MallocPass.h"
#include "AliasChangedPass.h"
#include "DesiredInsertions.h"

using namespace clang;
using namespace clang::driver;
using namespace clang::tooling;

static llvm::cl::OptionCategory ToolingSampleCategory("chimes options");
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
static llvm::cl::opt<std::string> diag_file("d",
        llvm::cl::desc("Diagnostics file"),
        llvm::cl::value_desc("diag_file"));
static llvm::cl::opt<std::string> working_directory("w",
        llvm::cl::desc("Working directory"),
        llvm::cl::value_desc("work_dir"));
static llvm::cl::opt<std::string> contains_line_markings("c",
        llvm::cl::desc("Input file contains line markings?"),
        llvm::cl::value_desc("line_markings"));
static llvm::cl::opt<std::string> func_file("f",
        llvm::cl::desc("Function info file"),
        llvm::cl::value_desc("func_info"));
static llvm::cl::opt<std::string> call_file("k",
        llvm::cl::desc("Callsite info file"),
        llvm::cl::value_desc("call_info"));
static llvm::cl::opt<std::string> exit_file("x",
        llvm::cl::desc("Function exit info file"),
        llvm::cl::value_desc("exit_info"));
static llvm::cl::opt<std::string> reachable_file("r",
        llvm::cl::desc("Reachable info file"),
        llvm::cl::value_desc("reachable_info"));
static llvm::cl::opt<std::string> module_id_file("o",
        llvm::cl::desc("Module ID file"),
        llvm::cl::value_desc("module_info"));
static llvm::cl::opt<std::string> omp_file("t",
        llvm::cl::desc("OpenMP file"),
        llvm::cl::value_desc("omp_info"));

DesiredInsertions *insertions = NULL;
std::map<std::string, OMPTree *> ompTrees;
std::string curr_func;
FunctionDecl *curr_func_decl = NULL;
std::vector<StackAlloc *> *insert_at_front = NULL;

static std::vector<std::string> created_vars;
static std::string current_output_file;
static std::map<std::string, int> num_register_labels;
static std::map<std::string, int> num_call_labels;

/*
 * __builtin_expect and operator= are an abuse of this array's intended purpose
 * as a list of functions which we don't need to worry about modifying their
 * inputs.
 */
std::string ignorable_arr[] = {"malloc_wrapper", "realloc_wrapper",
    "free_wrapper", "cudaMalloc_wrapper", "cudaFree_wrapper",
    "init_chimes", "new_stack", "rm_stack", "register_stack_var",
    "alias_group_changed", "printf", "fprintf", "exp", "strchr", "exit",
    "atoi", "atof", "fopen", "getopt", "LIBCHIMES_THREAD_NUM",
    "entering_omp_parallel", "leaving_omp_parallel",
    "register_thread_local_stack_vars", "omp_get_thread_num",
    "__builtin_expect", "operator=", "sqrtf", "sqrtl", "cbrtf", "cbrtl",
    "fabsf", "fabs", "fabsl", "calloc_wrapper", "__assert_rtn", "pow",
    "sprintf"};
std::set<std::string> *ignorable = NULL;

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

std::string stmtToString(const clang::Stmt *S, ASTContext *Context) {
    std::string str;
    llvm::raw_string_ostream stream(str);
    S->printPretty(stream, NULL, Context->getPrintingPolicy());
    stream.flush();
    return str;
}

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

    // For each top-level function defined
    for (DeclGroupRef::iterator b = DR.begin(), e = DR.end(); b != e; ++b) {
        Decl *toplevel = *b;
        clang::SourceLocation loc = toplevel->getLocation();
        clang::PresumedLoc presumed = visitor->getSM()->getPresumedLoc(loc);

        if (isa<FunctionDecl>(toplevel)) {
            FunctionDecl *fdecl = clang::dyn_cast<FunctionDecl>(toplevel);

            if (fdecl->isThisDeclarationADefinition() &&
                    insertions->isMainFile(presumed.getFilename())) {
                assert(fdecl != NULL);
                curr_func = fdecl->getNameAsString();
                curr_func_decl = fdecl;

                if (insertions->isNvCompilerFunction(curr_func)) continue;

                clang::PresumedLoc pre_loc =
                    visitor->getSM()->getPresumedLoc(loc);
                std::string filename(pre_loc.getFilename());

                if (visitor->usesStackInfo()) {
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

                std::stringstream id_str;
                std::string demangled_filename =
                    remove_filename_insertions(filename);
                id_str << demangled_filename << ":" << curr_func << ":" <<
                    pre_loc.getLine() << ":" << pre_loc.getColumn();

                if (visitor->createsOMPTree())
                    visitor->resetOMPTree();
                if (visitor->createsRegisterLabels())
                    visitor->resetRegisterLabels();
                if (visitor->createsFunctionLabels()) {
                    int nlabels;
                    if (num_call_labels.find(id_str.str()) == num_call_labels.end()) {
                        nlabels = 0;
                    } else {
                        nlabels = num_call_labels[id_str.str()];
                    }
                    visitor->resetFunctionLabels(nlabels);
                }
                if (visitor->setsLastGoto())
                    visitor->resetLastGoto();
                visitor->resetRootFlag();

                // llvm::errs() << curr_func << ":\n";
                // (*b)->dump();
                // llvm::errs() << "\n\n";
                visitor->Visit((*b)->getBody());
                visitor->VisitTopLevel(*b);
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
      std::string code;
      out = new llvm::raw_fd_ostream(current_output_file.c_str(), code,
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

  check_opt(line_info_file, "Line info file");
  check_opt(struct_file, "Struct info file");
  check_opt(stack_allocs_file, "Stack allocations info file");
  check_opt(heap_file, "Heap info file");
  check_opt(original_file, "Original file");
  check_opt(diag_file, "Diagnostics file");
  check_opt(working_directory, "Working directory");
  check_opt(contains_line_markings, "Line markings flag");
  check_opt(func_file, "Function file");
  check_opt(call_file, "Callsite file");
  check_opt(exit_file, "Exit file");
  check_opt(reachable_file, "Reachable file");
  check_opt(module_id_file, "Module ID file");
  check_opt(omp_file, "OpenMP file");

  ignorable = new std::set<std::string>(ignorable_arr,
          ignorable_arr + sizeof(ignorable_arr) / sizeof(ignorable_arr[0]));

  bool updateFile = true;
  if (contains_line_markings.compare("true") == 0) {
      updateFile = false;
  }

  assert(op.getSourcePathList().size() == 1);
  std::string just_filename = op.getSourcePathList()[0].substr(
          op.getSourcePathList()[0].rfind('/') + 1);
  just_filename = just_filename.substr(0, just_filename.rfind("."));

  insertions = new DesiredInsertions(original_file.c_str(),
              line_info_file.c_str(), struct_file.c_str(),
              stack_allocs_file.c_str(), heap_file.c_str(),
              original_file.c_str(), diag_file.c_str(),
              working_directory.c_str(), func_file.c_str(), call_file.c_str(),
              exit_file.c_str(), reachable_file.c_str(), omp_file.c_str());

  // Dump module ID
  std::ofstream module_id_stream;
  module_id_stream.open(module_id_file);
  size_t module_id = insertions->get_module_id();
  module_id_stream << module_id;
  module_id_stream.close();

  std::stringstream ss;

  /*
   * This pass can get messed up if the starting columns of basic blocks are
   * shifted. This must be run before any passes that might insert things at the
   * start of lines (e.g. labels). This is the only pass that uses the actual
   * column number.
   *
   * This pass also gets messed up if the input filename isn't the original
   * file.
   */
  passes.push_back(new Pass(new AliasChangedPass(), ".alias"));
  passes.push_back(new Pass(new MallocPass(), ".malloc"));
  passes.push_back(new Pass(new StartExitPass(), ".start"));
  passes.push_back(new Pass(new InitPass(), ".init"));
  passes.push_back(new Pass(new SplitInitsPass(), ".split"));
  /*
   * It is required that CallingAndOMPPass run after SplitInitsPass in case a
   * variable is initialized with a function call, which would cause problems
   * with inserting jumps to that call.
   */
  passes.push_back(new Pass(new CallingAndOMPPass(), ".register"));

  std::unique_ptr<FrontendActionFactory> factory_ptr = newFrontendActionFactory<
      NumDebugFrontendAction<TransformASTConsumer>>();
  FrontendActionFactory *factory = factory_ptr.get();

  bool first_pass = true;
  for (std::vector<Pass *>::iterator p = passes.begin(), pe = passes.end();
          p != pe; p++) {
      Pass *pass = *p;
      ClangTool *Tool;

      if (first_pass) {
          Tool = new ClangTool(op.getCompilations(), op.getSourcePathList());
      } else {
          std::vector<std::string> inputs; inputs.push_back(current_output_file);
          Tool = new ClangTool(op.getCompilations(), inputs);
          if (updateFile) {
              insertions->updateMainFile(current_output_file);
          }
      }

      std::stringstream ss;
      ss << working_directory << "/" << just_filename << pass->get_suffix() << ".cpp";
      current_output_file = ss.str();
      curr_visitor = pass->get_impl();

      llvm::errs() << "Outputting to " << current_output_file << "\n";

      int err = Tool->run(factory);
      if (err) return err;

      first_pass = false;

      insertions->update_line_numbers();
  }

  delete insertions;

  return 0;
}
