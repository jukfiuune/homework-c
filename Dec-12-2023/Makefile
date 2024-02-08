all: max.out sum.out helpers.o
max.out: helpers.o
	gcc max.c helpers.o -o max.out
sum.out: helpers.o
	gcc sum.c helpers.o -o sum.out
helpers.o:
	gcc -c helpers.c -o helpers.o
clean:
	rm *.out *.o