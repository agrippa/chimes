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
#include "StartExitPass.h"
#include "CallingAndOMPPass.h"
#include "CallLabelInsertPass.h"
#include "SplitInitsPass.h"
#include "MallocPass.h"
#include "AliasChangedPass.h"
#include "DesiredInsertions.h"

using namespace clang;
using namespace clang::driver;
using namespace clang::tooling;

static llvm::cl::OptionCategory ToolingSampleCategory("chimes options");
static llvm::cl::opt<std::string> stack_allocs_file("a",
        llvm::cl::desc("Stack allocations info filename"),
        llvm::cl::value_desc("stack_allocs_file"));
static llvm::cl::opt<std::string> call_tree_file("b",
        llvm::cl::desc("call tree file"),
        llvm::cl::value_desc("call_tree_info"));
static llvm::cl::opt<std::string> no_checkpoint("c",
        llvm::cl::desc("No checkpoint"),
        llvm::cl::value_desc("no_checkpoint"));
static llvm::cl::opt<std::string> diag_file("d",
        llvm::cl::desc("Diagnostics file"),
        llvm::cl::value_desc("diag_file"));
static llvm::cl::opt<std::string> loc_file("e",
        llvm::cl::desc("Alias locs dump file"),
        llvm::cl::value_desc("alias_locs_dump_file"));
static llvm::cl::opt<std::string> func_file("f",
        llvm::cl::desc("Function info file"),
        llvm::cl::value_desc("func_info"));
static llvm::cl::opt<std::string> list_of_externs_file("g",
        llvm::cl::desc("List of externs file"),
        llvm::cl::value_desc("list_of_externs_file"));
static llvm::cl::opt<std::string> original_file("i",
        llvm::cl::desc("Original input file"),
        llvm::cl::value_desc("original_file"));
static llvm::cl::opt<std::string> function_pointers_loaded_file("j",
        llvm::cl::desc("Function pointers loaded file"),
        llvm::cl::value_desc("function_pointers_loaded_file"));
static llvm::cl::opt<std::string> call_file("k",
        llvm::cl::desc("Callsite info file"),
        llvm::cl::value_desc("call_info"));
static llvm::cl::opt<std::string> line_info_file("l",
        llvm::cl::desc("Line info filename"),
        llvm::cl::value_desc("line_file"));
static llvm::cl::opt<std::string> heap_file("m",
        llvm::cl::desc("Heap info file"),
        llvm::cl::value_desc("heap_file"));
static llvm::cl::opt<std::string> npm_dump_file("n",
        llvm::cl::desc("NPM dump file"),
        llvm::cl::value_desc("npm_dump_file"));
static llvm::cl::opt<std::string> module_id_file("o",
        llvm::cl::desc("Module ID file"),
        llvm::cl::value_desc("module_info"));
static llvm::cl::opt<std::string> quick_version_file("q",
        llvm::cl::desc("quick version file"),
        llvm::cl::value_desc("quick_version"));
static llvm::cl::opt<std::string> reachable_file("r",
        llvm::cl::desc("Reachable info file"),
        llvm::cl::value_desc("reachable_info"));
static llvm::cl::opt<std::string> struct_file("s",
        llvm::cl::desc("Struct info filename"),
        llvm::cl::value_desc("struct_file"));
static llvm::cl::opt<std::string> omp_file("t",
        llvm::cl::desc("OpenMP file"),
        llvm::cl::value_desc("omp_info"));
static llvm::cl::opt<std::string> merge_file("u",
        llvm::cl::desc("Merge file"),
        llvm::cl::value_desc("merge_file"));
static llvm::cl::opt<std::string> firstprivate_file("v",
        llvm::cl::desc("firstprivate file"),
        llvm::cl::value_desc("firstprivate_info"));
static llvm::cl::opt<std::string> working_directory("w",
        llvm::cl::desc("Working directory"),
        llvm::cl::value_desc("work_dir"));
