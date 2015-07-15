"""
Common functionality for functional tests.
"""
import os
import sys
import time
import shutil
import random
import socket
import tempfile
import platform
from subprocess import Popen, PIPE

# If not properly managed, running multiple tests concurrently can cause clashes
# over:
#
#   1. Output checkpoint directory
#   2. Compiler working directory
#   3. Generated executables in the same test directory

CHIMES_HOME = os.environ['CHIMES_HOME']
CHECKPOINT_DIR_ENV_VAR = 'CHIMES_CHECKPOINT_DIR'
CHIMES_REPLAY_EXIT_CODE = 55
# limit the number of checkpoints tested so individual tests don't take more
# than 1 minute.
MAX_TEST_TIME = 60

SCRATCH_DIR=os.path.join(os.environ['SHARED_SCRATCH'], 'jmg3')
EXEC_DIR = tempfile.mkdtemp(prefix='chimes.exec.', dir=SCRATCH_DIR)

# Use a special executable name for runtime tests so that you can run a runtime
# test in parallel with a frontend test
RUNTIME_BIN = os.path.join(EXEC_DIR, 'runtime.bin')
FRONTEND_BIN = os.path.join(EXEC_DIR, 'frontend.bin')
CHIMES_PERF_BIN = os.path.join(EXEC_DIR, 'chimes.perf.bin')
NORMAL_PERF_BIN = os.path.join(EXEC_DIR, 'normal.perf.bin')

LD_LIBRARY_VARS = ['DYLD_LIBRARY_PATH', 'LD_LIBRARY_PATH']
DYLD_PATH = os.path.join(CHIMES_HOME, 'src', 'libchimes')

FRONTEND_WORKING_DIR = '/tmp/chimes-frontend'

# Mapping from info file name to a space-delimited column that may cause
# differences between the test and expected outputs due to different temporary
# filenames
INFO_FILES = {'call.info': -1, 'diag.info': -1, 'exit.info': -1,
              'func.info': -1, 'globals.info': -1, 'heap.info': -1,
              'lines.info': 0, 'module.info': -1, 'reachable.info': -1,
              'stack.info': 0, 'struct.info': -1, 'omp.info': -1,
              'constants.info': -1, 'tree.info': -1}

class TestConfig(object):
    """
    Encapsulates configuration that can be changed at the command line
    """
    def __init__(self, keep, verbose, targets, update_tests, just_compile,
                 force_update, dummy, quiet, repeats, block_checkpoints):
        assert repeats >= 1, str(repeats)

        self.keep = keep
        self.verbose = verbose
        self.targets = targets
        self.found_target = False
        self.custom_compiler_flags = []
        self.update_tests = update_tests
        self.force_update = force_update
        self.force_sequential = False
        self.just_compile = just_compile
        self.dummy = dummy
        self.quiet = quiet
        self.repeats = repeats
        self.block_checkpoints = block_checkpoints

    def set_force_sequential(self):
        self.force_sequential = True

    def add_custom_compiler_flag(self, flag):
        """
        Add a compiler flag to the compilation command.

        :param flag: Flag to add
        :type flag: `str`
        """
        self.custom_compiler_flags.append(flag)

    def __str__(self):
        return 'keep=' + str(self.keep) + ', verbose=' + str(self.verbose)


class RuntimeTest(object):
    """
    A test for the runtime system that restores variable values from a
    checkpoint. Defines the input file to compile, and the expected exit code
    from running the application. Test applications are expected to include
    asserts which verify correct behavior.
    """
    def __init__(self, name, input_files, expected_code,
                 expected_num_checkpoints, includes=None, dependencies=None,
                 cli_args=None, defines=None, extra_compile_args='',
                 src_folder=None):
        assert not name.endswith('-')
        self.name = name
        self.input_files = input_files
        self.expected_code = expected_code
        self.expected_num_checkpoints = expected_num_checkpoints
        if includes is None:
            self.includes = []
        else:
            self.includes = includes
        if dependencies is None:
            self.dependencies = []
        else:
            self.dependencies = dependencies
        self.cli_args = cli_args
        self.defines = [] if defines is None else defines
        self.extra_compile_args = extra_compile_args
        self.src_folder = src_folder


