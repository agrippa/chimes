GXX=/usr/local/bin/g++ ${CHIMES_HOME}/src/preprocessing/compile_cpp.sh -i ljForce.c -i random.c \
    -i decomposition.c -i cmdLineParser.c -i mycommand.c -i linkCells.c \
    -i haloExchange.c -i initAtoms.c -i timestep.c -i parallel.c \
    -i yamlOutput.c -i performanceTimers.c -i ./eam.c -i ./CoMD.c -v -k \
    -I /usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include
