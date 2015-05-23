
class StackVar(object):
    def __init__(self, name):
        self.name = name
        self.causes = []

    def add_cause(self, cause):
        self.causes.append(cause)


class Callees(object):
    def __init__(self, name, calls_unknown, creates_checkpoint, callees):
        assert calls_unknown == '0' or calls_unknown == '1'
        assert creates_checkpoint == 'DOES' or \
               creates_checkpoint == 'DOES_NOT' or creates_checkpoint == 'MAY'
        self.name = name
        self.calls_unknown = True if calls_unknown == '1' else False
        self.creates_checkpoint = creates_checkpoint
        self.callees = callees


class AliasesChanged(object):
    def __init__(self, aliases_changed):
        self.aliases_changed = aliases_changed


class ExitInfo(object):
    def __init__(self, funcname, return_alias, groups_changed):
        self.funcname = funcname
        self.return_alias = return_alias
        self.groups_changed = groups_changed


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

        callee_info = tokens[3:]
        callees = []
        index = 0
        while index < len(callee_info):
            callees.append(callee_info[index])
            index += 3

        call_tree[tokens[0]] = Callees(tokens[0], tokens[1], tokens[2], callees)

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


def get_aliases_changed(lines_filename):
    changed = []
    fp = open(lines_filename, 'r')

    for line in fp:
        tokens = line.split()
        index = 5
        end = index
        while tokens[end] != '}':
            end += 1

        aliases = tokens[index:end]
        aliases = [(t[:len(t) - 1] if t[len(t) - 1] == ',' else t) for t in aliases]
        changed.append(AliasesChanged(aliases))

    fp.close()
    return changed


def get_exit_info(exit_filename):
    exits = []
    fp = open(exit_filename, 'r')
    for line in fp:
        tokens = line.split()
        if len(tokens) > 2: # if there are aliases changed here
            exits.append(ExitInfo(tokens[0], tokens[1], tokens[2:]))
        else:
            exits.append(ExitInfo(tokens[0], tokens[1], []))
    fp.close()
    return exits


def get_npms(filename):
    result = []
    fp = open(filename, 'r')
    line = fp.readline()
    while len(line) > 0:
        result.append(line.split()[0])
        while '-----' not in line:
            line = fp.readline()
        line = fp.readline()

    fp.close()
    return result
