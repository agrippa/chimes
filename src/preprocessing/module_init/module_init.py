#!/usr/bin/python
import os
import sys


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

    def add_struct_ptr_field(self, offset):
        assert self.is_struct > 0
        self.struct_ptr_fields.append(offset)


class StructFields(object):
    def __init__(self, name, unnamed):
        self.name = name # string
        self.unnamed = unnamed # boolean
        self.fields = []

    def add_ptr_field(self, field):
        self.fields.append(field)


def transfer(input_file, output_file):
    output_file.write(input_file.read())


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
                curr.add_struct_ptr_field(int(t))

        glbls.append(curr)

    fp.close()

    return glbls


def get_structs(structs_filename):
    structs = []
    fp = open(structs_filename, 'r')

    for line in fp:
        tokens = line.split()

        assert tokens[1] == '1' or tokens[1] == '0'
        s = StructFields(tokens[0], tokens[1] == '1')

        for field in tokens[2:]:
            s.add_ptr_field(field)
        structs.append(s)

    fp.close()

    return structs


if __name__ == '__main__':
    if len(sys.argv) != 7:
        print('usage: python module_init.py input-file output-file ' +
              'module-id-file reachable-file globals-file structs-file')
        sys.exit(1)

    input_filename = sys.argv[1]
    output_filename = sys.argv[2]
    module_id_filename = sys.argv[3]
    reachable_filename = sys.argv[4]
    globals_filename = sys.argv[5]
    structs_filename = sys.argv[6]

    module_id_str = get_module_id_str(module_id_filename)
    reachable = get_reachable_mappings(reachable_filename)
    glbls = get_globals(globals_filename)
    structs = get_structs(structs_filename)

    input_file = open(input_filename, 'r')
    output_file = open(output_filename, 'w')

    transfer(input_file, output_file)
    output_file.write('\n\nstatic int module_init() {\n')
    output_file.write('    init_module(' + module_id_str + 'UL, ' +
                      str(len(reachable)) + ', ' + str(len(structs)))
    for k in reachable.keys():
        output_file.write(', ' + module_id_str + 'UL + ' + k + 'UL, ' +
                          module_id_str + 'UL + ' + reachable[k] + 'UL')
    for s in structs:
        output_file.write(', "' + s.name + '", ' + str(len(s.fields)))
        for field in s.fields:
            if s.unnamed:
                output_file.write(', (int)offsetof(' + s.name + ', ' + field + ')')
            else:
                output_file.write(', (int)offsetof(struct ' + s.name + ', ' + field + ')')
    output_file.write(');\n')

    for g in glbls:
        output_file.write('    register_global_var("global|' + g.name + '", "' +
                          g.full_type + '", (void *)(&' + g.name + '), ' +
                          str(g.type_size_in_bits / 8) + ', ' + str(g.is_ptr) +
                          ', ' + str(g.is_struct) + ', ' +
                          str(len(g.struct_ptr_fields)))
        for offset in g.struct_ptr_fields:
            output_file.write(', ' + str(offset))
        output_file.write(');\n')
    output_file.write('    return 0;\n')
    output_file.write('}\n\n')
    output_file.write('static int __libchimes_module_init = module_init();\n\n')

    input_file.close()
    output_file.close()
