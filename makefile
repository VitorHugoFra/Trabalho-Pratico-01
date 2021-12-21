main: main.o ProcessTAD.o ListaProcessosTAD.o
	gcc main.o ProcessTAD.o  ListaProcessosTAD.o -o main

main.o: main.c
	gcc -c main.c

ProcessTAD.o: ProcessTAD.c ProcessTAD.h
	gcc -c ProcessTAD.c

ListaProcessosTAD.o: ListaProcessosTAD.c ListaProcessosTAD.h
	gcc -c ListaProcessosTAD.c

clean:
	rm *.o