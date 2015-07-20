class ExternNPM(object):
    def __init__(self, original_fname, varname, line_no, filename, decl):
        self.original_fname = original_fname
        self.varname = varname
        self.line_no = line_no
        self.filename = filename
        self.decl = decl


class StackVar(object):
    def __init__(self, name):
        self.name = name
        self.causes = []

    def add_cause(self, cause):
        self.causes.append(cause)


class Callees(object):
    def __init__(self, name, mangled_name, calls_unknown, creates_checkpoint, callees):
        assert calls_unknown == '0' or calls_unknown == '1'
        assert creates_checkpoint == 'DOES' or \
               creates_checkpoint == 'DOES_NOT' or creates_checkpoint == 'MAY'
        self.name = name
        self.mangled_name = mangled_name
        self.calls_unknown = True if calls_unknown == '1' else False
        self.creates_checkpoint = creates_checkpoint
        self.callees = callees


class AliasesChanged(object):
    def __init__(self, filename, line_no, col, reason, aliases_changed,
                 aliases_and_children_changed, possible_aliases_changed):
        self.filename = filename
        self.line_no = line_no
        self.col = col
        self.reason = reason
        self.aliases_changed = aliases_changed
        self.aliases_and_children_changed = aliases_and_children_changed
        self.possible_aliases_changed = possible_aliases_changed

    def __str__(self):
        s = 'state change location {\n'
        s += '  loc=' + self.filename + ':' + str(self.line_no) + ':' + \
             str(self.col) + '\n'
        s += '  reason=' + self.reason + '\n'
        s += '  aliases_changed=['
        for g in self.aliases_changed:
            s += ' ' + g
        s += ' ]\n'
        s += '  aliases_and_children_changed=['
        for g in self.aliases_and_children_changed:
            s += ' ' + g
        s += ' ]\n'
        s += '  possible_aliases_changed=[\n'
        for fname in self.possible_aliases_changed.keys():
            s += '    ' + fname + ' -> {\n'
            for g in self.possible_aliases_changed[fname]:
                s += '      ' + g + '\n'
            s += '    }\n'
        s += '  ]\n'
        s += '}\n'
        return s


class ExitInfo(object):
    def __init__(self, funcname, return_alias, groups_changed,
                 groups_and_children_changed, possible_groups_changed):
        self.funcname = funcname
        self.return_alias = return_alias
        self.groups_changed = groups_changed
        self.groups_and_children_changed = groups_and_children_changed
        self.possible_groups_changed = possible_groups_changed

    def __str__(self):
        s = 'terminator info {\n'
        s += '  funcname=' + self.funcname + '\n'
        s += '  return_alias=' + self.return_alias + '\n'
        s += '  groups_changed=' + str(self.groups_changed) + '\n'
        s += '  groups_and_children_changed=' + \
             str(self.groups_and_children_changed) + '\n'
        s += '  possible_groups_changed={\n'
        for f in self.possible_groups_changed.keys():
            s += '    ' + f + ' -> {\n'
            for g in self.possible_groups_changed[f]:
                s += '      ' + g + '\n'
            s += '    }\n'
        s += '  }\n'
        s += '}\n'
        return s


def transfer(input_file, output_file):
    output_file.write(input_file.read())


def get_stack_vars(stack_var_filename):
    stack_vars = []
    fp = open(stack_var_filename, 'r')

    for line in fp:
        tokens = line.split()

        # If this is a stack var that we don't want to always checkpoint
        if tokens[len(tokens) - 1] != '0':
            varname = tokens[1]
            var = StackVar(varname)

            index = len(tokens) - 1
            while tokens[index] != '1':
                var.add_cause(tokens[index])
                index = index - 1

            stack_vars.append(var)

    fp.close()

    return stack_vars


def get_call_tree(call_tree_filename):
    call_tree = {}
    fp = open(call_tree_filename, 'r')

    for line in fp:
        tokens = line.split()
        fname = tokens[0]
        mangled_fname = tokens[1]
        calls_unknown = tokens[2]
        creates_checkpoint = tokens[3]

        callee_info = tokens[4:]
        callees = []
        index = 0
        while index < len(callee_info):
            callees.append(callee_info[index])
            index += 3

        call_tree[fname] = Callees(fname, mangled_fname, calls_unknown,
                                   creates_checkpoint, callees)

    fp.close()

    return call_tree


