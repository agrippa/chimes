libnumdebug.so: libnumdebug.cpp stack_serialization.cpp stack_frame.cpp
	g++ -g -Wall -shared libnumdebug.cpp stack_frame.cpp stack_serialization.cpp numdebug_stack.cpp -o libnumdebug.so -DVERBOSE
clean:
	rm -f libnumdebug.so
