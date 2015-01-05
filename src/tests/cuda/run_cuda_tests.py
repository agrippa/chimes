import os
import os.path
import sys
from subprocess import Popen, PIPE

tests = [('vector_sum.cu', 'vector_sum.cudafe1.register.cpp')]

NUM_DEBUG_HOME = os.environ['NUM_DEBUG_HOME']
COMPILE_SCRIPT = NUM_DEBUG_HOME + '/src/preprocessing/compile_cuda.sh'
EXAMPLES_DIR = NUM_DEBUG_HOME + '/src/examples'
CUDA_EXAMPLES_DIR = EXAMPLES_DIR + '/cuda'
CUDA_TEST_DIR = NUM_DEBUG_HOME + '/src/tests/cuda'

def run_cmd(cmd):
    cmd = cmd.split()
    p = Popen(cmd, stdin=PIPE, stdout=PIPE, stderr=PIPE, close_fds=True)
    p.wait()
    result = (p.stdout.read(), p.stderr.read())

    if p.returncode != 0:
        print('Error running "' + ' '.join(cmd) + '"')
        print()
        print(str(result[0], encoding='utf8'))
        print()
        print(str(result[1], encoding='utf8'))
        sys.exit(1)
    return result

for t in tests:
    input_file = t[0]
    compare_file = t[1]

    compile_cmd = COMPILE_SCRIPT + ' -k -i ' + CUDA_EXAMPLES_DIR + '/' + input_file
    stdout, stderr = run_cmd(compile_cmd)
    lines = str(stdout, encoding='utf8').split('\n')
    transformed = lines[len(lines) - 2].strip()

    stdout, stderr = run_cmd('diff ' + CUDA_TEST_DIR + '/' + compare_file + ' ' + transformed)

    if len(stdout.strip()) != 0:
        print('Mismatch in test for ' + input_file)
        print(stdout)
        sys.exit(1)
    else:
        assert os.path.isfile('a.out')
        folder = transformed[0:transformed.rfind('/')]
        run_cmd('rm -rf ' + folder)
        run_cmd('rm a.out')
