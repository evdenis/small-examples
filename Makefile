prove:
	frama-c -av *.c

build:
	gcc -c *.c

clean:
	rm -fr *.av *.o *.pp.c *.pp.h a.out

.PHONY: build clean
