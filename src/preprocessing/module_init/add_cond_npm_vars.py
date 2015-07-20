#!/usr/bin/python
import os
import sys
from common import transfer, get_npms

if __name__ == '__main__':
    if len(sys.argv) != 5:
        print('usage: python add_cond_npm_vars.py input-file output-file npm-file externs-file')
        sys.exit(1)

    input_filename = sys.argv[1]
    output_filename = sys.argv[2]
    npm_filename = sys.argv[3]
    externs_filename = sys.argv[4]

    npms = get_npms(npm_filename)

    input_file = open(input_filename, 'r')
    output_file = open(output_filename, 'w')

    for npm in npms.keys():
        output_file.write('static int ____chimes_does_checkpoint_' +
                          npm.strip() + '_npm = 1;\n')

    already_handled = []
    fp = open(externs_filename, 'r')
    for line in fp:
        # First token is the original function name, the rest of this line is a
        # function pointer declaration
        tokens = line.split()
        if tokens[0] not in npms.keys() and tokens[0] not in already_handled:
            output_file.write('static int ____chimes_does_checkpoint_' +
                              tokens[0] + '_npm = 1;\n')
            already_handled.append(tokens[0])
    fp.close()

    output_file.write('\n')

    transfer(input_file, output_file)

    input_file.close()
    output_file.close()
