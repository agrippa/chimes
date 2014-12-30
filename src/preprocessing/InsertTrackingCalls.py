#!/usr/bin/python
import sys
import os

def isDeclaration(line, declarations):
    return line in declarations.keys()

def getDeclarations(decl_file):
    line_to_decl = {}
    decl_to_line = {}

    decl_fp = open(decl_file, 'r')
    for line in decl_fp:
        tokens = line.split()
        line_no = int(tokens[0])
        varname = tokens[1]

        if line_no not in line_to_decl:
            line_to_decl[line_no] = []

        assert varname not in line_to_decl[line_no]
        line_to_decl[line_no].append(varname)

        assert varname not in decl_to_line
        decl_to_line[varname] = line_no
    decl_fp.close()
    return (line_to_decl, decl_to_line)


def getStructDict(struct_file):
    struct_fp = open(struct_file, 'r')
    d = {}

    for line in struct_fp:
        tokens = line.split()
        struct_name = tokens[0]

        assert struct_name not in d.keys()
        d[struct_name] = []
        for field in tokens[1:]:
            d[struct_name].append(field)

    struct_fp.close()
    return d


def isInt(s):
    try:
        int(s)
        return True
    except ValueError:
        return False


def buildLineNumberToIndexMapping(input_file_contents, input_file, original_file):
    d = {}
    require_remapping = (input_file != original_file)
    original_file = '"' + original_file + '"'

    if not require_remapping:
        for line_no in range(1, len(input_file_contents) + 1):
            d[line_no] = line_no - 1
    else:
        curr_file = ''
        curr_line = 1
        index = 0

        for line in input_file_contents:
            tokens = line.split()

            if len(tokens) == 3 and tokens[0] == '#' and isInt(tokens[1]):
                curr_file = tokens[2]
                curr_line = int(tokens[1])
            elif len(tokens) == 2 and tokens[0] == '#' and isInt(tokens[1]):
                curr_line = int(tokens[1])
            else:
                if curr_file == original_file:
                    if curr_line not in d.keys():
                    # # Line no. 1 seems to be a special case and may appear multiple times. We'll just take the last one
                    # assert curr_line == 1 or curr_line not in d.keys(), 'line no = ' + str(curr_line) + \
                    #     ' has mapping ' + str(d[curr_line]) + ', trying to insert ' + \
                    #     'mapping to ' + str(index)
                        d[curr_line] = index
                        curr_line += 1
            index += 1

    return d


def splitVariableDeclarations(input_file_contents, declarations, line_no_to_index):
    # remove mixed declaration, definition to avoid jumping over variables with gotos

    # Make sure to only iterate over real source lines
    for line_no in line_no_to_index.keys():
        line_index = line_no_to_index[line_no]
        line = input_file_contents[line_index]

        if isDeclaration(line_no, declarations) and '=' in line:
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


def getStateChangeInsertions(lines_info_file, original_file):
    lines_fp = open(lines_info_file, 'r')

    lines_info = {}

    for line in lines_fp:
        tokens = line.split(':')
        filename = tokens[0]
        line_no = int(tokens[1].strip())

        if filename != original_file:
            continue

        array = tokens[2]
        array = array[array.find('{') + 2:]
        array = array[:array.find('}') - 1]

        groups_str = array.split(',')

        lines_info[line_no] = []
        for g_str in groups_str:
            lines_info[line_no].append(int(g_str))

    lines_fp.close()

    lines_to_insert = {}

    for line_no in reversed(sorted(lines_info.keys())):
        to_insert = 'alias_group_changed(' + str(len(lines_info[line_no]))

        for group in lines_info[line_no]:
            to_insert = to_insert + ', ' + str(group)
        to_insert = to_insert + '); '
        assert line_no not in lines_to_insert
        lines_to_insert[line_no] = to_insert

    return lines_to_insert


def getGotoInsertions(goto_file, declarations, original_file):
    goto_fp = open(goto_file, 'r')
    insertions = {}

    for line in goto_fp:
        tokens = line.split()
        source_filename = tokens[0]
        line_no = int(tokens[1])
        line_type = tokens[2]

        if source_filename != original_file:
            continue
        
        if line_type == 'START':
            assert line_no not in insertions
            lbl_id = int(tokens[3])
            # TODO find actual start of function body, don't just assume it is the first line + 1
            insertions[line_no + 1] = 'if (____numdebug_replaying) { goto lbl_' + str(lbl_id) + '; } '
        elif line_type == 'INTERNAL':
            if isDeclaration(line_no, declarations):
                line_no = line_no + 1
            assert line_no not in insertions, str(line_no)

            lbl_id = int(tokens[3])
            insertions[line_no] = 'if (____numdebug_replaying) { goto lbl_' + str(lbl_id) + '; } '
        elif line_type == 'FINAL':
            if isDeclaration(line_no, declarations):
                line_no = line_no + 1
            assert line_no not in insertions

            to_insert =  'if (____numdebug_replaying) { '
            to_insert +=     'int dst = get_next_call(); '
            to_insert +=     'switch(dst) { '
            for t in tokens[3:]:
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
        # TODO find actual start of function body, don't just assume it is the first line + 1
        insertions[line_no + 1] = 'new_stack(); '

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