class PerfTest(object):
    def __init__(self, runtime_test, cli_args, exec_time_parser):
        self.name = runtime_test.name
        self.input_files = runtime_test.input_files
        self.expected_code = runtime_test.expected_code
        self.expected_num_checkpoints = runtime_test.expected_num_checkpoints
        self.includes = runtime_test.includes
        self.dependencies = runtime_test.dependencies
        self.cli_args = cli_args
        self.defines = runtime_test.defines
        self.extra_compile_args = runtime_test.extra_compile_args
        self.src_folder = runtime_test.src_folder
        self.exec_time_parser = exec_time_parser


class FrontendTest(object):
    """
    FrontendTest defines a single test compilation. input_file is the input
    cpp/cu file to compile. compare_file is a reference output (which may not
    match the actual output, depending on the platform each is generated on).
    info_dir is a directory path that stores reference copies of all .info
    files, which allow more precise comparisons to be carried out. expect_err
    indicates if we expect an error during compilation of the final output. At
    the moment, expect_err is only useful when trying to compile source files
    that are not standalone programs which error out due to a missing main
    definition.

    includes contains a list of folders that should be added to the include path
    when building.

    dependencies contains a list of libraries that should be added when
    building. These are full paths to the library file. We assume that the
    folder containing that library also has a Makefile for creating that
    library, and run 'make clean; make' to build it before using it.
    """
    def __init__(self, name, input_files, ref_folder, expect_err, src_folder='./',
                 includes=None, dependencies=None, extra_cli_args=None):
        assert not name.endswith('-')
        self.name = name
        self.src_folder = src_folder
        self.input_files = input_files
        self.ref_folder = ref_folder
        self.expect_err = expect_err
        self.includes = [] if includes is None else includes
        self.dependencies = [] if dependencies is None else dependencies
        self.extra_cli_args = '' if extra_cli_args is None else extra_cli_args


def get_platform_directory():
    """
    Get the platform-specific subdirectory for the frontend tests.
    """
    return platform.system() + '-' + get_compiler_label()


def get_compiler_label():
    CHIMES_HOME = os.environ['CHIMES_HOME']
    gxx = None
    fp = open(os.path.join(CHIMES_HOME, 'src', 'common.conf'), 'r')
    for line in fp:
        tokens = line.split('=')
        assert len(tokens) == 2
        if tokens[0] == 'GXX':
            gxx = tokens[1]
            break
    fp.close()
    assert gxx is not None
    stdout, stderr, errcode = run_cmd(gxx + ' --version', False)
    firstline = stdout.split('\n')[0].strip()
    firstline = firstline.replace(' ', '_')

    return firstline


def get_machine_name():
    """
    Tries to return a unique machine identifier used to name a file for storing
    performance results. socket.gethostname() returns the full URL of the
    current node (e.g. 'login1.davinci.rice.edu'). This script assumes that the
    URL's last three components are 'machine.institution.suffix' and extracts
    them to use as the machine identifier.
    """
    elements = socket.gethostname().split('.')
    return '.'.join(elements[len(elements) - 3:])

def is_rodinia_supported():
    return 'RODINIA_HOME' in os.environ


def is_spec_supported():
    return 'SPEC_HOME' in os.environ


def find_file(name, path):
    """
    Search for a file with the specified name, under the specified directory.

    :param name: Name of the file to find
    :type name: `str`
    :param path: Path under which to search
    :type path: `str`
    :returns: Absolute path of the first match
    :rtype: `str`
    """
    for root, _, files in os.walk(path):
        if name in files:
            return os.path.join(root, name)
    return None


def is_python_3():
    return (sys.version_info >= (3, 0))


def clean_and_create_folder(folder):
    """
    The end result of this function is an empty directory. This function will
    either create it, or clean it out if it already exists.

    :param folder: Folder to create/clean
    :type folder: `str`
    """
    if os.path.isdir(folder):
        shutil.rmtree(folder)

    os.mkdir(folder)


def create_exec_dir():
    return tempfile.mkdtemp(prefix='chimes.exec')


def construct_simple_frontend_test(src_name):
    """
    For very simple frontend tests with a single input, we can auto-generate the
    FrontendTest class for it.

    :param src_name: Source file name
    :type src_name: `str`
    :returns: A FrontendTest object
    :rtype: `class` FrontendTest
    """
    test_name = src_name[:src_name.rfind('.')]
    test_name = ''.join([t.capitalize() for t in test_name.split('_')])
    return FrontendTest(test_name, [src_name], os.path.splitext(src_name)[0],
                        False)


