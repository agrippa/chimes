#!/usr/bin/python
import sys
import os

def isDeclaration(line):
    types = ['int', 'float', 'double', 'long', 'char']
    line = line.strip()

    # if we have prepended a label, ignore it
    if line.find('lbl_') == 0:
        line = ''.join(line.split()[1:])

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


def getGotoInsertions(goto_file, input_contents):
    goto_fp = open(goto_file, 'r')
    insertions = {}

    for line in goto_fp:
        tokens = line.split()
        line_no = int(tokens[0])
        line_type = tokens[1]
        
        if line_type == 'START':
            assert line_no not in insertions
            lbl_id = int(tokens[2])
            insertions[line_no] = 'if (____numdebug_replaying) { goto lbl_' + str(lbl_id) + '; } '
        elif line_type == 'INTERNAL':
            if isDeclaration(input_contents[line_no - 1]):
                line_no = line_no + 1
            assert line_no not in insertions, str(line_no) + ' - ' + input_contents[line_no - 1]

            lbl_id = int(tokens[2])
            insertions[line_no] = 'if (____numdebug_replaying) { goto lbl_' + str(lbl_id) + '; } '
        elif line_type == 'FINAL':
            if isDeclaration(input_contents[line_no - 1]):
                line_no = line_no + 1
            assert line_no not in insertions

            to_insert =  'if (____numdebug_replaying) { '
            to_insert +=     'int dst = get_next_call(); '
            to_insert +=     'switch(dst) { '
            for t in tokens[2:]:
                to_insert +=         'case(' + t + '): goto lbl_' + t + '; '
            to_insert +=         'default: fprintf(stderr, "Unknown label %d at %s:%d\\n", dst, __FILE__, __LINE__); exit(1); '
            to_insert +=    '} }'
            insertions[line_no] = to_insert

    goto_fp.close()
    return insertions

def getFunctionRedirectInserts(functions_start_file):
    functions_start_fp = open(functions_start_file, 'r')

    insertions = {}

    for line in functions_start_fp:
        tokens = line.split()
        line_no = int(tokens[0])
        assert line_no not in insertions.keys()

    return insertions


def getFunctionStartInsertions(functions_start_file):
    functions_start_fp = open(functions_start_file, 'r')

    insertions = {}

    for line in functions_start_fp:
        tokens = line.split()
        line_no = int(tokens[0])
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


def getMallocInsertions(heap_info_file, input_file_contents):
    heap_info_fp = open(heap_info_file, 'r')

    for line in heap_info_fp:
        tokens = line.split()
        line_no = int(tokens[0])
        alias_group = int(tokens[1])
        file_line = input_file_contents[line_no - 1]

        # Only support single-line malloc calls for now
        fname = ''
        if 'malloc' in file_line:
            assert 'realloc' not in line and 'free' not in line
            fname = 'malloc'
        elif 'realloc' in file_line:
            assert 'malloc' not in line and 'free' not in line
            fname = 'realloc'
        elif 'free' in file_line:
            assert 'malloc' not in line and 'realloc' not in line
            fname = 'free'

        assert file_line.find(';') == len(file_line) - 1

        func_index = file_line.find(fname)
        new_line = file_line[0:func_index + len(fname)]
        file_line = file_line[func_index + len(fname):]
        open_paren_index = file_line.find('(')
        assert open_paren_index == 0
        file_line = file_line[1:]
        new_line = new_line + '_wrapper('

        args = file_line[:file_line.rfind(')')]
        new_line = new_line + args + ', ' + str(alias_group) + ');'

        input_file_contents[line_no - 1] = new_line

    heap_info_fp.close()


def getInitializationInsertions(functions_start_file):
    functions_start_fp = open(functions_start_file, 'r')

    insertions = {}

    found = False
    for line in functions_start_fp:
        tokens = line.split()
        line_no = int(tokens[0])
        fname = tokens[1]
        if fname == 'main':
            insertions[line_no] = 'init_numdebug(); '
            found = True
            break

    functions_start_fp.close()
    assert found

    return insertions


