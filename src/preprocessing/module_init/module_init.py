#!/usr/bin/python
import os
import sys
from common import StackVar, transfer, get_stack_vars, Callees, get_call_tree, \
                   always_checkpoints, get_exit_info, get_alias_loc_var, \
                   get_aliases_changed, get_npms


class ModuleInitConfig(object):
    def __init__(self):
        self.input_filename = None
        self.output_filename = None
        self.module_id_filename = None
        self.reachable_filename = None
        self.globals_filename = None
        self.structs_filename = None
        self.constants_filename = None
        self.stack_var_filename = None
        self.call_tree_filename = None
        self.lines_filename = None
        self.exits_filename = None
        self.func_filename = None
        self.externs_filename = None
        self.npm_filename = None
        self.calls_filename = None
        self.locs_filename = None

    def check(self):
        if self.input_filename is None:
            print('Missing input filename')
            usage()
        if self.output_filename is None:
            print('Missing output filename')
            usage()
        if self.module_id_filename is None:
            print('Missing module id filename')
            usage()
        if self.reachable_filename is None:
            print('Missing reachable filename')
            usage()
        if self.globals_filename is None:
            print('Missing globals filename')
            usage()
        if self.structs_filename is None:
            print('Missing structs filename')
            usage()
        if self.constants_filename is None:
            print('Missing constants filename')
            usage()
        if self.stack_var_filename is None:
            print('Missing stack filename')
            usage()
        if self.call_tree_filename is None:
            print('Missing call tree filename')
            usage()
        if self.lines_filename is None:
            print('Missing lines filename')
            usage()
        if self.exits_filename is None:
            print('Missing exits filename')
            usage()
        if self.func_filename is None:
            print('Missing function filename')
            usage()
        if self.externs_filename is None:
            print('Missing externs filename')
            usage()
        if self.npm_filename is None:
            print('Missing NPM filename')
            usage()
        if self.calls_filename is None:
            print('Missing calls filename')
            usage()
        if self.locs_filename is None:
            print('Missing locs filename')
            usage()


class ChangeLocVars(object):
    def __init__(self, fname):
        self.fname = fname
        self.varnames = []

    def add_var(self, v):
        self.varnames.append(v)

    def size(self):
        return len(self.varnames)


class Call(object):
    def __init__(self, callee_name, caller_name, line_no, col, parent_return_alias):
        self.callee_name = callee_name
        self.caller_name = caller_name
        self.line_no = line_no
        self.col = col
        self.parent_return_alias_str = parent_return_alias
        self.param_aliases_str = []

    def add_param_alias(self, a):
        self.param_aliases_str.append(a)


class ExternNPM(object):
    def __init__(self, original_fname, varname, line_no, filename, decl):
        self.original_fname = original_fname
        self.varname = varname
        self.line_no = line_no
        self.filename = filename
        self.decl = decl


class FunctionInfo(object):
    def __init__(self, name):
        self.name = name
        self.arg_aliases_str = []

    def add_arg_alias(self, a):
        self.arg_aliases_str.append(a)


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


def parse_64bit_int(s):
    if sys.version_info >= (3, 0):
        # 3.x uses 64-bit integers only
        i = int(s)
    else:
        # 2.x separates int and long, so we need to explicitly ask for long
        i = long(s)
    return i


def get_externs(filename):
    result = []
    fp = open(filename, 'r')
    for line in fp:
        tokens = line.split()
        result.append(ExternNPM(tokens[0], tokens[1], int(tokens[2]),
                                tokens[3], ' '.join(tokens[4:])))
    fp.close()
    return result


def get_change_locs(locs_filename):
    locs = {}
    fp = open(locs_filename, 'r')
    for line in fp:
        tokens = line.split()

        loc = ChangeLocVars(tokens[0])
        for t in tokens[1:]:
            loc.add_var(t)

        assert tokens[0] not in locs
        locs[tokens[0]] = loc

    fp.close()

    return locs

def get_callsites(call_filename):
    callsites = {}
    fp = open(call_filename, 'r')
    for line in fp:
        tokens = line.split()
        callee_name = tokens[0]
        caller_name = tokens[1]
        line_no = int(tokens[2])
        col = int(tokens[3])
        return_alias_str = tokens[4]

        site = Call(callee_name, caller_name, line_no, col, return_alias_str)

        for t in tokens[5:]:
            site.add_param_alias(t)

        if caller_name not in callsites.keys():
            callsites[caller_name] = []
        callsites[caller_name].append(site)
    fp.close()

    return callsites


