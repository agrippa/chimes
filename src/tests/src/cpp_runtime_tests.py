import os
import sys
from common import RuntimeTest, run_cmd, run_test, parse_argv, NUM_DEBUG_HOME, \
         print_and_abort, copy_environ, get_files_from_compiler_stdout, \
         NUM_DEBUG_REPLAY_EXIT_CODE

stack_scalar = RuntimeTest('StackScalar', 'stack_scalar.cpp', 3)
stack_struct = RuntimeTest('StackStruct', 'stack_struct.cpp', 4)
nested_stack_scalar = RuntimeTest('NestedStackScalar',
        'nested_stack_scalar.cpp', 5)
nested_stack_struct = RuntimeTest('NestedStackStruct',
        'nested_stack_struct.cpp', 0)
heap = RuntimeTest('Heap', 'heap.cpp', 42)
tests = [ stack_scalar, stack_struct, nested_stack_scalar, nested_stack_struct,
          heap ]

COMPILE_SCRIPT = NUM_DEBUG_HOME + '/src/preprocessing/compile_cpp.sh'
CPP_INPUTS_DIR = NUM_DEBUG_HOME + '/src/tests/runtime/cpp'

if __name__ == '__main__':
    config = parse_argv(sys.argv)
    if config.verbose:
        print(str(config))

    # Clean up any leftover checkpoints from previously failed tests
    numdebug_files = [f for f in os.listdir('.') if os.path.isfile(f) and
            f.startswith('numdebug.dump.')]
    for f in numdebug_files:
        print('Cleaning up existing checkpoint file ' + f)
        os.remove(f)

    for t in tests:
        # Compile the input file into an executable
        env = copy_environ()
        compile_cmd = COMPILE_SCRIPT + ' -k -i ' + os.path.join(CPP_INPUTS_DIR,
                t.input_file)
        stdout, stderr, code = run_cmd(compile_cmd, False, env=env)
        transformed, folder = get_files_from_compiler_stdout(stdout)

        if not os.path.isfile('a.out'):
            sys.stderr.write('Compilation failed to generate an executable\n')
            sys.exit(1)

        # Test the command without a checkpoint, verify it produces the expected
        # error code and one checkpoint file.
        assert 'NUMDEBUG_CHECKPOINT_FILE' not in env
        stdout, stderr, code = run_cmd('./a.out', True, env=env)
        if code != t.expected_code:
            sys.stderr.write('Test ' + t.name + ' expected exit code ' +
                    str(t.expected_code) + ' but got ' + str(code) + '\n')
            sys.stderr.write('Folder ' + folder + '\n')
            print_and_abort(stdout, stderr)

        if not os.path.isfile('numdebug.dump.0'):
            sys.stderr.write('Test run failed to produce a checkpoint file\n')
            sys.stderr.write('Folder ' + folder + '\n')
            print_and_abort(stdout, stderr)

        if os.path.isfile('numdebug.dump.1'):
            sys.stderr.write('Test run unexpectedly produced more than one ' +
                    'checkpoint file\n')
            sys.stderr.write('Folder ' + folder + '\n')
            print_and_abort(stdout, stderr)

        if config.verbose:
            print_and_abort(stdout, stderr, abort=False)

        env['NUMDEBUG_CHECKPOINT_FILE'] = 'numdebug.dump.0'
        stdout, stderr, code = run_cmd('./a.out', True, env=env)
        if code != NUM_DEBUG_REPLAY_EXIT_CODE:
            sys.stderr.write('Rerun of test ' + t.name + ' expected exit ' +
                    'code ' + str(NUM_DEBUG_REPLAY_EXIT_CODE) + ' but got ' +
                    str(code) + '\n')
            sys.stderr.write('Folder ' + folder + '\n')
            print_and_abort(stdout, stderr)

        os.remove('a.out')
        if not config.keep:
            os.remove('numdebug.dump.0')
            run_cmd('rm -rf ' + folder, False)
        print t.name + ' PASSED'