def add_include_paths(compile_cmd, includes):
    """
    Add include paths to the provided compile command.

    :param compile_cmd: Current compilation command
    :type compile_cmd: `str`
    :param includes: List of include directories
    :type includes: `list` of `str`
    :returns: New compile command
    :rtype: `str`
    """
    # Add include folders to the compilation command
    for include_folder in includes:
        compile_cmd += ' -I ' + include_folder
    return compile_cmd


def prepare_dependencies(compile_cmd, dependencies, env):
    """
    Prepare any dependencies for a test and add any necessary arguments to the
    compilation command.

    :param compile_cmd: Current compilation command
    :type compile_cmd: `str`
    :param dependencies: List of library dependencies
    :type dependencies: `list` of `str`
    :returns: New compilation command
    :rtype: `str`
    """
    new_library_path = ''

    for dependency in dependencies:
        dirname = os.path.dirname(dependency)
        library = os.path.basename(dependency)
        assert len(library) > 0, dependency
        assert library.endswith('.so'), dependency
        assert library.startswith('lib'), dependency

        makefile_path = os.path.join(dirname, 'Makefile')
        assert os.path.isfile(makefile_path), makefile_path

        run_cmd('make -C ' + dirname, False)
        compile_cmd += ' -L ' + dirname + ' -l ' + library[3:len(library) - 3]
        new_library_path += dirname + ':'

    for var in LD_LIBRARY_VARS:
        value = new_library_path
        if var in env.keys():
            value += env[var]
        env[var] = value

    return compile_cmd


def usage(argv):
    """
    Print usage for this script

    :param argv: CLI arguments
    :type argv: `list` of `str`
    """
    sys.stderr.write('usage: python ' + argv[0] + ' [-k] [-v] [-u] ' +
                     '[-t test-name] [-h]\n')
    sys.exit(1)


def parse_argv(argv):
    """
    Parse options from CLI arguments. Currently we only support a keep option
    that indicates intermediate files should be retained by tests, and a verbose
    option that indicates tests should print more diagnostic information.

    :param argv: CLI arguments
    :type argv: `list` of `str`
    :returns: Configuration for tests
    :rtype: `class` TestConfig
    """
    keep = False
    verbose = False
    update_tests = False
    targets = []
    just_compile = False
    force_update = False
    dummy = False
    block_checkpoints = False
    quiet = False
    repeats = 1

    i = 1
    while i < len(argv):
        if argv[i] == '-k':
            keep = True
        elif argv[i] == '-v':
            verbose = True
        elif argv[i] == '-u':
            update_tests = True
        elif argv[i] == '-d':
            dummy = True
        elif argv[i] == '-b':
            block_checkpoints = True
        elif argv[i] == '-f':
            force_update = True
        elif argv[i] == '-q':
            quiet = True
        elif argv[i] == '-t':
            assert len(argv) >= i + 2
            for target in argv[i + 1].split(','):
                targets.append(target)
            i += 1
        elif argv[i] == '-c':
            just_compile = True
        elif argv[i] == '-r':
            repeats = int(argv[i + 1])
            i += 1
        elif argv[i] == '-h':
            usage(argv)
        else:
            sys.stderr.write('Unknown argument ' + argv[i] + '\n')
            usage(argv)
        i += 1

    return TestConfig(keep, verbose, targets, update_tests, just_compile,
                      force_update, dummy, quiet, repeats, block_checkpoints)


def print_and_abort(stdout, stderr, abort=True):
    """
    Helper function that prints the stdout and stderr of a command that failed
    and optionally exited.

    :param stdout: stdout from a process
    :type stdout: `str`
    :param stderr: stderr from a process
    :type stderr: `str`
    :param abort: should kill this process after printing
    :type abort: `bool`
    """
    sys.stderr.write('STDOUT:\n')
    sys.stderr.write(stdout + '\n')
    sys.stderr.write('STDERR:\n')
    sys.stderr.write(stderr + '\n')
    if abort:
        sys.exit(1)


def copy_environ():
    """
    Create a new environment that can be passed to child processes. This
    function adds the path to the libchimes libraries to the dynamic library
    loading paths.

    :returns: New environment object
    :rtype: `dict`
    """
    newenv = os.environ.copy()

    # Update dynamic library loading paths for different environments to include
    # libchimes
    for var in LD_LIBRARY_VARS:
        value = ''
        if var in newenv.keys():
            value = newenv[var]
        value = DYLD_PATH + ':' + value
        newenv[var] = value

    return newenv


