all: main.out counter.o smartcar.out
main.out: counter.o
	gcc main.c counter.o -o main.out
counter.o:
	gcc counter.c -c -o counter.o
smartcar.out:
	gcc smartcar.c -o smartcar.out
clean:
	rm *.o *.out