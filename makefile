main: main.o ProcessTAD.o
	gcc main.o ProcessTAD.o -o main

main.o: main.c
	gcc -c main.c

ProcessTAD.o: ProcessTAD.c ProcessTAD.h
	gcc -c ProcessTAD.c

clean:
	rm *.o