def run_cmd(cmd, expect_err, env=None, interactive=False):
    """
    Execute the provided CLI command, optionally expecting it to return an error
    code.
    """
    cmd = cmd.split()

    stdin_fd = None
    stdout_fd = None
    stderr_fd = None
    stdout_filename = None
    stderr_filename = None

    if not interactive:
        stdin_fd = PIPE
        stdout_fd, stdout_filename = tempfile.mkstemp(prefix='chimes.stdout')
        stderr_fd, stderr_filename = tempfile.mkstemp(prefix='chimes.stderr')

    if env is None:
        env = os.environ

    child = Popen(cmd, stdin=stdin_fd, stdout=stdout_fd, stderr=stderr_fd,
                  close_fds=True, env=env)
    child.wait()

    if not interactive:
        os.close(stdout_fd)
        os.close(stderr_fd)

        stdout_fp = open(stdout_filename, 'r')
        stderr_fp = open(stderr_filename, 'r')

        result = (stdout_fp.read(), stderr_fp.read(), child.returncode)

        stdout_fp.close()
        stderr_fp.close()

        os.remove(stdout_filename)
        os.remove(stderr_filename)
    else:
        result = ('', '', child.returncode)

    if not expect_err and child.returncode != 0:
        sys.stderr.write('Error running "' + ' '.join(cmd) + '"\n')
        print_and_abort(str(result[0]), str(result[1]))

    return result


def list_checkpoint_files():
    """
    Returns a list of all checkpoint files in the current directory

    :returns: List of checkpoint filenames
    :rtype: `list` of `str`
    """
    ckpt_dir = EXEC_DIR
    return [os.path.join(ckpt_dir, f) for f in os.listdir(ckpt_dir)
            if os.path.isfile(os.path.join(ckpt_dir, f)) and
               f.startswith('chimes.') and f.endswith('.ckpt')]


def cleanup_files():
    """
    Delete any files generated by the chimes runtime that might interfere with
    new tests.
    """
    # Clean up any leftover checkpoints from previously failed tests
    for f in os.listdir(EXEC_DIR):
        abs_path = os.path.join(EXEC_DIR, f)
        assert os.path.isfile(abs_path)
        os.unlink(abs_path)


def get_files_from_compiler_stdout(compile_stdout, n_expected_files):
    """
    Parse the final transformed output and working directory of the chimes
    frontend from the frontend's stdout.

    :param compile_stdout: stdout of the compiler
    :type compile_stdout: `str`
    :returns: tuple of transformed output filename and working directory
    :rtype: `tuple` of `str`
    """
    assert n_expected_files > 0
    lines = str(compile_stdout).strip().split('\n')

    transformed = []
    for i in range(n_expected_files):
        transformed.append(lines[len(lines) - n_expected_files + i].strip())

    work_folder = transformed[0][0:transformed[0].rfind('/')]
    root_folder = work_folder
    # folder may end with /nvcc appended for CUDA compilations
    if root_folder.endswith('/nvcc'):
        root_folder = root_folder[0:root_folder.rfind('/')]
    return (transformed, work_folder, root_folder)

def query_user(msg):
    valid_input = False
    do_update = False

    while not valid_input:
        if is_python_3():
            selection = input(msg + ' [y/n]: ')
        else:
            selection = raw_input(msg + ' [y/n]: ')

        if selection == 'y':
            do_update = True
            valid_input = True
        elif selection == 'n':
            do_update = False
            valid_input = True

    return do_update


def test_enabled(name, config):
    if config.found_target or len(config.targets) == 0:
        return True

    for target in config.targets:
        all_after = False
        if target.endswith('-'):
            target = target[:len(target) - 1]
            all_after = True

        if name == target:
            if all_after:
                config.found_target = True
            return True

    return False


def extract_warnings(stderr):
    warnings = []
    lines = stderr.split('\n')
    for line in lines:
        tokens = line.split()
        if len(tokens) > 0 and tokens[0] == 'WARNING:':
            warnings.append(line.strip())
    return warnings