def get_functions(func_filename):
    functions = {}
    fp = open(func_filename, 'r')

    invalid_cuda_functions = ['dim3::dim3', 'cudaError']

    for line in fp:
        tokens = line.split()
        if tokens[0] not in invalid_cuda_functions:
            assert tokens[0] not in functions

            f = FunctionInfo(tokens[0])
            for t in tokens[1:]:
                f.add_arg_alias(t)
            functions[tokens[0]] = f

    fp.close()
    return functions


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


def get_alias_str(module_id_str, alias_str):
    if alias_str == '0':
        return '0UL'
    else:
        return '(' + module_id_str + 'UL + ' + alias_str + 'UL)'


def find_in_exits(fname, exits):
    for e in exits:
        if e.funcname == fname:
            return e
    assert False, fname


def usage():
    print('usage: python module_init.py ' +
          '-i input-file ' +
          '-o output-file ' + 
          '-m module-id-file ' + 
          '-r reachable-file ' + 
          '-g globals-file ' +
          '-s structs-file ' +
          '-c constants-file ' +
          '-v stack-vars-file ' +
          '-t call-tree-file ' +
          '-l lines-file ' +
          '-x exits-file ' +
          '-f func-file ' +
          '-e externs-file ' +
          '-n npm-file ' +
          '-d calls-filename ' + 
          '-h locs-filename ')
    sys.exit(1)


def configure(cfg, argv):
    index = 0
    while index < len(argv):
        t = argv[index]
        if t == '-i':
            cfg.input_filename = argv[index + 1]
        elif t == '-o':
            cfg.output_filename = argv[index + 1]
        elif t == '-m':
            cfg.module_id_filename = argv[index + 1]
        elif t == '-r':
            cfg.reachable_filename = argv[index + 1]
        elif t == '-g':
            cfg.globals_filename = argv[index + 1]
        elif t == '-s':
            cfg.structs_filename = argv[index + 1]
        elif t == '-c':
            cfg.constants_filename = argv[index + 1]
        elif t == '-v':
            cfg.stack_var_filename = argv[index + 1]
        elif t == '-t':
            cfg.call_tree_filename = argv[index + 1]
        elif t == '-l':
            cfg.lines_filename = argv[index + 1]
        elif t == '-x':
            cfg.exits_filename = argv[index + 1]
        elif t == '-f':
            cfg.func_filename = argv[index + 1]
        elif t == '-e':
            cfg.externs_filename = argv[index + 1]
        elif t == '-n':
            cfg.npm_filename = argv[index + 1]
        elif t == '-d':
            cfg.calls_filename = argv[index + 1]
        elif t == '-h':
            cfg.locs_filename = argv[index + 1]
        else:
            print('Unrecognized command line argument "' + t + '"')
            sys.exit(1)

        index += 2


