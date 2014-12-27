libnumdebug.so: libnumdebug.cpp stack_serialization.cpp stack_frame.cpp
	g++ -g -Wall -shared libnumdebug.cpp stack_frame.cpp stack_serialization.cpp -o libnumdebug.so
clean:
	rm -f libnumdebug.so
