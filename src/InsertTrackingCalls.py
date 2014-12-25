#!/usr/bin/python
import sys
import os

def isDeclaration(line):
    types = ['int', 'float', 'double', 'long', 'char']
    line = line.strip()
    for t in types:
        if line.find(t) == 0:
            return True
    return False

def getStateChangeInsertions(lines_info_file):
    lines_fp = open(lines_info_file, 'r')

    lines_info = {}

    for line in lines_fp:
        tokens = line.split(':')
        line_no = int(tokens[0].strip())
        array = tokens[1]
        array = array[array.find('{') + 2:]
        array = array[:array.find('}') - 1]

        groups_str = array.split(',')

        lines_info[line_no] = []
        for g_str in groups_str:
            lines_info[line_no].append(int(g_str))

    lines_fp.close()

    lines_to_insert = {}

    for line_no in reversed(sorted(lines_info.keys())):
        to_insert = ''
        for group in lines_info[line_no]:
            to_insert = to_insert + 'alias_group_changed(' + str(group) + '); '
        assert line_no not in lines_to_insert
        lines_to_insert[line_no] = to_insert

    return lines_to_insert


def getFunctionStartInsertions(functions_start_file):
    functions_start_fp = open(functions_start_file, 'r')

    insertions = {}

    for line in functions_start_fp:
        line_no = int(line)
        assert line_no not in insertions.keys()
        insertions[line_no] = 'new_stack(); '

    functions_start_fp.close()

    return insertions


def getFunctionExitInsertions(function_exits_file):
    function_exits_fp = open(function_exits_file, 'r')

    insertions = {}

    for line in function_exits_fp:
        line_no = int(line)
        assert line_no not in insertions.keys()
        insertions[line_no] = 'rm_stack(); '

    function_exits_fp.close()

    return insertions


def getStackInsertions(stack_info_file, input_contents):
    stack_info_fp = open(stack_info_file, 'r')
    insertions = {}
    for line in stack_info_fp:
        tokens = line.split()
        line_no = int(tokens[0])
        mangled_name = tokens[1]
        type_size_in_bits = int(tokens[2])

        actual_name = mangled_name.split('____')[1]

        call = 'register_stack_var("' + mangled_name + '", &' + \
                actual_name + ', ' + str(type_size_in_bits / 8) + '); '

        if isDeclaration(input_contents[line_no - 1]):
            line_no = line_no + 1

        if line_no in insertions.keys():
            insertions[line_no] = insertions[line_no] + call
        else:
            insertions[line_no] = call

    stack_info_fp.close()
    return insertions

def getInputFileContents(input_file):
    input_file_contents = []
    input_file_fp = open(input_file, 'r')
    for line in input_file_fp:
        input_file_contents.append(line[0:len(line) - 1])
    input_file_fp.close()

    return input_file_contents


if __name__ == '__main__':
    if len(sys.argv) != 7:
        print 'usage: InsertTrackingCalls.py file.c lines.info functions.info exits.info stack.info out.c'
        sys.exit(1)

    input_file = sys.argv[1]
    lines_info_file = sys.argv[2]
    functions_start_file = sys.argv[3]
    function_exits_file = sys.argv[4]
    stack_info_file = sys.argv[5]
    out_file = sys.argv[6]

    state_change_inserts = getStateChangeInsertions(lines_info_file)
    function_start_inserts = getFunctionStartInsertions(functions_start_file)
    function_exit_inserts = getFunctionExitInsertions(function_exits_file)
    input_file_contents = getInputFileContents(input_file)
    stack_inserts = getStackInsertions(stack_info_file, input_file_contents)

    all_insertions = [function_start_inserts, stack_inserts, state_change_inserts, function_exit_inserts]
    all_lines = set()
    for insert_list in all_insertions:
        all_lines = all_lines.union(set(insert_list.keys()))

    for line_no in reversed(sorted(list(all_lines))):
        to_insert = ''
        for insert_list in all_insertions:
            if line_no in insert_list.keys():
                to_insert = to_insert + insert_list[line_no]
        input_file_contents.insert(line_no - 1, to_insert.strip())

    out_file_fp = open(out_file, 'w')
    for line in input_file_contents:
        out_file_fp.write(line + '\n')
    out_file_fp.close()
