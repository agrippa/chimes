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
    if len(sys.argv) != 5:
        print('usage: python add_quick_versions.py input-file output-file ' +
              'bodies-file decl-file')
        sys.exit(1)

    input_filename = sys.argv[1]
    output_filename = sys.argv[2]
    bodies_filename = sys.argv[3]
    decls_filename = sys.argv[4]

    inp = open(input_filename, 'r')
    output = open(output_filename, 'w')

    insertions = []
    data = open(decls_filename, 'r')
    # Get last line in file
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

    curr_file = ''
    curr_line = 0
    actual_line = 1
    for line in inp:
        line = line.rstrip()

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
                if i.filename == curr_file and i.line == curr_line:
                    assert not i.matched, 'actual line = ' + str(actual_line) + \
                     ', target_file=' + i.filename + ', target_line=' + \
                     str(i.line)
                    acc += i.insertion
                    i.matched = True

            if len(acc) > 0:
                output.write(acc + '\n')

        curr_line += 1
        actual_line += 1
            
        output.write(line + '\n')

    for i in insertions:
        assert i.matched, i.filename + ' ' + str(i.line) + ' ' + i.insertion

    bodies_file = open(bodies_filename, 'r')
    output.write(bodies_file.read())
    bodies_file.close()

    output.close()

