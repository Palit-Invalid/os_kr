#Makefile for counter project

static: main.o counter.o libcounter.a
	gcc -o static.out main.o -L. -lcounter

dynamic: main.o counter.o libcounter.so
	gcc -o dynamic.out main.o -L. -lcounter -Wl,-rpath,.

main.o: main.c
	gcc -c main.c

counter.o: counter.c
	gcc -c counter.c

libcounter.a: counter.o
	ar cr libcounter.a counter.o

libcounter.so: counter.o
	gcc -shared -o libcounter.so counter.o

clean:
	rm -f *.o *.a *.so *.out 