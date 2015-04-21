TARGET=smith_waterman
NPROC=8
POLICY=wf
HCR_OPT=-$(POLICY) -nproc $(NPROC)
CFLAGS=-O3 -g
HCC_OPT=$(CFLAGS)

all-test: compile run

compile:
	hcc $(CFLAGS) $(TARGET).hc -o$(TARGET)

run:
	./$(TARGET) $(HCR_OPT) string1.txt string2.txt

clean:
	-rm -Rf rose_*  *.o $(TARGET)
