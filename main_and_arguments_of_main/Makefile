all: mystrings.o help.out strcompare.out strconcat.out strlength.out
help.out: mystrings.o
	gcc help.c mystrings.o -o help.out
strcompare.out: mystrings.o
	gcc strcompare.c mystrings.o -o strcompare.out
strconcat.out: mystrings.o
	gcc strconcat.c mystrings.o -o strconcat.out
strlength.out: mystrings.o
	gcc strlength.c mystrings.o -o strlength.out
mystrings.o:
	gcc -c mystrings.c -o mystrings.o
clean:
	rm *.out *.o