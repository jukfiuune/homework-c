all: quadraticroots.o main.out
quadraticroots.o:
	gcc -c quadraticroots.c -o quadraticroots.o -lm
main.out: quadraticroots.o
	gcc main.c quadraticroots.o -o main.out -lm
clean:
	rm *.out *.o