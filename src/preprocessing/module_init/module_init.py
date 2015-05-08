#!/usr/bin/python
import os
import sys
from common import StackVar, transfer, get_stack_vars


class GlobalVar(object):
    def __init__(self, name, full_type, type_size_in_bits, is_ptr, is_struct):
        self.name = name
        self.full_type = full_type
        self.type_size_in_bits = type_size_in_bits
        self.is_ptr = is_ptr
        self.is_struct = is_struct
        self.struct_type_name = None
        self.struct_ptr_fields = []

    def set_struct_type_name(self, struct_type_name):
        assert self.is_struct > 0
        self.struct_type_name = struct_type_name

    def add_struct_ptr_field(self, field_name):
        assert self.is_struct > 0
        self.struct_ptr_fields.append(field_name)


class Constant(object):
    def __init__(self, constant_id, constant_size, reference):
        self.constant_id = constant_id
        self.constant_size = constant_size
        self.reference = reference

class StructField(object):
    def __init__(self, name, ty):
        self.name = name
        self.ty = ty


class StructFields(object):
    def __init__(self, name, unnamed):
        self.name = name # string
        self.unnamed = unnamed # boolean
        self.fields = []

    def add_field(self, field_name, field_type):
        self.fields.append(StructField(field_name, field_type))


class Callees(object):
    def __init__(self, name, callees):
        self.name = name
        self.callees = callees


def parse_64bit_int(s):
    if sys.version_info >= (3, 0):
        # 3.x uses 64-bit integers only
        i = int(s)
    else:
        # 2.x separates int and long, so we need to explicitly ask for long
        i = long(s)
    return i


def get_module_id_str(module_id_filename):
    fp = open(module_id_filename, 'r')
    id_str = fp.read()
    fp.close()
    return id_str


def get_reachable_mappings(reachable_filename):
    mappings = {}
    fp = open(reachable_filename, 'r')

    for line in fp:
        tokens = line.split()
        assert len(tokens) == 2, line
        container = tokens[0]
        child = tokens[1]
        mappings[container] = child
    return mappings


def get_globals(globals_filename):
    glbls = []
    fp = open(globals_filename, 'r')
    for line in fp:
        tokens = line.split()

        mangled_name = tokens[0]

        assert tokens[1] == '"', line

        index = 2
        while index < len(tokens) and tokens[index] != '"':
            index += 1
        assert index < len(tokens), line
        assert tokens[index] == '"', line
        full_type = ' '.join(tokens[2:index])

        type_size_in_bits = int(tokens[index + 1])

        is_ptr = int(tokens[index + 2])

        is_struct = int(tokens[index + 3])

        curr = GlobalVar(mangled_name, full_type, type_size_in_bits, is_ptr,
                         is_struct)

        if is_struct > 0:
            curr.set_struct_type_name(tokens[index + 4])

            for t in tokens[index + 5:]:
                curr.add_struct_ptr_field(t)

        glbls.append(curr)

    fp.close()

    return glbls


def get_constants(constants_filename):
    constants = []
    fp = open(constants_filename, 'r')
    for line in fp:
        tokens = line.split()
        constant_id = tokens[0]
        constant_size = tokens[len(tokens) - 1]

        reference = ''.join(tokens[1:len(tokens) - 1])

        assert reference[0] == '"'
        assert reference[len(reference) - 1] == '"'

        constants.append(Constant(constant_id, constant_size, reference[1:len(reference) - 1]))

    fp.close()

    return constants


def get_structs(structs_filename):
    structs = []
    fp = open(structs_filename, 'r')

    for line in fp:
        tokens = line.split()

        assert tokens[1] == '1' or tokens[1] == '0'
        s = StructFields(tokens[0], tokens[1] == '1')

        field_info_str = ' '.join(tokens[2:])
        tokens = field_info_str.split('"')
        remove_empties = [i for i in tokens if len(i) > 0]
        assert len(remove_empties) % 2 == 0

        index = 0
        while index < len(remove_empties):
            s.add_field(remove_empties[index].strip(), remove_empties[index + 1].strip())
            index += 2

        structs.append(s)

    fp.close()

    return structs