if __name__ == '__main__':
    cfg = ModuleInitConfig()
    configure(cfg, sys.argv[1:])
    cfg.check()

    module_id_str = get_module_id_str(cfg.module_id_filename)
    reachable = get_reachable_mappings(cfg.reachable_filename)
    glbls = get_globals(cfg.globals_filename)
    constants = get_constants(cfg.constants_filename)
    structs = get_structs(cfg.structs_filename)
    stack_vars = get_stack_vars(cfg.stack_var_filename)
    call_tree = get_call_tree(cfg.call_tree_filename)
    changed = get_aliases_changed(cfg.lines_filename)
    exits = get_exit_info(cfg.exits_filename)
    functions = get_functions(cfg.func_filename)
    externs = get_externs(cfg.externs_filename)
    defined_npms = get_npms(cfg.npm_filename)
    callsites = get_callsites(cfg.calls_filename)
    change_loc_vars = get_change_locs(cfg.locs_filename)

    n_change_locs = len(changed)
    for e in exits:
        if len(e.groups_changed) > 0:
            n_change_locs += 1

    input_file = open(cfg.input_filename, 'r')
    output_file = open(cfg.output_filename, 'w')

    transfer(input_file, output_file)

    count_conditionally_checkpointable_vars= 0
    for var in stack_vars:
        if not always_checkpoints(var, call_tree):
            count_conditionally_checkpointable_vars += 1


    output_file.write('\n\nstatic int module_init() {\n')
    output_file.write('    init_module(' + module_id_str + 'UL, ' +
                      str(len(reachable)) + ', ' +
                      str(len(call_tree)) + ', ' +
                      str(count_conditionally_checkpointable_vars) + ', ' +
                      str(n_change_locs) + ', ' +
                      str(len(defined_npms)) + ', ' +
                      str(len(externs)) + ', ' +
                      str(len(defined_npms)) + ', ' +
                      str(len(structs)))

    for k in reachable.keys():
        output_file.write(', ' + get_alias_str(module_id_str, k) + ', ' +
                          get_alias_str(module_id_str, reachable[k]))

    for s in structs:
        output_file.write(', "' + s.name + '", ' + str(len(s.fields)))
        for field in s.fields:
            output_file.write(', "' + field.ty + '"')
            if s.unnamed:
                output_file.write(', (int)offsetof(' + s.name + ', ' + field.name + ')')
            else:
                output_file.write(', (int)offsetof(struct ' + s.name + ', ' + field.name + ')')

    for c in call_tree.values():
        output_file.write(', "' + c.name + '", ' + str(len(c.callees)))
        for callee in c.callees:
            output_file.write(', "' + callee + '"')

    for var in stack_vars:
        if not always_checkpoints(var, call_tree):
            output_file.write(', "' + var.name + '", ' + str(len(var.causes)))
            for cause in var.causes:
                output_file.write(', "' + cause + '"')

    # We must traverse changed before exits to ensure consistency in the
    # location IDs generated here with the ones generated by the clang pass.
    count = 0
    for change_set in changed:
        output_file.write(', &' + get_alias_loc_var(count) +
                          ', (unsigned)' + str(len(change_set.aliases_changed)))
        for alias in change_set.aliases_changed:
            output_file.write(', ' + get_alias_str(module_id_str, alias))
        count += 1

    for ex in exits:
        if len(ex.groups_changed) > 0:
            output_file.write(', &' + get_alias_loc_var(count) +
                              ', (unsigned)' + str(len(ex.groups_changed)))
            for alias in ex.groups_changed:
                output_file.write(', ' + get_alias_str(module_id_str, alias))
            count += 1

    for fname in defined_npms:

        assert fname in functions, fname
        func_info = functions[fname]
        func_exit_info = find_in_exits(fname, exits)

        output_file.write(', "' + fname + '", (void *)(' + fname + '_npm)')

        # If no assignments are made in a function (e.g. if it's simply a return
        # statement) it may not have any change locations.
        if fname not in change_loc_vars:
            output_file.write(', 0')
        else:
            locs = change_loc_vars[fname]
            output_file.write(', ' + str(locs.size()))
            for var in locs.varnames:
                output_file.write(', &' + var)

        output_file.write(', ' + str(len(func_info.arg_aliases_str)))
        for alias in func_info.arg_aliases_str:
            output_file.write(', ' + get_alias_str(module_id_str, alias))
        output_file.write(', ' + get_alias_str(module_id_str,
                                               func_exit_info.return_alias))

        # If there is no entry in callsites for fname, it is because fname calls
        # no functions.
        if fname not in callsites:
            output_file.write(', 0')
        else:
            calls = callsites[fname]
            output_file.write(', ' + str(len(calls)))
            for c in calls:
                output_file.write(', "' + c.callee_name + '", ' +
                                  str(len(c.param_aliases_str)))
                for arg_alias in c.param_aliases_str:
                    output_file.write(', ' + get_alias_str(module_id_str,
                                                           arg_alias))
                output_file.write(', ' + get_alias_str(module_id_str,
                                                       c.parent_return_alias_str))


    for ex in externs:
        output_file.write(', "' + ex.original_fname + '", (void **)&(' + ex.varname + ')')

    for npm in defined_npms:
        output_file.write(', "' + npm + '", &(____chimes_does_checkpoint_' +
                          npm + '_npm)')

    output_file.write(');\n')

    for g in glbls:
        write_global(g, 'register_global_var', 'global')

    for c in constants:
        write_constant(c, module_id_str)

    output_file.write('    register_functions(' + str(len(functions)) + ', "' +
                      cfg.input_filename + '"')
    for f in functions.keys():
        output_file.write(', "' + f + '", &' + f)
    output_file.write(');\n')

    output_file.write('    return 0;\n')
    output_file.write('}\n\n')
    output_file.write('static int __libchimes_module_init = module_init();\n\n')

    input_file.close()
    output_file.close()
