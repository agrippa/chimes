#!/usr/bin/python
import os
import sys
import shutil

def replace_allocation(line, basename):
    index = line.find(basename + '_wrapper')
    while index != -1:
        comma_offset = index
        while line[comma_offset] != ',':
            comma_offset += 1
        paren_offset = comma_offset
        paren_nesting = 1
        while paren_nesting > 0:
            if line[paren_offset] == '(':
                paren_nesting += 1
            elif line[paren_offset] == ')':
                paren_nesting -= 1
            paren_offset += 1

        before_malloc = line[:index + len(basename)]
        args = line[index + len(basename + '_wrapper'):comma_offset]
        after_malloc = line[paren_offset - 1:]
        line = before_malloc + args + after_malloc

        index = line.find(basename + '_wrapper')

    return line


remove_module_init = False
remove_register_stack_vars = False
remove_mallocs = False
remove_frees = False

index = 1
while index < len(sys.argv) and sys.argv[index][0] == '-':
    if sys.argv[index] == '-m':
        remove_module_init = True
    elif sys.argv[index] == '-s':
        remove_register_stack_vars = True
    elif sys.argv[index] == '-a':
        remove_mallocs = True
    elif sys.argv[index] == '-f':
        remove_frees = True
    elif sys.argv[index] == '-h':
        print('usage: python cleaner.py [-m] [-s] [-w] filenames...')
        print('           -m: remove module init calls')
        print('           -s: remove stack registrations')
        print('           -a: remove mallocs')
        print('           -f: remove frees')
        sys.exit(1)
    else:
        sys.stderr.write('Unrecognized CLI option "' + sys.argv[index] + '"\n')
        sys.exit(1)

    index += 1

for filename in sys.argv[index:]:
    shutil.move(filename, filename + '.tmp')

    new_fp = open(filename, 'w')
    fp = open(filename + '.tmp', 'r')

    for line in fp:
        if remove_module_init and 'module_init' in line:
            break
        elif remove_register_stack_vars and 'register_stack_var' in line and \
                'extern void register_stack_var' not in line:
            continue
        elif remove_mallocs and 'extern void *malloc_wrapper' not in line and \
                'malloc_wrapper' in line:
            line = replace_allocation(line, 'malloc')
        elif remove_frees and 'extern void free_wrapper' not in line and \
                'free_wrapper' in line:
            line = replace_allocation(line, 'free')

        new_fp.write(line)

    fp.close()
    new_fp.close()
