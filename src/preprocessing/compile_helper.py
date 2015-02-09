#!/usr/bin/python
import os
import sys

if __name__ == '__main__':
    if len(sys.argv) != 7:
        print('usage: compile_helper.py cmd-file env-file pre-cmds-file '
                'post-cmds-file cpp-file compiler-file')
        sys.exit(1)

    cmd_file = sys.argv[1]
    env_file = sys.argv[2]
    pre_cmd_file = sys.argv[3]
    post_cmd_file = sys.argv[4]
    cpp_file = sys.argv[5]
    compiler_file = sys.argv[6]

    env_file_fp = open(env_file, 'w')
    pre_cmd_file_fp = open(pre_cmd_file, 'w')
    post_cmd_file_fp = open(post_cmd_file, 'w')
    cpp_file_fp = open(cpp_file, 'w')
    compiler_file_fp = open(compiler_file, 'w')

    env = True
    pre = False
    post = False
    include_inserted = False
    last_line = None
    cmd_file_fp = open(cmd_file, 'r')

    for line in cmd_file_fp:
        if line.find('#$ ') == 0:
            line = line[3:]
            last_line = line

            if line.find('rm') != 0:
                if env:
                    assert env and not pre and not post
                    line = '='.join([t.strip() for t in line.split('=')])
                    env_file_fp.write(line + '\n')
                elif pre:
                    assert not env and pre and not post
                    pre_cmd_file_fp.write(line)
                else:
                    assert not env and not pre and post
                    if not include_inserted and line.find('gcc') == 0:
                        line = line[3:]
                        line = 'gcc -include${NUM_DEBUG_HOME}/src/libnumdebug/libnumdebug.h ' + line
                        include_inserted = True
                    post_cmd_file_fp.write(line)

            if line.find('PTXAS_FLAGS') == 0:
                assert env and not pre and not post
                env = False
                pre = True
            elif line.find('cudafe++') == 0:
                assert not env and pre and not post
                pre = False
                post = True

                cudafe_file = None
                tokens = line.split()
                for i in range(len(tokens)):
                    t = tokens[i]
                    if t == '--gen_c_file_name':
                        cudafe_file = tokens[i + 1]

                assert cudafe_file is not None
                cudafe_file = cudafe_file[1:]
                cudafe_file = cudafe_file[:len(cudafe_file) - 1]
                cpp_file_fp.write(cudafe_file)

    assert last_line is not None
    cpp_compiler = last_line.split()[0]
    compiler_file_fp.write(cpp_compiler)

    pre_cmd_file_fp.close()
    post_cmd_file_fp.close()
    cpp_file_fp.close()
    compiler_file_fp.close();

    cmd_file_fp.close()