def compare_files(correct, generated, diff_fp, update_tests, force_update):
    if not os.path.isfile(generated):
        sys.stderr.write('FATAL: Missing file ' + generated + '\n')
        sys.exit(1)

    if not os.path.isfile(correct):
        sys.stderr.write('FATAL: Missing file ' + correct + '\n')
        if force_update or (update_tests and \
                query_user('Copy file from test output?')):
            if not os.path.isdir(os.path.dirname(correct)):
                os.makedirs(os.path.dirname(correct))
            shutil.copyfile(generated, correct)
        else:
            sys.exit(1)

    diff_cmd = 'diff ' + correct + ' ' + generated
    stdout, _, _ = run_cmd(diff_cmd, True)

    if len(stdout.strip()) != 0:
        diff_fp.write('===== Correct:   ' + correct + ' =====\n')
        diff_fp.write('===== Generated: ' + generated + ' =====\n')
        diff_fp.write('\n')
        diff_fp.write(stdout)
        diff_fp.write('\n')
        return False
    else:
        return True
        failure = True
        any_failures = True


def update_files(testname, diff_file, files_to_update, update_tests, force_update):
    if update_tests:
        do_update = True
        if not force_update:
            run_cmd('view +1 ' + diff_file, False, interactive=True)

            do_update = query_user('Update test?')

        if do_update:
            for comparison in files_to_update:
                correct = comparison[0]
                generated = comparison[1]

                shutil.copyfile(generated, correct)
        else:
            print(testname + ' FAILED')
            print(diff_file)
            sys.exit(1)
    else:
        print(testname + ' FAILED')
        print(diff_file)
        sys.exit(1)


def check_warnings(testname, stderr, input_dir, output_dir, warnings_filename,
                   update_tests, force_update):
    warnings = extract_warnings(stderr)
    warnings_file = os.path.join(input_dir, warnings_filename)
    warnings_fp = open(warnings_file, 'w')
    warnings_fp.write('\n'.join(warnings))
    warnings_fp.close()
    correct_warnings_file = os.path.join(output_dir, warnings_filename)
    diff_file = os.path.join(input_dir, warnings_filename + '.diff')
    diff_fp = open(diff_file, 'w')
    success = compare_files(correct_warnings_file, warnings_file, diff_fp,
                            update_tests, force_update)
    diff_fp.close()

    if not success:
        # If the user decides not to update the files, update_files will exit
        # immediately. If we get to this point, we know they decided to update
        # the files so we can return False, indicating success.
        update_files(testname, diff_file,
                     [(correct_warnings_file, warnings_file)], update_tests,
                     force_update)
    return False


def build_compile_cmd(compile_script_path, test, output_file, inputs_dir,
                      config, dummy, block_checkpoints, env):
    compile_cmd = compile_script_path + ' ' + test.extra_compile_args

    if config.force_sequential:
        compile_cmd += ' -s '

    if dummy:
        compile_cmd += ' -d'

    if block_checkpoints:
        compile_cmd += ' -b'

    for flag in config.custom_compiler_flags:
        compile_cmd += ' -y ' + flag

    for d in test.defines:
        compile_cmd += ' -D ' + d

    if type(test) == RuntimeTest:
        compile_cmd += ' -k -D __CHIMES_TESTING'

    if config.keep:
        compile_cmd += ' -k'

    test_dir_path = test.src_folder if test.src_folder is not None else inputs_dir
    for input_file in test.input_files:
        compile_cmd += ' -i ' + os.path.join(test_dir_path, input_file)

    compile_cmd += ' -o ' + output_file

    compile_cmd = add_include_paths(compile_cmd, test.includes)
    compile_cmd = prepare_dependencies(compile_cmd, test.dependencies, env)

    return compile_cmd


def pad(s, nchars):
    assert len(s) <= nchars
    padding = nchars - len(s)
    return s + (' ' * (len(s) - nchars))


def median(lst):
    assert len(lst) > 0
    lst = sorted(lst)
    if len(lst) % 2 == 1:
        return lst[((len(lst)+1)/2)-1]
    else:
        return float(sum(lst[(len(lst)/2)-1:(len(lst)/2)+1]))/2.0


