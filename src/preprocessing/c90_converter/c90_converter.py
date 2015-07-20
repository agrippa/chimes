#!/usr/bin/python
import os
import sys

if len(sys.argv) != 3:
    print('usage: python c90_converter.py input-file output-file')
    sys.exit(1)

in_fp = open(sys.argv[1], 'r')
source_code = in_fp.read()
in_fp.close()

out_fp = open(sys.argv[2], 'w')
brace_nesting = 0
in_line_comment = False
in_multiline_comment = False
i = 0
while i < len(source_code):
    # Figure out if we're starting or ending a comment
    if i < len(source_code) - 1 and source_code[i] == '/':
        if source_code[i + 1] == '/':
            in_line_comment = True
        elif source_code[i + 1] == '*':
            in_multiline_comment = True
    elif in_line_comment and source_code[i] == '\n':
        in_line_comment = False
    elif in_multiline_comment and source_code[i] == '*' and source_code[i + 1] == '/':
        in_multiline_comment = False

    # If we're not in a comment, then do our source code analysis
    if not in_line_comment and not in_multiline_comment:
        if source_code[i] == '{':
            brace_nesting += 1
        elif source_code[i] == '}':
            brace_nesting -= 1
        elif source_code[i] == '(' and brace_nesting == 0:
            end_index = i - 1
            while end_index > 0 and source_code[end_index] == ' ':
                end_index -= 1

            funcname = None
            if end_index > 0:
                end_index += 1
                start_index = end_index - 1
                while start_index >= 0 and (source_code[start_index].isalnum() or source_code[start_index] == '_'):
                    start_index -= 1
                start_index += 1

                prev_token_start = start_index - 1
                while prev_token_start >= 0 and source_code[prev_token_start] != '\n':
                    prev_token_start -= 1
                prev_token_start += 1
                prev_token = source_code[prev_token_start:start_index]
                prev_token = prev_token.strip()
                if prev_token != '#define':
                    funcname = source_code[start_index:end_index]
                else:
                    # Doesn't support multi-line defines
                    while i < len(source_code):
                        if source_code[i] == '\n':
                            has_backslash = False
                            # backtrace to see if there's a backslash continuing the define on the next line
                            j = i - 1
                            while j >= 0 and source_code[j] == ' ':
                                j -= 1
                            if j >= 0 and source_code[j] == '\\':
                                has_backslash = True
                            if not has_backslash:
                                break
                        i += 1

            if funcname is not None:
                print('Possible function "' + funcname + '"')

                close_paren = i
                while source_code[close_paren] != ')':
                        close_paren += 1
                arg_str = source_code[i + 1:close_paren]
                arg_str = arg_str.replace('\n', '')
                args = arg_str.split(',')
                args_not_in_c90 = False
                for a in range(len(args)):
                    args[a] = args[a].strip()
                    if args[a].find(' ') != -1:
                        args_not_in_c90 = True
                        break

                if not args_not_in_c90:
                    arg_def_str = ''
                    open_brace = close_paren + 1
                    while source_code[open_brace] != '{':
                        if source_code[open_brace] != '\n':
                            arg_def_str += source_code[open_brace]
                        open_brace += 1

                    arg_defs_map = {}
                    defs_split_on_semis = arg_def_str.split(';')

                    for line in defs_split_on_semis:
                        line = line.strip()
                        basetype_end = 0
                        if len(line) == 0:
                            continue

                        while line[basetype_end].isalnum():
                            basetype_end += 1
                        basetype = line[0:basetype_end]
                        line = line[basetype_end:].strip()
                        tokens = line.split(',')
                        for t in tokens:
                            t = t.strip()
                            param_name_start = len(t) - 1
                            while param_name_start >= 0 and (t[param_name_start].isalnum() or t[param_name_start] == '_'):
                                param_name_start -= 1
                            param_name_start += 1
                            param_name = t[param_name_start:]
                            indirection = t[:param_name_start]
                            indirection = indirection.strip()
                            arg_defs_map[param_name] = basetype + indirection

                    out_fp.write('(')
                    first = True
                    for arg in args:
                        if not first:
                            out_fp.write(', ')
                        out_fp.write(arg_defs_map[arg] + ' ' + arg)
                        first = False
                    out_fp.write(') ')
                    i = open_brace
                    brace_nesting += 1

            
    out_fp.write(source_code[i])
    i += 1        

assert brace_nesting == 0

out_fp.close()
