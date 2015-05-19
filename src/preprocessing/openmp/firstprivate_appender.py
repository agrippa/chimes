#!/usr/bin/python
import os
import sys

#
# This script searches a file for OMP pragmas and appends a firstprivate clause
# to all parallel for pragmas with the variable name specified in the input
# metadata file.
#
# The results are printed to stdout.
#

class ClauseInsertion(object):
    def __init__(self, ending_line, varname):
        self.ending_line = ending_line
        self.varname = varname


def parseMetadata(filename):
    clauses = {}
    fp = open(filename, 'r')
    for line in fp:
        tokens = line.split()
        starting_line = int(tokens[0])
        ending_line = int(tokens[1])
        varname = tokens[2]
        if starting_line not in clauses.keys():
            clauses[starting_line] = []
        clauses[starting_line].append(ClauseInsertion(ending_line, varname))

    fp.close()
    return clauses


def getLineNumberFromPreprocessorLine(line):
    tokens = line.split()
    assert(tokens[0] == '#')
    return int(tokens[1])


def pragmaHasForClause(pragma):
    tokens = pragma.split()
    assert(tokens[0] == '#pragma')
    assert(tokens[1] == 'omp')

    clauses = ' '.join(tokens[3:]).strip()
    paren_depth = 0
    index = 0

    while index < len(clauses):
        curr = clauses[index]

        if curr == ' ':
            pass
        elif curr == '(':
            paren_depth += 1
        elif curr == ')':
            paren_depth -= 1
        elif paren_depth == 0:
            # We're at a paren depth of 0 and not looking at whitespace. Read
            # until the next is not a alphabet character and see what clause
            # we're looking at
            acc = ''
            while index < len(clauses) and clauses[index].isalpha():
                acc += clauses[index]
                index += 1
            index -= 1
            if acc == 'for':
                return True
        index += 1
    return False


if __name__ == '__main__':
  if len(sys.argv) != 3:
      print('usage: python firstprivate_appender.py input-file metadata-file')
      sys.exit(1)

  clauses = parseMetadata(sys.argv[2])

  fp = open(sys.argv[1], 'r')

  previous_line = None
  line = fp.readline()

  while len(line) > 0:
      stripped_line = line.strip()

      tokens = stripped_line.split()
      if len(tokens) >= 2 and tokens[0] == '#pragma' and tokens[1] == 'omp':
          line_no = getLineNumberFromPreprocessorLine(previous_line)

          unfiltered_acc = line
          acc = stripped_line
          count_lines = 0
          while line[len(stripped_line) - 1] == '\\':
              previous_line = stripped_line
              line = input_fp.readline()
              stripped_line = line.strip()
              count_lines += 1
              acc = acc[:len(acc) - 1].strip()
              acc += ' ' + stripped_line
              unfiltered_acc += line

          if line_no in clauses:
              list_of_clauses = clauses[line_no]

              # This should only remove the trailing newline
              unfiltered_acc = unfiltered_acc.strip()

              for clause in list_of_clauses:
                  assert(count_lines == (clause.ending_line - line_no))

                  unfiltered_acc += ' firstprivate(' + clause.varname + ')'
              unfiltered_acc += '\n'

          sys.stdout.write(unfiltered_acc)
      else:
          sys.stdout.write(line)

      previous_line = line
      line = fp.readline()
      
  fp.close()
