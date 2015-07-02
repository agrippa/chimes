#/usr/bin/python
import os
import sys

class Insertion(object):
    def __init__(self, line, filename, insertion):
        self.line = line
        self.filename = filename
        self.insertion = insertion
        self.matched = False


if __name__ == '__main__':
    if len(sys.argv) < 3:
        print('usage: python add_quick_versions.py input-file output-file ' +
              '-b bodies-file -d decl-file -e externs-file')
        sys.exit(1)

    input_filename = sys.argv[1]
    output_filename = sys.argv[2]

    bodies_files = []
    decl_files = []
    extern_files = []

    # Parse command line arguments
    index = 3
    while index < len(sys.argv):
        t = sys.argv[index]
        if t == '-b':
            bodies_files.append(sys.argv[index + 1])
        elif t == '-d':
            decl_files.append(sys.argv[index + 1])
        elif t == '-e':
            extern_files.append(sys.argv[index + 1])
        else:
            print('Unrecognized option "' + t + '"')
            sys.exit(1)
        index += 2

    # Parse declarations that need to be inserted in output file at specific
    # lines in specific files
    insertions = []
    for f in decl_files:
        decls_filename = f
        data = open(decls_filename, 'r')

        line = data.readline()
        while len(line) > 0:
            acc = line
            line = data.readline()
            while '-----' not in line:
                if line[0] != '#':
                    acc += line
                line = data.readline()

            tokens = acc.split()

            line = int(tokens[2])
            filename = tokens[1]
            insertion = ' '.join(tokens[3:])
            insertions.append(Insertion(line, filename, insertion))

            line = data.readline()
        data.close()

    for f in extern_files:
        fp = open(f, 'r')
        for line in fp:
            tokens = line.split()
            original_fname = tokens[0]
            varname = tokens[1]
            line_no = int(tokens[2])
            filename = tokens[3]
            decl = ' '.join(tokens[4:])

            insertions.append(Insertion(line_no, filename, decl))
        fp.close()

    inp = open(input_filename, 'r')
    output = open(output_filename, 'w')

    curr_file = ''
    curr_line = 0
    actual_line = 1
    for line in inp:
        line = line.rstrip()

        print(line)

        if len(line) >= 2 and line[0] == '#' and line[1] == ' ':
            tokens = line.split()
            curr_line = int(tokens[1]) - 1
            if len(tokens) > 2:
                acc_file = tokens[2]
                index = 3
                while acc_file[len(acc_file) - 1] != '"':
                    acc_file += tokens[index]
                    index += 1

                assert acc_file[0] == '"' and acc_file[len(acc_file) - 1] == '"'
                curr_file = acc_file[1:len(acc_file) - 1]
        else:
            acc = ''
            for i in insertions:
                if not i.matched and i.filename == curr_file and i.line == curr_line:
                    acc += i.insertion
                    # Only match once, at the highest point in the file
                    i.matched = True

            if len(acc) > 0:
                output.write(acc + '\n')

        curr_line += 1
        actual_line += 1
            
        output.write(line + '\n')

    for i in insertions:
        assert i.matched, i.filename + ' ' + str(i.line) + ' ' + i.insertion

    # Append all function bodies at the end of the output file
    for f in bodies_files:
        bodies_file = open(f, 'r')
        output.write(bodies_file.read() + '\n\n')
        bodies_file.close()

    output.close()