def get_call_tree(call_tree_filename):
    call_tree = []
    fp = open(call_tree_filename, 'r')

    for line in fp:
        tokens = line.split()
        call_tree.append(Callees(tokens[0], tokens[1:]))

    fp.close()

    return call_tree


def write_global(g, func_name, var_label):
    output_file.write('    ' + func_name + '("' + var_label + '|' + g.name + '", "' +
                      g.full_type + '", (void *)(&' + g.name + '), ' +
                      str(g.type_size_in_bits / 8) + ', ' + str(g.is_ptr) +
                      ', ' + str(g.is_struct) + ', ' +
                      str(len(g.struct_ptr_fields)))
    for field_name in g.struct_ptr_fields:
        output_file.write(', (int)offsetof(struct ' + g.struct_type_name + \
                          ', ' + field_name + ')')
    output_file.write(');\n')


def write_constant(c, module_id_str):
    output_file.write('    register_constant(' + module_id_str + 'UL + ' +
                      c.constant_id + 'UL, (void *)' + c.reference + ', ' +
                      c.constant_size + ');\n')


if __name__ == '__main__':
    if len(sys.argv) != 10:
        print('usage: python module_init.py input-file output-file ' +
              'module-id-file reachable-file globals-file structs-file ' +
              'constants-file stack-var-file call-tree-file')
        sys.exit(1)

    input_filename = sys.argv[1]
    output_filename = sys.argv[2]
    module_id_filename = sys.argv[3]
    reachable_filename = sys.argv[4]
    globals_filename = sys.argv[5]
    structs_filename = sys.argv[6]
    constants_filename = sys.argv[7]
    stack_var_filename = sys.argv[8]
    call_tree_filename = sys.argv[9]

    module_id_str = get_module_id_str(module_id_filename)
    reachable = get_reachable_mappings(reachable_filename)
    glbls = get_globals(globals_filename)
    constants = get_constants(constants_filename)
    structs = get_structs(structs_filename)
    stack_vars = get_stack_vars(stack_var_filename)
    call_tree = get_call_tree(call_tree_filename)

    input_file = open(input_filename, 'r')
    output_file = open(output_filename, 'w')

    transfer(input_file, output_file)

    output_file.write('\n\nstatic int module_init() {\n')
    output_file.write('    init_module(' + module_id_str + 'UL, ' +
                      str(len(reachable)) + ', ' + str(len(call_tree)) + \
                      ', ' + str(len(stack_vars)) + ', ' + str(len(structs)))

    for k in reachable.keys():
        output_file.write(', ' + module_id_str + 'UL + ' + k + 'UL, ' +
                          module_id_str + 'UL + ' + reachable[k] + 'UL')

    for s in structs:
        output_file.write(', "' + s.name + '", ' + str(len(s.fields)))
        for field in s.fields:
            output_file.write(', "' + field.ty + '"')
            if s.unnamed:
                output_file.write(', (int)offsetof(' + s.name + ', ' + field.name + ')')
            else:
                output_file.write(', (int)offsetof(struct ' + s.name + ', ' + field.name + ')')

    for c in call_tree:
        output_file.write(', "' + c.name + '", ' + str(len(c.callees)))
        for callee in c.callees:
            output_file.write(', "' + callee + '"')

    for var in stack_vars:
        output_file.write(', "' + var.name + '", ' + str(len(var.causes)))
        for cause in var.causes:
            output_file.write(', "' + cause + '"')

    output_file.write(');\n')

    for g in glbls:
        write_global(g, 'register_global_var', 'global')

    for c in constants:
        write_constant(c, module_id_str)

    output_file.write('    return 0;\n')
    output_file.write('}\n\n')
    output_file.write('static int __libchimes_module_init = module_init();\n\n')

    input_file.close()
    output_file.close()