def getStackInsertions(stack_info_file, line_to_decl, decl_to_line, original_file):
    stack_info_fp = open(stack_info_file, 'r')
    insertions = {}
    for line in stack_info_fp:
        tokens = line.split()

        filename = tokens[0]
        if filename != original_file:
            continue

        mangled_name = tokens[1]

        if not mangled_name in decl_to_line.keys():
            continue

        line_no = decl_to_line[mangled_name]
        open_quotes_index = 2
        close_quotes_index = 3
        while tokens[close_quotes_index] != '"':
            close_quotes_index += 1
        full_type = ''.join(tokens[open_quotes_index + 1:close_quotes_index])

        type_size_in_bits = int(tokens[close_quotes_index + 1])
        is_ptr = int(tokens[close_quotes_index + 2])
        is_struct = int(tokens[close_quotes_index + 3])
        struct_type_name = None
        ptr_fields = []
        if is_struct > 0:
            struct_type_name = tokens[close_quotes_index + 4]
            ptr_fields = tokens[close_quotes_index + 5:]

        actual_name = mangled_name.split('|')[1]

        call =  'register_stack_var("' + mangled_name + '", "' + full_type + '", &' + \
                actual_name + ', ' + str(type_size_in_bits / 8) + ', ' + \
                str(is_ptr) + ', ' + str(is_struct) + ', ' + str(len(ptr_fields))
        for field in ptr_fields:
            call += ', (int)offsetof(struct ' + struct_type_name + ', ' + field + ')'
        call += '); '

        if isDeclaration(line_no, line_to_decl):
            line_no = line_no + 1

        if line_no in insertions.keys():
            insertions[line_no] = insertions[line_no] + call
        else:
            insertions[line_no] = call

    stack_info_fp.close()
    return insertions


# WARNING: Modifies the contents of input_file_contents inline, so must be made aware of line numbers
def getMallocInsertions(heap_info_file, input_file_contents, line_no_to_index):
    heap_info_fp = open(heap_info_file, 'r')

    for line in heap_info_fp:
        tokens = line.split()
        line_no = int(tokens[0])
        alias_group = int(tokens[1])
        fname = tokens[2]
        have_type_info = len(tokens) > 3
      
        assert line_no in line_no_to_index.keys(), str(line_no)
        line_index = line_no_to_index[line_no]
        file_line = input_file_contents[line_index].strip()

        # Only support single-line memory management calls for now
        assert fname in file_line, file_line
        if fname == 'malloc':
            assert 'realloc' not in line and 'free' not in line
        elif fname == 'realloc':
            assert 'malloc' not in line and 'free' not in line
        elif fname == 'free':
            assert 'malloc' not in line and 'realloc' not in line

        assert file_line.find(';') == len(file_line) - 1, \
            '"' + fname + '" "' + file_line + '"'

        func_index = file_line.find(fname)
        new_line = file_line[0:func_index + len(fname)]
        file_line = file_line[func_index + len(fname):]
        open_paren_index = file_line.find('(')
        assert open_paren_index == 0
        file_line = file_line[1:]
        new_line = new_line + '_wrapper('

        args = file_line[:file_line.rfind(')')]

        new_line = new_line + args + ', ' + str(alias_group)

        if fname == 'malloc':
            # TODO pass in extra type info
            if have_type_info:
                is_elem_ptr = int(tokens[3])
                is_elem_struct = int(tokens[4])
                new_line = new_line + ', 1, ' + str(is_elem_ptr) + ', ' + \
                        str(is_elem_struct)
                if is_elem_struct > 0:
                    struct_type_name = tokens[5]
                    struct_field_ptrs = tokens[6:]
                    new_line = new_line + ', (int)sizeof(struct ' + \
                        struct_type_name + '), ' + str(len(struct_field_ptrs))
                    for field in struct_field_ptrs:
                        new_line = new_line + ', (int)offsetof(struct ' + \
                            struct_type_name + ', ' + field + ')'
                new_line = new_line + ');'
            else:
                new_line = new_line + ', 0);'
        else:
            new_line = new_line + ');'

        input_file_contents[line_index] = new_line

    heap_info_fp.close()