static llvm::cl::opt<std::string> exit_file("x",
        llvm::cl::desc("Function exit info file"),
        llvm::cl::value_desc("exit_info"));
static llvm::cl::opt<std::string> allocator_file("y",
        llvm::cl::desc("Allocator file"),
        llvm::cl::value_desc("allocator_file"));
static llvm::cl::opt<std::string> noncheckpointing_file("z",
        llvm::cl::desc("Non-checkpointing file"),
        llvm::cl::value_desc("noncheckpointing_file"));

DesiredInsertions *insertions = NULL;
std::map<std::string, OMPTree *> ompTrees;
std::string curr_func;
FunctionDecl *curr_func_decl = NULL;
std::vector<StackAlloc *> *insert_at_front = NULL;
std::set<std::string> *ignorable = NULL;
std::map<int, std::vector<CallLabel> > call_lbls;
std::map<std::string, int> earliest_call_line;
std::map<std::string, int> function_starting_lines;
std::map<std::string, std::set<std::string>> func_to_alias_locs;
std::set<std::string> npm_functions;
std::map<std::string, ExternalNPMCall> external_calls;
std::set<std::string> definitions_in_main_file;
std::set<std::string> function_pointers_loaded;
std::string merge_filename;
std::vector<Merge> static_merges;
std::vector<Merge> dynamic_merges;
bool blockCheckpoints = false;

static void writeMerges(std::vector<Merge> *l, std::string suffix) {
    std::ofstream out(merge_filename + suffix);
    for (std::vector<Merge>::iterator i = l->begin(), e = l->end();
            i != e; i++) {
        Merge merge = *i;
        std::vector<size_t> param_aliases = merge.get_parent_param_aliases();
        out << merge.get_callee_name() << " " <<
            merge.get_parent_return_alias();
        for (std::vector<size_t>::iterator ii = param_aliases.begin(),
                ee = param_aliases.end(); ii != ee; ii++) {
            out << " " << *ii;
        }
        out << "\n";
    }
    out.close();
}

static std::vector<std::string> created_vars;
static std::string current_output_file;
static std::map<std::string, int> num_register_labels;
static std::map<std::string, int> num_call_labels;

class Pass {
public:
    Pass(ParentTransform *set_impl, const char *set_suffix,
            const char *set_dump_file, std::string set_transformed_func_suffix) :
            impl(set_impl), suffix(set_suffix), dump_file(set_dump_file),
            transformed_func_suffix(set_transformed_func_suffix) { }

    ParentTransform *get_impl() { return impl; }
    std::string get_suffix() { return suffix; }
    std::string get_dump_file() { return dump_file; }
    std::string get_func_suffix() { return transformed_func_suffix; }
private:
    ParentTransform *impl;
    std::string suffix;
    std::string dump_file;
    std::string transformed_func_suffix;
};

