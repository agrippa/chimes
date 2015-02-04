"""
Common functionality for functional tests.
"""
import os
import sys
import tempfile
from subprocess import Popen, PIPE

NUM_DEBUG_HOME = os.environ['NUM_DEBUG_HOME']
NUM_DEBUG_REPLAY_EXIT_CODE = 55
NUM_DEBUG_WORK_DIR_PREFIX = '/tmp/numdebug'

LD_LIBRARY_VARS = ['DYLD_LIBRARY_PATH', 'LD_LIBRARY_PATH']
DYLD_PATH = os.path.join(NUM_DEBUG_HOME, 'src', 'libnumdebug')

# Mapping from info file name to a space-delimited column that may cause
# differences between the test and expected outputs due to different temporary
# filenames
INFO_FILES = {'call.info': -1, 'diag.info': -1, 'exit.info': -1,
              'func.info': -1, 'globals.info': -1, 'heap.info': -1,
              'lines.info': 0, 'module.info': -1, 'reachable.info': -1,
              'stack.info': 0, 'struct.info': -1}

class TestConfig(object):
    """
    Encapsulates configuration that can be changed at the command line
    """
    def __init__(self, keep, verbose, targets):
        self.keep = keep
        self.verbose = verbose
        self.targets = targets

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
                 expected_num_checkpoints, includes=None, dependencies=None, cli_args=None):
        assert expected_num_checkpoints > 0, name

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
    def __init__(self, name, input_files, compare_files, info_dirs, expect_err,
                 includes=None, dependencies=None):
        self.name = name
        self.input_files = input_files
        self.compare_files = compare_files
        self.info_dirs = info_dirs
        self.expect_err = expect_err
        self.includes = [] if includes is None else includes
        self.dependencies = [] if dependencies is None else dependencies


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
    sys.stderr.write('usage: python ' + argv[0] + ' [-k] [-v] [-t test-name] ' +
                     '[-h]\n')
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
    targets = []

    i = 1
    while i < len(argv):
        if argv[i] == '-k':
            keep = True
        elif argv[i] == '-v':
            verbose = True
        elif argv[i] == '-t':
            assert len(argv) >= i + 2
            for target in argv[i + 1].split(','):
                targets.append(target)
            i += 1
        elif argv[i] == '-h':
            usage(argv)
        else:
            sys.stderr.write('Unknown argument ' + argv[i] + '\n')
            usage(argv)
        i += 1

    return TestConfig(keep, verbose, targets)


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
    function adds the path to the libnumdebug libraries to the dynamic library
    loading paths.

    :returns: New environment object
    :rtype: `dict`
    """
    newenv = os.environ.copy()

    # Update dynamic library loading paths for different environments to include
    # libnumdebug
    for var in LD_LIBRARY_VARS:
        value = ''
        if var in newenv.keys():
            value = newenv[var]
        value = DYLD_PATH + ':' + value
        newenv[var] = value

    return newenv


def run_cmd(cmd, expect_err, env=None):
    """
    Execute the provided CLI command, optionally expecting it to return an error
    code.
    """
    cmd = cmd.split()

    stdout_fd, stdout_filename = tempfile.mkstemp(prefix='numdebug.stdout')
    stderr_fd, stderr_filename = tempfile.mkstemp(prefix='numdebug.stderr')

    if env is None:
        env = os.environ

    child = Popen(cmd, stdin=PIPE, stdout=stdout_fd, stderr=stderr_fd,
                  close_fds=True, env=env)
    child.wait()

    os.close(stdout_fd)
    os.close(stderr_fd)

    stdout_fp = open(stdout_filename, 'r')
    stderr_fp = open(stderr_filename, 'r')

    result = (stdout_fp.read(), stderr_fp.read(), child.returncode)

    stdout_fp.close()
    stderr_fp.close()

    os.remove(stdout_filename)
    os.remove(stderr_filename)

    if not expect_err and child.returncode != 0:
        sys.stderr.write('Error running "' + ' '.join(cmd) + '"\n')
        print_and_abort(str(result[0]), str(result[1]))

    return result


def list_checkpoint_files_in_pwd():
    """
    Returns a list of all checkpoint files in the current directory

    :returns: List of checkpoint filenames
    :rtype: `list` of `str`
    """
    return [f for f in os.listdir('.') if os.path.isfile(f) and
            f.startswith('numdebug.dump.')]


def cleanup_runtime_files():
    """
    Delete any files generated by the numdebug runtime that might interfere with
    new tests.
    """
    # Clean up any leftover checkpoints from previously failed tests
    numdebug_files = list_checkpoint_files_in_pwd()
    for existing in numdebug_files:
        os.remove(existing)
    if os.path.isfile('a.out'):
        os.remove('a.out')


def get_files_from_compiler_stdout(compile_stdout, n_expected_files):
    """
    Parse the final transformed output and working directory of the numdebug
    frontend from the frontend's stdout.

    :param compile_stdout: stdout of the compiler
    :type compile_stdout: `str`
    :returns: tuple of transformed output filename and working directory
    :rtype: `tuple` of `str`
    """
    assert n_expected_files > 0
    # Get the final output filename and containing folder
    if sys.version_info >= (3, 0):
        lines = str(compile_stdout, encoding='utf8').strip().split('\n')
    else:
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


def _diff_files(file1name, file2name, col):
    """
    Compare two files line-by-line. If col != -1, it marks a space-delimited
    column in the text that contains a path which may be randomly different from
    previous runs (and which can be ignored).

    :param file1name: First file to compare
    :type file1name: `str`
    :param file2name: Second file to compare
    :type file2name: `str`
    :param col: Column containing filename
    :type col: `int`
    """
    if not os.path.isfile(file1name):
        sys.stderr.write('Missing file while trying to diff ' + file1name + '\n')
        sys.exit(1)

    if not os.path.isfile(file2name):
        sys.stderr.write('Missing file while trying to diff ' + file2name + '\n')
        sys.exit(1)

    fp1 = open(file1name, 'r')
    fp2 = open(file2name, 'r')

    line1 = fp1.readline()
    line2 = fp2.readline()
    line_index = 1

    while len(line1) != 0 and len(line2) != 0:

        if line1 != line2:
            diff_resolved = False
            # Try to resolve difference as a matter of different temporary paths
            if col != -1:
                cols1 = line1.split(' ')
                cols2 = line2.split(' ')

                col1 = cols1[col]
                col2 = cols2[col]

                if col1.find(NUM_DEBUG_WORK_DIR_PREFIX) == 0 and \
                        col2.find(NUM_DEBUG_WORK_DIR_PREFIX) == 0:
                    col1 = col1[len(NUM_DEBUG_WORK_DIR_PREFIX):]
                    col1 = col1[col1.find('/') + 1:]
                    col2 = col2[len(NUM_DEBUG_WORK_DIR_PREFIX):]
                    col2 = col2[col2.find('/') + 1:]

                    if col1 == col2:
                        # paths match if you ignore the randomly generated /tmp/
                        # directories. remove the potential cause for the
                        # mismatch and try again.
                        cols1[col] = ''
                        cols2[col] = ''
                        newline1 = ' '.join(cols1)
                        newline2 = ' '.join(cols2)

                        diff_resolved = (newline1 == newline2)

            if not diff_resolved:
                sys.stderr.write('ERROR: Mismatch at line ' + str(line_index) +
                                 ' of ' + file1name + ' and ' + file2name +
                                 '\n')
                sys.stderr.write(file1name + ':\n')
                sys.stderr.write(line1[:len(line1) - 1] + '\n')
                sys.stderr.write(file2name + ':\n')
                sys.stderr.write(line2[:len(line2) - 1] + '\n')
                sys.exit(1)

        line1 = fp1.readline()
        line2 = fp2.readline()
        line_index += 1

    if len(line1) == 0 and len(line2) != 0:
        print('ERROR: Extra lines in ' + file2name + ' compared to ' +
              file1name)
        exit(1)

    if len(line2) == 0 and len(line1) != 0:
        print('ERROR: Extra lines in ' + file1name + ' compared to ' +
              file2name)
        exit(1)

    fp1.close()
    fp2.close()

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
    # Compile the test input while keeping intermediate files
    assert len(test.input_files) == len(test.compare_files)
    assert len(test.input_files) == len(test.info_dirs)

    if len(config.targets) > 0 and test.name not in config.targets:
        print(test.name + ' SKIPPING')
        return

    compile_cmd = compile_script_path + ' -k'
    for input_file in test.input_files:
        compile_cmd += ' -i ' + os.path.join(examples_dir_path, input_file)

    compile_cmd = add_include_paths(compile_cmd, test.includes)
    compile_cmd = prepare_dependencies(compile_cmd, test.dependencies, {})

    stdout, stderr, _ = run_cmd(compile_cmd, test.expect_err)

    if config.verbose:
        print_and_abort(stdout, stderr, abort=False)

    # Get the final output filename and containing folder
    transformed, work_folder, root_folder = \
            get_files_from_compiler_stdout(stdout, len(test.input_files))
    assert len(transformed) == len(test.input_files)

    # Diff the test output and the expected output
    for i in range(len(test.input_files)):
        correct_file = os.path.join(test_dir_path, test.compare_files[i])

        if not os.path.isfile(correct_file):
            sys.stderr.write('Missing file ' + correct_file + '\n')
            sys.exit(1)

        if not os.path.isfile(transformed[i]):
            sys.stderr.write('Missing file ' + transformed[i] + '\n')
            sys.exit(1)

        diff_cmd = 'diff ' + correct_file + ' ' + transformed[i]
        stdout, _, _ = run_cmd(diff_cmd, True)

        if len(stdout.strip()) != 0:
            # If the test and expected output are different, emit a warning
            diff_file = os.path.join(work_folder, os.path.basename(test.input_files[i])) + '.diff'
            print('===== Mismatch in output of test for ' + test.input_files[i] +
                  ' =====')
            print('===== Comparison file is ' + test.compare_files[i] + ' =====')
            print('===== This may not be an actual error. Mismatched output can ' +
                  'result from system differences between platforms =====')
            diff_fp = open(diff_file, 'w')
            diff_fp.write(stdout)
            diff_fp.close()
            print('===== The diff is stored in ' + diff_file + ', use -k to keep ' +
                  'intermediate files and check the diff =====')
            print('===== This diff was generated with the command "' + diff_cmd + '" =====')
            print('')

    assert test.expect_err or os.path.isfile('a.out')

    # Iterate over the metadata files in info_dir and check them against the
    # files produced by the test
    for i in range(len(test.input_files)):
        info_dir = test.info_dirs[i]
        input_file_base = os.path.basename(test.input_files[i])
        info_dir_path = os.path.join(test_dir_path, info_dir)
        for info_file in INFO_FILES.keys():
            expected_output = os.path.join(info_dir_path, info_file)
            if input_file_base.endswith('.cu'):
                test_output = os.path.join(root_folder, 'nvcc', input_file_base + '.' +
                                           info_file)
            else:
                test_output = os.path.join(root_folder, input_file_base + '.' +
                                           info_file)
            _diff_files(expected_output, test_output, INFO_FILES[info_file])

    if not config.keep:
        run_cmd('rm -rf ' + root_folder, False)
    run_cmd('rm -f a.out', False)
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
    if len(config.targets) > 0 and test.name not in config.targets:
        print(test.name + ' SKIPPING')
        return

    # Compile the input file into an executable
    env = copy_environ()
    compile_cmd = compile_script_path + ' -k'
    if type(test.input_files) is str:
        compile_cmd += ' -i ' + os.path.join(inputs_dir, test.input_files)
    elif type(test.input_files) is list:
        for input_file in test.input_files:
            compile_cmd += ' -i ' + os.path.join(inputs_dir, input_file)
    else:
        raise Exception('Invalid type for input list')

    compile_cmd = add_include_paths(compile_cmd, test.includes)
    compile_cmd = prepare_dependencies(compile_cmd, test.dependencies, env)

    stdout, stderr, code = run_cmd(compile_cmd, False, env=env)
    _, work_folder, root_folder = get_files_from_compiler_stdout(stdout, len(test.input_files))

    if not os.path.isfile('a.out'):
        sys.stderr.write('Compilation failed to generate an executable\n')
        sys.exit(1)

    exec_cmd = './a.out '
    if test.cli_args is not None:
        exec_cmd += test.cli_args

    # Test the command without a checkpoint, verify it produces the expected
    # error code and one checkpoint file.
    assert 'NUMDEBUG_CHECKPOINT_FILE' not in env
    stdout, stderr, code = run_cmd(exec_cmd, True, env=env)
    if code != test.expected_code:
        sys.stderr.write('Test ' + test.name + ' expected exit code ' +
                         str(test.expected_code) + ' but got ' + str(code) +
                         '\n')
        sys.stderr.write('Folder ' + work_folder + '\n')
        print_and_abort(stdout, stderr)

    if not os.path.isfile('numdebug.dump.0'):
        sys.stderr.write('Test ' + test.name + ' failed to produce a ' +
                         'checkpoint file\n')
        sys.stderr.write('Folder ' + work_folder + '\n')
        print_and_abort(stdout, stderr)

    if config.verbose:
        print_and_abort(stdout, stderr, abort=False)

    # Run all generated checkpoints
    numdebug_files = list_checkpoint_files_in_pwd()
    if test.expected_num_checkpoints != -1 and len(numdebug_files) != \
                                        test.expected_num_checkpoints:
        sys.stderr.write('Test ' + test.name + ' expected ' +
                         str(test.expected_num_checkpoints) + ' checkpoints, ' +
                         'but only found ' + str(len(numdebug_files)) + '\n')
        sys.stderr.write('Folder ' + work_folder + '\n')
        print_and_abort(stdout, stderr)

    for checkpoint in numdebug_files:
        env['NUMDEBUG_CHECKPOINT_FILE'] = checkpoint
        stdout, stderr, code = run_cmd(exec_cmd, True, env=env)
        if code != NUM_DEBUG_REPLAY_EXIT_CODE:
            sys.stderr.write('Rerun of test ' + test.name + ' on checkpoint ' +
                             checkpoint + ' expected exit code ' +
                             str(NUM_DEBUG_REPLAY_EXIT_CODE) + ' but got ' +
                             str(code) + '\n')
            sys.stderr.write('Folder ' + work_folder + '\n')
            print_and_abort(stdout, stderr)

    for checkpoint in list_checkpoint_files_in_pwd():
        os.remove(checkpoint)
    os.remove('a.out')
    if not config.keep:
        run_cmd('rm -rf ' + root_folder, False)
    print(test.name + ' PASSED (' + str(len(numdebug_files)) +
          ' checkpoint(s))')