def run_perf_test_and_get_time_and_ncheckpoints(exec_name, test, verbose,
                                                repeats, env):
    exec_cmd = exec_name + ' '
    if test.cli_args is not None:
        exec_cmd += test.cli_args

    if verbose:
        print('Executing cmd "' + exec_cmd + '", repeats=' + str(repeats))

    exec_times = []
    ncheckpoints = []
    for r in range(repeats):
        stdout, stderr, code = run_cmd(exec_cmd, True, env=env)
        if verbose:
            print('Main execution completed')

        if code != test.expected_code:
            sys.stderr.write('Test ' + test.name + ' expected exit code ' +
                             str(test.expected_code) + ' but got ' + str(code) +
                             '\n')
            sys.stderr.write('Command = ' + exec_cmd + '\n')
            print_and_abort(stdout, stderr)

        if verbose:
            print_and_abort(stdout, stderr, abort=False)

        checkpoint_files = list_checkpoint_files()
        ncheckpoint_files = len(checkpoint_files)
        exec_time = test.exec_time_parser(stdout, stderr)

        exec_times.append(exec_time)
        ncheckpoints.append(ncheckpoint_files)

        for checkpoint in checkpoint_files:
            os.remove(checkpoint)

    return (median(exec_times), median(ncheckpoints))


def run_frontend_test(test, compile_script_path, examples_dir_path,
                      test_dir_path, config):
    """
    Execute a single frontend test.

    :param test: The test to run
    :type test: `class` FrontendTest
    :param compile_script_path: Path to the compilation script for this example
    :type compile_script_path: `str`
    :param examples_dir_path: Path to a directory containing example inputs
    :type examples_dir_path: `str`
    :param test_dir_path: Path to a directory containing example outputs to
            compare against
    :type test_dir_path: `str`
    :param config: Configuration for tests
    :type config: `class` TestConfig
    """
    if not test_enabled(test.name, config):
        print(test.name + ' SKIPPING')
        return

    env = copy_environ()
    exec_dir = create_exec_dir()

    clean_and_create_folder(FRONTEND_WORKING_DIR)
    compile_cmd = compile_script_path + ' -k -w ' + FRONTEND_WORKING_DIR + \
                  ' -o ' + FRONTEND_BIN + ' ' + test.extra_cli_args

    if config.force_sequential:
        compile_cmd += ' -s '

    for flag in config.custom_compiler_flags:
        compile_cmd += ' -y ' + flag

    for input_file in test.input_files:
        compile_cmd += ' -i ' + os.path.join(examples_dir_path, test.src_folder, input_file)

    compile_cmd = add_include_paths(compile_cmd, test.includes)
    compile_cmd = prepare_dependencies(compile_cmd, test.dependencies, env)

    if config.verbose:
        print(compile_cmd)

    # Try building the test
    stdout, stderr, _ = run_cmd(compile_cmd, test.expect_err, env=env)
    if config.verbose:
        print_and_abort(stdout, stderr, abort=False)
    assert test.expect_err or os.path.isfile(FRONTEND_BIN)

    if config.just_compile:
        return

    # Get the final output filename and containing folder
    transformed, work_folder, root_folder = \
            get_files_from_compiler_stdout(stdout, len(test.input_files))
    assert len(transformed) == len(test.input_files)

    check_warnings(test.name, stderr, work_folder,
                   os.path.join(test_dir_path, test.ref_folder),
                   'clang_warnings', config.update_tests,
                   config.force_update)
    any_failures = False

    # Diff the test output and the expected output
    for i in range(len(test.input_files)):
        files_to_compare = []

        # Compare the final output of the compile command to the expected final
        # output
        correct_file = os.path.join(test_dir_path, test.ref_folder,
                                    os.path.basename(test.input_files[i]) +
                                        '.pre.transformed.cpp')
        assert os.path.basename(correct_file) == \
                os.path.basename(transformed[i]), 'correct_file=' + \
                correct_file + ' transformed=' + transformed[i]
        files_to_compare.append((correct_file, transformed[i]))

        # Compare the info files generated by the compile command
        info_dir = os.path.splitext(os.path.basename(test.input_files[i]))[0]
        input_file_base = os.path.basename(test.input_files[i])
        info_dir_path = os.path.join(test_dir_path, test.ref_folder, info_dir)
        for info_file in INFO_FILES.keys():
            expected_output = os.path.join(info_dir_path, info_file)
            if input_file_base.endswith('.cu'):
                test_output = os.path.join(root_folder, 'nvcc',
                                           input_file_base + '.' + info_file)
            else:
                test_output = os.path.join(root_folder, input_file_base + '.' +
                                           info_file)
            files_to_compare.append((expected_output, test_output))

        failure = False
        diff_file = os.path.join(work_folder,
                                 os.path.basename(test.input_files[i])) + '.diff'
        diff_fp = open(diff_file, 'w')

        for comparison in files_to_compare:
            correct = comparison[0]
            generated = comparison[1]
            success = compare_files(correct, generated, diff_fp,
                                    config.update_tests, config.force_update)
            if not success:
                failure = True
                any_failures = True

        diff_fp.close()

        if failure:
            update_files(test.name, diff_file, files_to_compare, config.update_tests,
                         config.force_update)

    if not config.keep:
        run_cmd('rm -rf ' + root_folder, False)
    cleanup_files() # delete binary

    if any_failures:
        print(test.name + ' UPDATED')
    else:
        print(test.name + ' PASSED')


