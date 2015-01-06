import os
import os.path
import sys
from subprocess import Popen, PIPE
import sys

tests = [('simple_stencil.cpp', 'simple_stencil.register.cpp', False), ('pass_by_ref.cpp ', 'pass_by_ref.register.cpp', True)]

NUM_DEBUG_HOME = os.environ['NUM_DEBUG_HOME']
COMPILE_SCRIPT = NUM_DEBUG_HOME + '/src/preprocessing/compile_cpp.sh'
EXAMPLES_DIR = NUM_DEBUG_HOME + '/src/examples'
CPP_EXAMPLES_DIR = EXAMPLES_DIR + '/cpp'
CPP_TEST_DIR = NUM_DEBUG_HOME + '/src/tests/cpp'

def run_cmd(cmd, expect_err):
    cmd = cmd.split()
    p = Popen(cmd, stdin=PIPE, stdout=PIPE, stderr=PIPE, close_fds=True)
    p.wait()
    if sys.version_info >= (3, 0):
        result = (str(p.stdout.read(), encoding='utf8'),
                str(p.stderr.read(), encoding='utf8'))
    else:
        result = (p.stdout.read(), p.stderr.read())

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
    expect_err = t[2]

    compile_cmd = COMPILE_SCRIPT + ' -k -i ' + CPP_EXAMPLES_DIR + '/' + input_file
    stdout, stderr = run_cmd(compile_cmd, expect_err)
    if sys.version_info >= (3, 0):
        lines = str(stdout, encoding='utf8').split('\n')
    else:
        lines = str(stdout).split('\n')
    transformed = lines[len(lines) - 2].strip()

    stdout, stderr = run_cmd('diff ' + CPP_TEST_DIR + '/' + compare_file + ' ' + transformed, False)

    if len(stdout.strip()) != 0:
        print('Mismatch in test for ' + input_file)
        print(stdout)
        sys.exit(1)
    else:
        assert expect_err or os.path.isfile('a.out')
        folder = transformed[0:transformed.rfind('/')]
        run_cmd('rm -rf ' + folder, False)
        run_cmd('rm -f a.out', False)
