import os
import os.path
import sys
from subprocess import Popen, PIPE
import sys
from os import listdir

class Test:
    def __init__(self, input_file, compare_file, info_dir, expect_err):
        self.input_file = input_file
        self.compare_file = compare_file
        self.info_dir = info_dir
        self.expect_err = expect_err

simple_stencil = Test('simple_stencil.cpp', 'simple_stencil.register.cpp',
        'simple_stencil', False)
pass_by_ref = Test('pass_by_ref.cpp', 'pass_by_ref.register.cpp', 'pass_by_ref',
        True)
tests = [simple_stencil, pass_by_ref]

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
    compile_cmd = COMPILE_SCRIPT + ' -k -i ' + CPP_EXAMPLES_DIR + '/' + t.input_file
    stdout, stderr = run_cmd(compile_cmd, t.expect_err)
    if sys.version_info >= (3, 0):
        lines = str(stdout, encoding='utf8').split('\n')
    else:
        lines = str(stdout).split('\n')
    transformed = lines[len(lines) - 2].strip()

    stdout, stderr = run_cmd('diff ' + CPP_TEST_DIR + '/' + t.compare_file + ' ' + transformed, False)

    if len(stdout.strip()) != 0:
        print('Mismatch in test for ' + t.input_file)
        print(stdout)
        sys.exit(1)
    else:
        assert t.expect_err or os.path.isfile('a.out')
        folder = transformed[0:transformed.rfind('/')]

        if t.info_dir is not None:
            info_files = [ f for f in listdir(t.info_dir) if os.path.isfile(os.path.join(t.info_dir, f)) ]
            for info_file in info_files:
                stdout, stderr = run_cmd('diff ' + t.info_dir + '/' + info_file + ' ' + folder + '/' + info_file, False)
                if len(stdout.strip()) != 0:
                    print('Mismatch in test for ' + t.input_file + ', info file ' + info_file)
                    print(stdout)
                    sys.exit(1)

        run_cmd('rm -rf ' + folder, False)
        run_cmd('rm -f a.out', False)