def run_runtime_test(test, compile_script_path, inputs_dir, config):
    """
    Execute a single runtime test.

    :param test: Definition of the test to run
    :type test: `class` RuntimeTest
    :param compile_script_path: Path to the compilation script for this input
    :type compile_script_path: `str`
    :param inputs_dir: Directory containing example inputs
    :type inputs_dir: `str`
    :param config: Configuration information for tests
    :type config: `class` TestConfig
    """
    if not test_enabled(test.name, config):
        print(test.name + ' SKIPPING')
        return

    # Compile the input file into an executable
    env = copy_environ()
    env[CHECKPOINT_DIR_ENV_VAR] = EXEC_DIR
    # if config.custom_compiler is not None:
    #     env['GXX'] = config.custom_compiler

    compile_cmd = build_compile_cmd(compile_script_path, test, RUNTIME_BIN,
                                    inputs_dir, config, config.dummy,
                                    config.block_checkpoints, env)

    if config.verbose:
        print(compile_cmd)

    stdout, stderr, code = run_cmd(compile_cmd, False, env=env)

    if config.verbose:
        print_and_abort(stdout, stderr, abort=False)

    if config.just_compile:
        return

    _, work_folder, root_folder = get_files_from_compiler_stdout(stdout, len(test.input_files))

    if not os.path.isfile(RUNTIME_BIN):
        sys.stderr.write('FATAL: Compilation failed to generate an executable\n')
        sys.exit(1)

    exec_cmd = RUNTIME_BIN + ' '
    if test.cli_args is not None:
        exec_cmd += test.cli_args

    # Test the command without a checkpoint, verify it produces the expected
    # error code and one checkpoint file.
    assert 'CHIMES_CHECKPOINT_FILE' not in env
    env['CHIMES_DISABLE_THROTTLING'] = 'TRUE'
    if config.verbose:
        print('Executing cmd "' + exec_cmd + '"')
    stdout, stderr, code = run_cmd(exec_cmd, True, env=env)
    if config.verbose:
        print('Main execution completed')

    if code != test.expected_code:
        sys.stderr.write('Test ' + test.name + ' expected exit code ' +
                         str(test.expected_code) + ' but got ' + str(code) +
                         '\n')
        sys.stderr.write('Command = CHIMES_DISABLE_THROTTLING=TRUE ' + exec_cmd + '\n')
        sys.stderr.write('Folder ' + work_folder + '\n')
        print_and_abort(stdout, stderr)

    if test.expected_num_checkpoints != 0 and not os.path.isfile(os.path.join(
            EXEC_DIR, 'chimes.0.ckpt')):
        sys.stderr.write('Test ' + test.name + ' failed to produce a ' +
                         'checkpoint file\n')
        sys.stderr.write('Folder ' + work_folder + '\n')
        print_and_abort(stdout, stderr)

    if config.verbose:
        print_and_abort(stdout, stderr, abort=False)

    check_warnings(test.name, stderr, work_folder, os.path.join(inputs_dir, test.name),
                   'exec_warnings', True, config.force_update)

    # Run all generated checkpoints
    chimes_files = list_checkpoint_files()
    if test.expected_num_checkpoints != -1 and len(chimes_files) != \
                                        test.expected_num_checkpoints:
        sys.stderr.write('Test ' + test.name + ' expected ' +
                         str(test.expected_num_checkpoints) + ' checkpoints, ' +
                         'but found ' + str(len(chimes_files)) + '\n')
        sys.stderr.write('Folder ' + work_folder + '\n')
        print_and_abort(stdout, stderr)

   
    start_time = time.time()
    total_checkpoints = len(chimes_files)
    completed_checkpoints = 0

    if config.verbose:
        sys.stderr.write('Test ' + test.name + ' produced ' +
                         str(len(chimes_files)) +
                         ' checkpoint files initially:\n')
        for f in chimes_files:
            sys.stderr.write('  ' + f + '\n')

    while len(chimes_files) > 0 and (time.time() - start_time) < MAX_TEST_TIME:
        checkpoint = random.choice(chimes_files)
        if config.verbose:
            sys.stderr.write('Testing checkpoint file ' + checkpoint + '\n')

        chimes_files.remove(checkpoint)
        env['CHIMES_CHECKPOINT_FILE'] = checkpoint
        env['CHIMES_DISABLE_THROTTLING'] = 'TRUE'
        stdout, stderr, code = run_cmd(exec_cmd, True, env=env)
        if code != CHIMES_REPLAY_EXIT_CODE:
            sys.stderr.write('Rerun of test ' + test.name + ' on checkpoint ' +
                             checkpoint + ' expected exit code ' +
                             str(CHIMES_REPLAY_EXIT_CODE) + ' but got ' +
                             str(code) + '\n')
            sys.stderr.write('CHIMES_DISABLE_THROTTLING=TRUE ' +
                             'CHIMES_CHECKPOINT_FILE=' + checkpoint + ' ' +
                             exec_cmd + '\n')
            sys.stderr.write('Folder ' + work_folder + '\n')
            print_and_abort(stdout, stderr)

        if config.verbose:
            sys.stderr.write('========== RESUME of checkpoint ' + checkpoint +
                  ' ==========\n')
            print_and_abort(stdout, stderr, abort=False)

        completed_checkpoints += 1

    if not config.keep:
        cleanup_files() # delete binary and checkpoint files
        run_cmd('rm -rf ' + root_folder, False)

    if completed_checkpoints == total_checkpoints:
        info_str = str(total_checkpoints)
    else:
        info_str = str(completed_checkpoints) + '/' + str(total_checkpoints)

    print(test.name + ' PASSED (' + info_str + ' checkpoint(s))')


