import os
import sys
import tempfile
from subprocess import Popen, PIPE
from os import listdir

NUM_DEBUG_HOME = os.environ['NUM_DEBUG_HOME']
NUM_DEBUG_REPLAY_EXIT_CODE = 55
NUM_DEBUG_WORK_DIR_PREFIX = '/tmp/numdebug'

LD_LIBRARY_VARS = [ 'DYLD_LIBRARY_PATH', 'LD_LIBRARY_PATH' ]
DYLD_PATH = os.path.join(NUM_DEBUG_HOME, 'src', 'libnumdebug')

# Mapping from info file name to a space-delimited column that may cause
# differences between the test and expected outputs due to different temporary
# filenames
info_files = { 'diag.info': -1, 'heap.info': -1, 'lines.info': 0,
    'stack.info': 0, 'struct.info': -1 }

class TestConfig:
    """
    Encapsulates configuration that can be changed at the command line
    """
    def __init__(self, keep):
        self.keep = keep


class RuntimeTest:
    """
    A test for the runtime system that restores variable values from a
    checkpoint. Defines the input file to compile, and the expected exit code
    from running the application. Test applications are expected to include
    asserts which verify correct behavior.
    """
    def __init__(self, name, input_file, expected_code):
        self.name = name
        self.input_file = input_file
        self.expected_code = expected_code


class FrontendTest:
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
    """
    def __init__(self, name, input_file, compare_file, info_dir, expect_err):
        self.name = name
        self.input_file = input_file
        self.compare_file = compare_file
        self.info_dir = info_dir
        self.expect_err = expect_err


def parse_argv(argv):
    keep = False
    i = 1
    while i < len(argv):
        if argv[i] == '-k':
            keep = True
        else:
            sys.stderr.write('Unknown argument ' + argv[i] + '\n')
            sys.exit(1)
        i += 1 

    return TestConfig(keep)


def print_and_abort(stdout, stderr):
    sys.stderr.write('STDOUT:\n')
    sys.stderr.write(stdout + '\n')
    sys.stderr.write('STDERR:\n')
    sys.stderr.write(stderr + '\n')
    sys.exit(1)


def copy_environ():
    newenv = os.environ.copy()

    # Update dynamic library loading paths for different environments to include
    # libnumdebug
    for v in LD_LIBRARY_VARS:
        value = ''
        if v in newenv.keys():
            value = newenv[v]
        value = DYLD_PATH + ':' + value
        newenv[v] = value

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

    p = Popen(cmd, stdin=PIPE, stdout=stdout_fd, stderr=stderr_fd,
            close_fds=True, env=env)
    p.wait()

    os.close(stdout_fd)
    os.close(stderr_fd)

    stdout_fp = open(stdout_filename, 'r')
    stderr_fp = open(stderr_filename, 'r')

    result = (stdout_fp.read(), stderr_fp.read(), p.returncode)

    stdout_fp.close()
    stderr_fp.close()

    os.remove(stdout_filename)
    os.remove(stderr_filename)

    if not expect_err and p.returncode != 0:
        sys.stderr.write('Error running "' + ' '.join(cmd) + '"\n')
        print_and_abort(str(result[0]), str(result[1]))

    return result


def get_files_from_compiler_stdout(compile_stdout):
    # Get the final output filename and containing folder
    if sys.version_info >= (3, 0):
        lines = str(compile_stdout, encoding='utf8').strip().split('\n')
    else:
        lines = str(compile_stdout).strip().split('\n')
    transformed = lines[len(lines) - 1].strip()
    folder = transformed[0:transformed.rfind('/')]
    return (transformed, folder)


def _diff_files(file1name, file2name, col):
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
                        ' of ' + file1name + ' and ' + file2name + '\n')
                sys.stderr.write(file1name + ':\n')
                sys.stderr.write(line1[:len(line1) - 1] + '\n')
                sys.stderr.write(file2name + ':\n')
                sys.stderr.write(line2[:len(line2) - 1] + '\n')
                sys.exit(1)

        line1 = fp1.readline()
        line2 = fp2.readline()
        line_index += 1

    if len(line1) == 0 and len(line2) != 0:
        print 'ERROR: Extra lines in ' + file2name + ' compared to ' + file1name
        exit(1)

    if len(line2) == 0 and len(line1) != 0:
        print 'ERROR: Extra lines in ' + file1name + ' compared to ' + file2name
        exit(1)

    fp1.close()
    fp2.close()

def run_test(test, compile_script_path, examples_dir_path, test_dir_path,
        config):
    """
    Execute a single test.

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
    compile_cmd = compile_script_path + ' -k -i ' + \
            os.path.join(examples_dir_path, test.input_file)
    compile_stdout, stderr, code = run_cmd(compile_cmd, test.expect_err)

    # Get the final output filename and containing folder
    transformed, folder = get_files_from_compiler_stdout(compile_stdout)

    # Diff the test output and the expected output
    stdout, stderr, code = run_cmd('diff ' + os.path.join(test_dir_path,
                test.compare_file) + ' ' + transformed, False)

    if len(stdout.strip()) != 0:
        # If the test and expected output are different, emit a warning
        diff_file = os.path.join(folder, test.input_file) + '.diff'
        print('===== Mismatch in output of test for ' + test.input_file +
                ' =====')
        print('===== This may not be an actual error. Mismatched output can ' +
                'result from system differences between platforms =====')
        fp = open(diff_file, 'w')
        fp.write(stdout)
        fp.close()
        print('===== The diff is stored in ' + diff_file + ', use -k to keep ' +
                'intermediate files and check the diff =====')

    assert test.expect_err or os.path.isfile('a.out')
    assert test.info_dir is not None

    # Iterate over the metadat files in info_dir and check them against the
    # files produced by the test
    info_dir_path = os.path.join(test_dir_path, test.info_dir)
    for info_file in info_files.keys():
        expected_output = os.path.join(info_dir_path, info_file)
        test_output = os.path.join(folder, info_file)
        _diff_files(expected_output, test_output, info_files[info_file])

    if not config.keep:
        run_cmd('rm -rf ' + folder, False)
    run_cmd('rm -f a.out', False)
    print test.name + ' PASSED'