def getLabelInsertions(loc_info_file, input_file_contents):
    loc_info_fp = open(loc_info_file, 'r')

    insertions = {}

    for line in loc_info_fp:
        tokens = line.split()
        line_no = int(tokens[0])
        loc_id = int(tokens[1])
        loc_type = tokens[2]

        if loc_type == 'CALLSITE' or loc_type == 'BOTH':
            if line_no not in insertions.keys():
                insertions[line_no] = ''
            insertions[line_no] += 'calling(' + str(loc_id) + '); '
            input_file_contents[line_no - 1] = 'lbl_' + str(loc_id) + ':' + input_file_contents[line_no - 1]

        if loc_type == 'STACK_REGISTRATION' or loc_type == 'BOTH':
            if isDeclaration(input_file_contents[line_no - 1]):
                line_no = line_no + 1
            if line_no not in insertions:
                insertions[line_no] = ''
            insertions[line_no] = 'lbl_' + str(loc_id) + ': ' + insertions[line_no]

    return insertions


def getInputFileContents(input_file):
    input_file_contents = []
    input_file_fp = open(input_file, 'r')
    for line in input_file_fp:
        input_file_contents.append(line[0:len(line) - 1])
    input_file_fp.close()

    return input_file_contents


if __name__ == '__main__':
    if len(sys.argv) != 10:
        print 'usage: InsertTrackingCalls.py file.c lines.info functions.info exits.info stack.info heap.info loc.info goto.info out.c'
        sys.exit(1)

    input_file = sys.argv[1]
    lines_info_file = sys.argv[2]
    functions_start_file = sys.argv[3]
    function_exits_file = sys.argv[4]
    stack_info_file = sys.argv[5]
    heap_info_file = sys.argv[6]
    loc_info_file = sys.argv[7]
    goto_file = sys.argv[8]
    out_file = sys.argv[9]

    state_change_inserts = getStateChangeInsertions(lines_info_file)
    initialization_inserts = getInitializationInsertions(functions_start_file)
    function_start_inserts = getFunctionStartInsertions(functions_start_file)
    function_exit_inserts = getFunctionExitInsertions(function_exits_file)
    input_file_contents = getInputFileContents(input_file)
    stack_inserts = getStackInsertions(stack_info_file, input_file_contents)
    getMallocInsertions(heap_info_file, input_file_contents)
    goto_inserts = getGotoInsertions(goto_file, input_file_contents)
    stack_tracking_inserts = getLabelInsertions(loc_info_file, input_file_contents)

    all_insertions = [initialization_inserts,
            stack_tracking_inserts, function_start_inserts, stack_inserts, state_change_inserts,
            function_exit_inserts, goto_inserts]
    all_lines = set()
    for insert_list in all_insertions:
        all_lines = all_lines.union(set(insert_list.keys()))

    for line_no in reversed(sorted(list(all_lines))):
        to_insert = ''
        for insert_list in all_insertions:
            if line_no in insert_list.keys():
                to_insert = to_insert + insert_list[line_no]
        input_file_contents.insert(line_no - 1, to_insert.strip())

    # remove mixed declaration, definition to avoid jumping over variables with gotos
    line_index = 0
    for line in input_file_contents:
        if isDeclaration(line) and '=' in line:
            index = 0
            new_decl_line = ''
            var_to_initializer = {}
            while index < len(line):
                if line[index] == '=':

                    var_index = index - 1
                    while line[var_index].isspace():
                        var_index -= 1
                    while line[var_index].isalpha() or line[var_index].isdigit() or \
                            line[var_index] == '_':
                        var_index -= 1
                    var_index += 1
                    varname = line[var_index:index]

                    init_index = index + 1
                    nesting = 0
                    while nesting > 0 or (line[init_index] != ',' and line[init_index] != ';'):
                        if line[init_index] == '(':
                            nesting += 1
                        elif line[init_index] == ')':
                            nesting -= 1
                        init_index += 1
                    var_to_initializer[varname] = line[index + 1:init_index]

                    index = init_index
                else:
                    new_decl_line += line[index]
                    index += 1

            for varname in var_to_initializer.keys():
                new_decl_line = new_decl_line + varname + ' = ' + var_to_initializer[varname] + '; '
            input_file_contents[line_index] = new_decl_line
        line_index += 1

    out_file_fp = open(out_file, 'w')
    for line in input_file_contents:
        out_file_fp.write(line + '\n')
    out_file_fp.close()