# This mirrors the logic in DesiredInsertions.always_checkpoints
def always_checkpoints(alloc, call_tree):
    for cause in alloc.causes:
        if cause == "checkpoint":
            return True

        if cause not in call_tree.keys():
            continue

        if call_tree[cause] == 'DOES':
            return True

    return False


def get_alias_loc_var(id):
    return ('____alias_loc_id_' + str(id))


def count_alias_sets(lines_filename):
    count = 0
    fp = open(lines_filename, 'r')
    for line in fp:
        count += 1
    fp.close()
    return count


def filter_commas(aliases):
    return [(t[:len(t) - 1] if t[len(t) - 1] == ',' else t) for t in aliases]


def get_aliases_changed(lines_filename):
    changed = []
    fp = open(lines_filename, 'r')

    for line in fp:
        tokens = line.split()
        filename = tokens[0]
        line_no = int(tokens[1])
        col = int(tokens[2])

        index = 5
        end = index
        while tokens[end] != '}':
            end += 1

        aliases = tokens[index:end]
        aliases = filter_commas(aliases)
        index = end

        index += 1
        assert tokens[index] == '{'
        index += 1
        end = index
        while tokens[end] != '}':
            end += 1

        if end == index:
            aliases_and_children = []
        else:
            aliases_and_children = tokens[index:end]
            aliases_and_children = filter_commas(aliases)
        index = end

        index += 1
        reason = tokens[index]

        index += 1 # skip past open brace
        assert tokens[index] == '{'
        index += 1

        if tokens[index] == '}':
            changed.append(AliasesChanged(filename, line_no, col, reason,
                                          aliases, aliases_and_children, {}))
        else:
            all_possible_aliases = {}
            while True:
                fname = tokens[index]
                assert tokens[index + 1] == '{'
                index += 2
                end = index
                while tokens[end][0] != '}':
                    end += 1
                possible_aliases = tokens[index:end]
                possible_aliases = filter_commas(possible_aliases)
               
                assert fname not in all_possible_aliases
                all_possible_aliases[fname] = possible_aliases

                index = end + 1
                if tokens[index] == '}':
                    break
            changed.append(AliasesChanged(filename, line_no, col, reason,
                                          aliases, aliases_and_children, all_possible_aliases))

    fp.close()

#     for c in changed:
#         print(str(c))
#         print()

    return changed


def get_exit_info(exit_filename):
    exits = []
    fp = open(exit_filename, 'r')
    for line in fp:
        tokens = line.split()
        funcname = tokens[0]
        return_alias_str = tokens[1]

        # Read in the groups that have been changed at this point
        n_changed = int(tokens[2])
        changed = []
        index = 3
        while n_changed > 0:
            changed.append(tokens[index])
            n_changed -= 1
            index += 1

        # Read in the groups that have been passed to function pointers and
        # therefore must be marked changed (along with all children).
        n_changed_and_children = int(tokens[index])
        changed_and_children = []
        while n_changed_and_children > 0:
            changed_and_children.append(tokens[index])
            n_changed_and_children -= 1
            index += 1

        # Read in the possibly changed groups, conditioned on external functions
        # being defined at runtime.
        n_possibly_changed = int(tokens[index])
        index += 1
        possibly_changed = {}
        while n_possibly_changed > 0:
            fname = tokens[index]
            index += 1
            n_nested = int(tokens[index])
            index += 1

            nested_changes = []
            while n_nested > 0:
                nested_changes.append(tokens[index])
                n_nested -= 1
                index += 1

            assert fname not in possibly_changed
            possibly_changed[fname] = nested_changes
            n_possibly_changed -= 1

        exits.append(ExitInfo(funcname, return_alias_str, changed,
                              changed_and_children, possibly_changed))
    fp.close()

#     for e in exits:
#         print(str(e))
#         print()

    return exits


def get_npms(filename):
    # mapping from function name to if it is static
    result = {}
    fp = open(filename, 'r')
    line = fp.readline()
    while len(line) > 0:
        tokens = line.split()

        assert tokens[0] not in result.keys()
        assert tokens[3] == '0' or tokens[3] == '1'
        result[tokens[0]] = (tokens[3] == '1')

        while '-----' not in line:
            line = fp.readline()
        line = fp.readline()

    fp.close()
    return result


def get_externs(filename):
    result = []
    fp = open(filename, 'r')
    for line in fp:
        tokens = line.split()
        result.append(ExternNPM(tokens[0], tokens[1], int(tokens[2]),
                                tokens[3], ' '.join(tokens[4:])))
    fp.close()
    return result