ParentTransform *curr_visitor = NULL;
std::ofstream *dump_bodies = NULL;
std::string expected_suffix;
std::ofstream *dump_decls = NULL;
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

  void handleFunctionDecl(FunctionDecl *fdecl, clang::PresumedLoc presumed,
          ParentTransform *visitor) {

      if (fdecl->isThisDeclarationADefinition() &&
              insertions->isMainFile(presumed.getFilename())) {
          assert(fdecl != NULL);
          curr_func = fdecl->getNameAsString();
          curr_func_decl = fdecl;
          definitions_in_main_file.insert(curr_func);

          if (insertions->isNvCompilerFunction(curr_func)) return;

          std::string filename(presumed.getFilename());

          if (visitor->usesStackInfo()) {
              insert_at_front = new std::vector<StackAlloc *>();

              for (FunctionDecl::param_iterator i = fdecl->param_begin(),
                      e = fdecl->param_end(); i != e; i++) {
                  ParmVarDecl *param = *i;
                  std::string mangled = constructMangledName(
                          param->getName().str());
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
              presumed.getLine() << ":" << presumed.getColumn();

          unsigned resetMangledLength;
          if (visitor->requiresMangledVarsReset())
              resetMangledLength = created_vars.size();
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

          insertions->resetHeapAllocIters();

          // llvm::errs() << curr_func << ":\n";
          // (*b)->dump();
          // llvm::errs() << "\n\n";
          visitor->Visit(fdecl->getBody());
          visitor->VisitTopLevel(fdecl);

          if (!visitor->requiresMangledVarsReset() &&
                  visitor->createsFunctionLabels()) {
              num_call_labels[id_str.str()] =
                  visitor->get_current_function_label();
          }

          if (visitor->requiresMangledVarsReset()) {
              while (created_vars.size() > resetMangledLength) {
                  created_vars.pop_back();
              }
          }

          if (dump_bodies &&
                  insertions->findMatchingFunctionNullReturn(curr_func) !=
                  NULL) {
              /*
               * Function declaration transformed during this pass with
               * the specified suffix (e.g. "_quick", "_npm"). If this
               * function does not end with that suffix, it was not
               * transformed during this pass.
               */
              std::string function_decl = R.getRewrittenText(
                      clang::SourceRange(fdecl->getLocStart(),
                          fdecl->getBody()->getLocStart()));

              // Remove leading whitespace
              int index = 0;
              while (isspace(function_decl[index])) index++;
              function_decl = function_decl.substr(index);

              // Find open paren for parameters
              index = 0;
              while (function_decl[index] != '(') index++;
              int open_paren_index = index;
              index++;

              /*
               * Find closing paren for parameters and trim the function
               * decl to end there.
               */
              int nesting = 1;
              while (nesting > 0) {
                  if (function_decl[index] == '(') nesting++;
                  else if (function_decl[index] == ')') nesting--;
                  index++;
              }
              function_decl = function_decl.substr(0, index);

              // Save the suffixed version of this function declaration
              std::string old_function_decl = function_decl;

              // Check that it is a suffixed declaration
              index = open_paren_index;
              /*
               * Account for whitespace between function name and open
               * paren.
               */
              while (isspace(old_function_decl[index - 1])) index--;
              std::string suffix = "";
              if (old_function_decl.size() > expected_suffix.size()) {
                  suffix = old_function_decl.substr(index -
                          expected_suffix.size(), expected_suffix.size());
              }
              if (suffix != expected_suffix) {
                  return;
              }
              /*
               * Convert back to the original declaration with the
               * suffix removed. We could probably do this cleaner by
               * getting it before the transformation pass.
               */
              old_function_decl = old_function_decl.substr(0,
                      index - expected_suffix.size()) +
                  old_function_decl.substr(index);

              /*
               * may be possible if a function is never called within
               * its compilation unit, but is accessible outside? In which
               * case we wouldn't need to add any declarations. also fails
               * in the case of main.
               */
              int func_start_line = -1;
              assert(function_starting_lines.find(curr_func) !=
                      function_starting_lines.end());
              if (earliest_call_line.find(curr_func) !=
                      earliest_call_line.end()) {
                  const int called_line = earliest_call_line[curr_func];
                  for (std::map<std::string, int>::iterator s_i =
                          function_starting_lines.begin(), s_e =
                          function_starting_lines.end(); s_i != s_e; s_i++) {
                      int curr = s_i->second;
                      if (curr <= called_line && (func_start_line == -1 ||
                                  curr > func_start_line)) {
                          func_start_line = curr;
                      }
                  }

                  if (function_starting_lines[curr_func] < func_start_line) {
                      func_start_line = function_starting_lines[curr_func];
                  }
              } else {
                  func_start_line = function_starting_lines[curr_func];
              }
              assert(func_start_line != -1);
              /*
               * If this function is either static (i.e. not externally visible)
               * or inline then we can't load its symbols using dlopen/dlsym.
               */
              *dump_decls << curr_func << " " << filename << " " <<
                  func_start_line << " " <<
                  (!fdecl->isExternallyVisible() || fdecl->isInlineSpecified()) << " ";

              if (visitor->transformsOriginal() ||
                      fdecl->getName().str() != "main") {
                  *dump_decls << function_decl << "; ";
              }

              if (visitor->transformsOriginal()) {
                  *dump_decls << old_function_decl << "; ";
              }
              *dump_decls << "\n-----\n";

              if (visitor->transformsOriginal() ||
                      fdecl->getName().str() != "main") {
                  clang::PresumedLoc fdeclStart = visitor->getSM()->getPresumedLoc(fdecl->getLocStart());
                  *dump_bodies << "# " << fdeclStart.getLine() << " \"" <<
                      fdeclStart.getFilename() << "\"\n";
                  *dump_bodies <<
                      R.getRewrittenText(fdecl->getSourceRange()) <<
                      "\n\n";
              }

              if (visitor->transformsOriginal()) {
                  *dump_bodies << old_function_decl << " { ";
                  if (fdecl->getName().str() == "main") {
                      assert(fdecl->getNumParams() == 2);
                      *dump_bodies << "init_chimes(" <<
                          fdecl->getParamDecl(0)->getName().str() << ", " <<
                          fdecl->getParamDecl(1)->getName().str() << "); ";
                  }
                  if (!fdecl->getReturnType().getTypePtr()->isVoidType()) {
                      *dump_bodies << "return ";
                  }
                  std::stringstream arg_ss;
                  for (unsigned p = 0; p < fdecl->getNumParams(); p++) {
                      const ParmVarDecl *parm = fdecl->getParamDecl(p);
                      if (p != 0) arg_ss << ", ";
                      arg_ss << parm->getName().str();
                  }
                  *dump_bodies << "(____chimes_replaying ? " <<
                      fdecl->getName().str() << "_resumable(" <<
                      arg_ss.str() << ") : " << fdecl->getName().str() <<
                      expected_suffix << "(" << arg_ss.str() << ")); }\n\n";
              }
          }
      }
  }

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

#ifdef VERBOSE
        llvm::errs() << "Found some decl of type " <<
            std::string(toplevel->getDeclKindName()) << " at " <<
            presumed.getFilename() << ":" << presumed.getLine() << ":" <<
            presumed.getColumn() << "\n";
#endif

        if (LinkageSpecDecl *ldecl = clang::dyn_cast<LinkageSpecDecl>(toplevel)) {
            for (DeclContext::decl_iterator di = ldecl->decls_begin(),
                    de = ldecl->decls_end(); di != de; di++) {
                Decl *curr_linkage_decl = *di;
                if (FunctionDecl *fdecl = clang::dyn_cast<FunctionDecl>(
                            curr_linkage_decl)) {
                    handleFunctionDecl(fdecl, presumed, visitor);
                }
            }
        } else if (FunctionDecl *fdecl = clang::dyn_cast<FunctionDecl>(toplevel)) {
#ifdef VERBOSE
            llvm::errs() << "Looking at decl \"" << fdecl->getNameAsString() <<
                "\" in " << presumed.getFilename() << ":" <<
                presumed.getLine() << ":" << presumed.getColumn() << "\n";
#endif

            handleFunctionDecl(fdecl, presumed, visitor);
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
#if LLVM_VERSION_MAJOR == 3 && LLVM_VERSION_MINOR == 8
      std::error_code EC; 
      out = new llvm::raw_fd_ostream(current_output_file.c_str(), EC, 
              llvm::sys::fs::OpenFlags::F_None);
#else
      std::string code;
      out = new llvm::raw_fd_ostream(current_output_file.c_str(), code,
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

  check_opt(line_info_file, "Line info file");
  check_opt(struct_file, "Struct info file");
  check_opt(stack_allocs_file, "Stack allocations info file");
  check_opt(heap_file, "Heap info file");
  check_opt(original_file, "Original file");
  check_opt(diag_file, "Diagnostics file");
  check_opt(working_directory, "Working directory");
  check_opt(no_checkpoint, "No checkpoint");
  check_opt(func_file, "Function file");
  check_opt(call_file, "Callsite file");
  check_opt(exit_file, "Exit file");
  check_opt(reachable_file, "Reachable file");
  check_opt(module_id_file, "Module ID file");
  check_opt(omp_file, "OpenMP file");
  check_opt(firstprivate_file, "Firstprivate file");
  check_opt(call_tree_file, "Call tree file");
  check_opt(quick_version_file, "Quick version");
  check_opt(npm_dump_file, "NPM Dump file");
  check_opt(loc_file, "Alias locs dump file");
  check_opt(list_of_externs_file, "List of externs file");
  check_opt(function_pointers_loaded_file, "Function pointers loaded file");
  check_opt(merge_file, "Merge file");
  check_opt(allocator_file, "Allocator file");
  check_opt(noncheckpointing_file, "Non-checkpointing file");

  merge_filename = std::string(merge_file.c_str());

  ignorable = new std::set<std::string>();
  char *chimes_home = getenv("CHIMES_HOME");
  assert(chimes_home);
  std::stringstream file_ss;
  file_ss << std::string(chimes_home) <<
      "/src/preprocessing/non_checkpointing.conf";

  std::ifstream infile(file_ss.str());
  std::string line;
  while (std::getline(infile, line)) {
      if (line.size() > 0) {
          size_t end = line.find(' ');
          if (end == std::string::npos) {
              ignorable->insert(line);
          } else {
              ignorable->insert(line.substr(0, end));
          }
      }
  }
  infile.close();

  assert(no_checkpoint.compare("true") == 0 ||
          no_checkpoint.compare("false") == 0);
  if (no_checkpoint.compare("true") == 0) {
      blockCheckpoints = true;
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
              exit_file.c_str(), reachable_file.c_str(), omp_file.c_str(),
              firstprivate_file.c_str(), call_tree_file.c_str(),
              allocator_file.c_str(), noncheckpointing_file.c_str());

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
  passes.push_back(new Pass(new MallocPass(true), ".malloc_garbage",
              npm_dump_file.c_str(), "_npm"));
  passes.push_back(new Pass(new AliasChangedPass(), ".alias", "", ""));
  passes.push_back(new Pass(new MallocPass(false), ".malloc", "", ""));
  passes.push_back(new Pass(new StartExitPass(), ".start", "", ""));
  passes.push_back(new Pass(new SplitInitsPass(), ".split", "", ""));

  /*
   * It is required that CallingAndOMPPass run after SplitInitsPass in case a
   * variable is initialized with a function call, which would cause problems
   * with inserting jumps to that call.
   *
   * CallingAndOMPPass also messes with line numbers more than any other pass.
   * As a result, it would be preferred that it be kept as the last pass in
   * general.
   */
  passes.push_back(new Pass(new CallLabelInsertPass(), ".lbl", "", ""));
  passes.push_back(new Pass(new CallingAndOMPPass(true), ".calling_garbage",
              quick_version_file.c_str(), "_quick"));
  passes.push_back(new Pass(new CallingAndOMPPass(false), ".register", "", ""));

  std::unique_ptr<FrontendActionFactory> factory_ptr = newFrontendActionFactory<
      NumDebugFrontendAction<TransformASTConsumer>>();
  FrontendActionFactory *factory = factory_ptr.get();

  bool first_pass = true;
  for (std::vector<Pass *>::iterator p = passes.begin(), pe = passes.end();
          p != pe; p++) {
      Pass *pass = *p;
      ClangTool *Tool;

      std::string input_file;
      if (first_pass) {
          Tool = new ClangTool(op.getCompilations(), op.getSourcePathList());
          input_file = op.getSourcePathList()[0];
      } else {
          std::vector<std::string> inputs; inputs.push_back(current_output_file);
          Tool = new ClangTool(op.getCompilations(), inputs);
          input_file = current_output_file;
      }

      std::stringstream ss;
      ss << working_directory << "/" << just_filename << pass->get_suffix() << ".cpp";
      current_output_file = ss.str();
      curr_visitor = pass->get_impl();
      if (pass->get_dump_file().size() > 0) {
          dump_bodies = new std::ofstream(pass->get_dump_file() + ".bodies");
          dump_decls = new std::ofstream(pass->get_dump_file() + ".decls");
          expected_suffix = pass->get_func_suffix();
      }

      llvm::errs() << "Reading " << input_file << ", outputting to " <<
          current_output_file << "\n";

      int err = Tool->run(factory);
      if (err) return err;

      first_pass = false;

      insertions->update_line_numbers();
      if (pass->get_dump_file().size() > 0) {
          dump_bodies->close(); dump_bodies = NULL;
          dump_decls->close(); dump_decls = NULL;
          expected_suffix = "";
          /*
           * Reset so that the next pass reads from the same input as this pass.
           * This assumes that the dump file was used to output the true data
           * from this file, and any other output is garbage.
           */
          current_output_file = input_file;
      }
  }

  /*
   * Dump a mapping from function name to the variable names that store the
   * globally unique location ID for all alias change locations inside it.
   */
  std::ofstream loc_dump_file(std::string(loc_file.c_str()));
  for (std::map<std::string, std::set<std::string> >::iterator i =
          func_to_alias_locs.begin(), e = func_to_alias_locs.end(); i != e;
          i++) {
      std::string fname = i->first;
      std::set<std::string> varnames = i->second;

      loc_dump_file << fname;
      for (std::set<std::string>::iterator ii = varnames.begin(),
              ee = varnames.end(); ii != ee; ii++) {
          std::string varname = *ii;
          loc_dump_file << " " << varname;
      }
      loc_dump_file << "\n";
  }
  loc_dump_file.close();

  /*
   * Dump a list of functions called from NPM functions.
   */
  std::ofstream extern_out(std::string(list_of_externs_file.c_str()));
  for (std::map<std::string, ExternalNPMCall>::iterator i =
          external_calls.begin(), e = external_calls.end(); i != e; i++) {
      std::string original_name = i->first;
      ExternalNPMCall call = i->second;

      int line_no = call.get_first_line_referenced();
      int containing_decl_line = -1;
      for (std::map<std::string, int>::iterator i =
              function_starting_lines.begin(), e =
              function_starting_lines.end(); i != e; i++) {
          int start_line = i->second;
          if (start_line < line_no && (containing_decl_line == -1 ||
                      start_line > containing_decl_line)) {
              containing_decl_line = start_line;
          }
      }
      assert(containing_decl_line != -1);

      /*
       * NPM function pointers are initialized to the default implementation for
       * cases where an externally defined function which we know won't
       * checkpoint (e.g. an inline function in a header file) is used. The
       * calling function will still execute in NPM mode because we can assert
       * it does not create a checkpoint, but this pointer will never be updated
       * with an NPM version of this function because it does not exist.
       */
      extern_out << call.get_function_name() << " " << call.get_var() << " " <<
          containing_decl_line << " " << call.get_filename() << " " <<
          call.get_var_decl() << " = " << call.get_function_name() << ";\n";
  }
  extern_out.close();

  /*
   * Dump a list of functions which are referenced in the r-value of an
   * assignment, and hence may be later used as a function pointer (which could
   * be translated to its NPM version using translate_fptr).
   */
  std::ofstream function_pointers_out(std::string(function_pointers_loaded_file.c_str()));
  for (std::set<std::string>::iterator i = function_pointers_loaded.begin(),
          e = function_pointers_loaded.end(); i != e; i++) {
      function_pointers_out << *i << "\n";
  }
  function_pointers_out.close();

  writeMerges(&static_merges, ".static");
  writeMerges(&dynamic_merges, ".dynamic");

  delete insertions;

  return 0;
}
