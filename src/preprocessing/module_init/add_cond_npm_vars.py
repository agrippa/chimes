#!/usr/bin/python
import os
import sys
from common import transfer, get_npms

if __name__ == '__main__':
    if len(sys.argv) != 4:
        print('usage: python add_cond_npm_vars.py input-file output-file npm-file')
        sys.exit(1)

    input_filename = sys.argv[1]
    output_filename = sys.argv[2]
    npm_filename = sys.argv[3]

    npms = get_npms(npm_filename)

    input_file = open(input_filename, 'r')
    output_file = open(output_filename, 'w')

    for npm in npms:
        output_file.write('int ____chimes_does_checkpoint_' + npm + '_npm = 1;\n')
    output_file.write('\n')

    transfer(input_file, output_file)

    input_file.close()
    output_file.close()