def run_perf_test(test, compile_script_path, normal_compile_script_path,
                  inputs_dir, config):
    if not test_enabled(test.name, config):
        print(test.name + ' SKIPPING')
        return

    env = copy_environ()
    env[CHECKPOINT_DIR_ENV_VAR] = EXEC_DIR

    chimes_compile_cmd = build_compile_cmd(compile_script_path, test,
                                           CHIMES_PERF_BIN, inputs_dir, config,
                                           config.dummy,
                                           config.block_checkpoints, env)
    normal_compile_cmd = build_compile_cmd(normal_compile_script_path, test,
                                           NORMAL_PERF_BIN, inputs_dir, config,
                                           False, False, env)
    if config.verbose:
        print(chimes_compile_cmd)
        print(normal_compile_cmd)

    chimes_stdout, chimes_stderr, code = run_cmd(chimes_compile_cmd, False, env=env)

    if config.verbose:
        print_and_abort(chimes_stdout, chimes_stderr, abort=False)

    if not os.path.isfile(CHIMES_PERF_BIN):
        print_and_abort(chimes_stdout, chimes_stderr, abort=False)
        sys.stderr.write('FATAL: Compilation failed to generate an executable\n')
        sys.exit(1)

    if config.just_compile:
        return

    normal_stdout, normal_stderr, code = run_cmd(normal_compile_cmd, False,
                                                 env=env)

    if config.verbose:
        print_and_abort(normal_stdout, normal_stderr, abort=False)

    if not os.path.isfile(NORMAL_PERF_BIN):
        print_and_abort(normal_stdout, normal_stderr, abort=False)
        sys.stderr.write('FATAL: Compilation failed to generate an executable\n')
        sys.exit(1)

    chimes_exec_time, chimes_ncheckpoints = \
        run_perf_test_and_get_time_and_ncheckpoints(CHIMES_PERF_BIN, test,
                                                    config.verbose,
                                                    config.repeats, env)
    normal_exec_time, _ = \
        run_perf_test_and_get_time_and_ncheckpoints(NORMAL_PERF_BIN, test,
                                                    config.verbose,
                                                    config.repeats, env)

    if not config.keep:
        cleanup_files() # delete binary

    print(pad(test.name, 30) + ' - added ' +
          str(((float(chimes_exec_time) / float(normal_exec_time)) - 1.0) *
              100.0) + '% overhead for ' + str(chimes_ncheckpoints) +
          ' checkpoint files')
