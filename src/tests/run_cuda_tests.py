import os
import os.path
import sys
from subprocess import Popen, PIPE
import sys
from os import listdir
import tempfile

tests = [('vector_sum.cu', 'vector_sum.cudafe1.register.cpp')]

NUM_DEBUG_HOME = os.environ['NUM_DEBUG_HOME']
COMPILE_SCRIPT = NUM_DEBUG_HOME + '/src/preprocessing/compile_cuda.sh'
EXAMPLES_DIR = NUM_DEBUG_HOME + '/src/examples'
CUDA_EXAMPLES_DIR = EXAMPLES_DIR + '/cuda'
CUDA_TEST_DIR = NUM_DEBUG_HOME + '/src/tests/cuda'

def run_cmd(cmd, expect_err):
    cmd = cmd.split()

    stdout_fd, stdout_filename = tempfile.mkstemp(prefix='numdebug.stdout')
    stderr_fd, stderr_filename = tempfile.mkstemp(prefix='numdebug.stderr')

    p = Popen(cmd, stdin=PIPE, stdout=stdout_fd, stderr=stderr_fd,
            close_fds=True)
    p.wait()

    os.close(stdout_fd)
    os.close(stderr_fd)

    stdout_fp = open(stdout_filename, 'r')
    stderr_fp = open(stderr_filename, 'r')

    result = (stdout_fp.read(), stderr_fp.read())

    stdout_fp.close()
    stderr_fp.close()

    os.remove(stdout_filename)
    os.remove(stderr_filename)

#     if sys.version_info >= (3, 0):
#         result = (str(p.stdout.read(), encoding='utf8'),
#                 str(p.stderr.read(), encoding='utf8'))
#     else:
#         result = (p.stdout.read(), p.stderr.read())

    if not expect_err and p.returncode != 0:
        print('Error running "' + ' '.join(cmd) + '"')
        print()
        print(str(result[0]))
        print()
        print(str(result[1]))
        sys.exit(1)
    return result

for t in tests:
    input_file = t[0]
    compare_file = t[1]

    compile_cmd = COMPILE_SCRIPT + ' -k -i ' + CUDA_EXAMPLES_DIR + '/' + input_file
    stdout, stderr = run_cmd(compile_cmd, False)
    if sys.version_info >= (3, 0):
        lines = str(stdout, encoding='utf8').split('\n')
    else:
        lines = stdout.split('\n')
    transformed = lines[len(lines) - 2].strip()

    diff_cmd = 'diff ' + CUDA_TEST_DIR + '/' + compare_file + ' ' + transformed
    stdout, stderr = run_cmd(diff_cmd, False)

    if len(stdout.strip()) != 0:
        print('Mismatch in test for ' + input_file)
        print(stdout)
        sys.exit(1)
    else:
        assert os.path.isfile('a.out')
        folder = transformed[0:transformed.rfind('/')]
        run_cmd('rm -rf ' + folder, False)
        run_cmd('rm a.out', False)
