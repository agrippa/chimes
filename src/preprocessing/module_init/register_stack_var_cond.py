#!/usr/bin/python
import os
import sys
from common import StackVar, transfer, get_stack_vars, Callees, get_call_tree, \
                   always_checkpoints


if __name__ == '__main__':
    if len(sys.argv) != 5:
        print('usage: python register_stack_var_cond.py input-file output-file ' +
              'stack-var-file call-tree-file')
        sys.exit(1)

    input_filename = sys.argv[1]
    output_filename = sys.argv[2]
    stack_var_filename = sys.argv[3]
    call_tree_filename = sys.argv[4]

    stack_vars = get_stack_vars(stack_var_filename)
    call_tree = get_call_tree(call_tree_filename)

    input_file = open(input_filename, 'r')
    output_file = open(output_filename, 'w')

    for var in stack_vars:
        if not always_checkpoints(var, call_tree):
            output_file.write('static int ____must_checkpoint_' +
                              var.name.replace('|', '_') + ' = 2;\n')

    output_file.write('\n')

    for node in call_tree.values():
        if (node.creates_checkpoint == 'MAY' or \
                node.creates_checkpoint == 'DOES_NOT') and \
                not node.calls_unknown:
            output_file.write('static int ____must_manage_' +
                node.name.replace('.', '_').replace(':', '_') + ' = 2;\n')

    output_file.write('\n')

    transfer(input_file, output_file)

    input_file.close()
    output_file.close()
