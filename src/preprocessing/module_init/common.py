
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
        call_tree[tokens[0]] = Callees(tokens[0], tokens[1], tokens[2], tokens[3:])

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
