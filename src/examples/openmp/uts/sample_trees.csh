#-----------------------------------------------------------------------------#
# Sample UTS Workloads:
#
#  This file contains sample workloads for UTS, along with the tree statistics
#  for verifying correct output from the benchmark.  This file is intended to
#  be used in shell scripts or from the shell so that UTS can be run by:
#
#   $ source sample_workloads.csh
#   $ ./uts $T1
#
#-----------------------------------------------------------------------------#

# Small Workloads (~4 MNodes):
# ===========================

# (T1) Geometric [fixed] ------- Tree size = 4130071, tree depth = 10, num leaves = 3305118 (80.03%)
setenv T1 "-t 1 -a 3 -d 10 -b 4 -r 19"

# (T5) Geometric [linear dec.] - Tree size = 4147582, tree depth = 20, num leaves = 2181318 (52.59%)
setenv T5 "-t 1 -a 0 -d 20 -b 4 -r 34"

# (T2) Geometric [cyclic] ------ Tree size = 4117769, tree depth = 81, num leaves = 2342762 (56.89%)
setenv T2 "-t 1 -a 2 -d 16 -b 6 -r 502"

# (T3) Binomial ---------------- Tree size = 4112897, tree depth = 1572, num leaves = 3599034 (87.51%)
setenv T3 "-t 0 -b 2000 -q 0.124875 -m 8 -r 42"

# (T4) Hybrid ------------------ Tree size = 4132453, tree depth = 134, num leaves = 3108986 (75.23%)
setenv T4 "-t 2 -a 0 -d 16 -b 6 -r 1 -q 0.234375 -m 4 -r 1"


# Large Workloads (~100 MNodes):
# =============================

# (T1L) Geometric [Fixed] ------ Tree size = 102181082, tree depth = 13, num leaves = 81746377 (80.00%)
setenv T1L "-t 1 -a 3 -d 13 -b 4 -r 29"

# (T2L) Geometric [Cyclic] ----- Tree size = 96793510, tree depth = 67, num leaves = 53791152 (55.57%)
setenv T2L "-t 1 -a 2 -d 23 -b 7 -r 220"

# (T3L) Binomial --------------- Tree size = 111345631, tree depth = 17844, num leaves = 89076904 (80.00%)
setenv T3L "-t 0 -b 2000 -q 0.200014 -m 5 -r 7"