def getInitializationInsertions(functions_start_file, structs):
    functions_start_fp = open(functions_start_file, 'r')

    insertions = {}

    found = False
    for line in functions_start_fp:
        tokens = line.split()
        line_no = int(tokens[0])
        fname = tokens[1]

        if fname == 'main':
            new_line = 'init_numdebug(' + str(len(structs))
            for struct_name in structs.keys():
                new_line = new_line + ', "' + struct_name + '", ' + str(len(structs[struct_name]))
                for field_name in structs[struct_name]:
                    new_line = new_line + ', (int)offsetof(struct ' + struct_name + ', ' + field_name + ')'
            new_line = new_line + '); '
            # TODO find actual start of function body, don't just assume it is the first line + 1
            insertions[line_no + 1] = new_line
            found = True
            break

    functions_start_fp.close()
    assert found

    return insertions


def getLabelInsertions(loc_info_file, input_file_contents, declarations, line_no_to_index, original_file):
    loc_info_fp = open(loc_info_file, 'r')

    insertions = {}

    for line in loc_info_fp:
        tokens = line.split()
        line_no = int(tokens[0])
        loc_id = int(tokens[1])
        loc_type = tokens[2]
        source_filename = tokens[3]

        if source_filename != original_file:
            continue;

        if loc_type == 'CALLSITE':
            if line_no not in insertions.keys():
                insertions[line_no] = ''
            insertions[line_no] += 'calling(' + str(loc_id) + '); '

            assert line_no in line_no_to_index.keys(), str(line_no)
            line_index = line_no_to_index[line_no]
            input_file_contents[line_index] = 'lbl_' + str(loc_id) + ':' + input_file_contents[line_index]

        if loc_type == 'STACK_REGISTRATION':
            if isDeclaration(line_no, declarations):
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
    if len(sys.argv) != 13:
        print 'usage: InsertTrackingCalls.py file.c original.c/cu lines.info functions.info exits.info stack.info heap.info loc.info goto.info struct.info decl.info out.c'
        sys.exit(1)

    input_file = sys.argv[1]
    original_file = sys.argv[2]
    lines_info_file = sys.argv[3]
    functions_start_file = sys.argv[4]
    function_exits_file = sys.argv[5]
    stack_info_file = sys.argv[6]
    heap_info_file = sys.argv[7]
    loc_info_file = sys.argv[8]
    goto_file = sys.argv[9]
    struct_file = sys.argv[10]
    decl_file = sys.argv[11]
    out_file = sys.argv[12]

    input_file_contents = getInputFileContents(input_file)
    line_no_to_index = buildLineNumberToIndexMapping(input_file_contents, input_file, original_file)
    structs = getStructDict(struct_file)
    line_to_decl, decl_to_line = getDeclarations(decl_file)

    state_change_inserts = getStateChangeInsertions(lines_info_file, original_file)
    initialization_inserts = getInitializationInsertions(functions_start_file, structs)
    function_start_inserts = getFunctionStartInsertions(functions_start_file)
    function_exit_inserts = getFunctionExitInsertions(function_exits_file)
    stack_inserts = getStackInsertions(stack_info_file, line_to_decl,
            decl_to_line, original_file)
    # WARNING: Modifies the contents of input_file_contents inline, so must be made aware of line numbers
    getMallocInsertions(heap_info_file, input_file_contents, line_no_to_index)
    goto_inserts = getGotoInsertions(goto_file, line_to_decl, original_file)
    # WARNING: Modifies the contents of input_file_contents inline, so must be made aware of line numbers
    stack_tracking_inserts = getLabelInsertions(loc_info_file, input_file_contents, line_to_decl, line_no_to_index, original_file)

    # WARNING: Modifies the contents of input_file_contents inline, so must be made aware of line numbers
    splitVariableDeclarations(input_file_contents, line_to_decl, line_no_to_index)

    all_insertions = [initialization_inserts,
            stack_tracking_inserts, function_start_inserts, stack_inserts, state_change_inserts,
            function_exit_inserts, goto_inserts]
    all_lines = set()
    for insert_list in all_insertions:
        all_lines = all_lines.union(set(insert_list.keys()))

    # WARNING: Modifies the contents of input_file_contents inline, so must be made aware of line numbers
    for line_no in reversed(sorted(list(all_lines))):
        to_insert = ''
        for insert_list in all_insertions:
            if line_no in insert_list.keys():
                to_insert = to_insert + insert_list[line_no]

        if line_no not in line_no_to_index:
            copy_line_no = line_no
            while copy_line_no not in line_no_to_index and copy_line_no >= 0:
                copy_line_no -= 1

            assert(copy_line_no >= 0)
            line_index = line_no_to_index[copy_line_no] + 1
            print 'Missing a precise line index for line number ' + str(line_no)
        else:
            line_index = line_no_to_index[line_no]

        # assert line_no in line_no_to_index, 'line_no = ' + str(line_no) + ', "' + to_insert.strip() + '"'
        # line_index = line_no_to_index[line_no]
        input_file_contents.insert(line_index, to_insert.strip())

    out_file_fp = open(out_file, 'w')
    for line in input_file_contents:
        out_file_fp.write(line + '\n')
    out_file_fp.close()
