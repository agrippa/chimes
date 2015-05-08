
class StackVar(object):
    def __init__(self, name):
        self.name = name
        self.causes = []

    def add_cause(self, cause):
        self.causes.append(cause)


def transfer(input_file, output_file):
    output_file.write(input_file.read())


def get_stack_vars(stack_var_filename):
    stack_vars = []
    fp = open(stack_var_filename, 'r')

    for line in fp:
        tokens = line.split()

        # If this is a stack var that we don't want to always checkpoint
        if tokens[len(tokens) - 1] != '1':
            varname = tokens[1]
            var = StackVar(varname)

            index = len(tokens) - 1
            while tokens[index] != '0':
                var.add_cause(tokens[index])
                index = index - 1

            stack_vars.append(var)

    fp.close()

    return stack_vars

