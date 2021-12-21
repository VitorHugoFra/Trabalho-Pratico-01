#include "ProcessTAD.h"
#include "ListaProcessosTAD.h"

#define sucess 0

int main(void){
    clock_t start, end;
    double cpu_time_used;

    start = clock();//inicio o contador de tempo
	FILE *archive;
	archive = fopen("teste.txt", "r");//Abre arquivo de teste para leitura
	
	if (archive == NULL){
		printf("Erro");
		return 0;
	}
	
	int SizeVetor, CountOperations;
	int Repetitions , Operation;
	
	fscanf(archive,"%d %d" , &SizeVetor , &CountOperations );

    listaProcesso lista;
    initList(SizeVetor, &lista);
	
	for(int i = 0;i < CountOperations ; i++){
		
		fscanf(archive,"%d %d" , &Operation , &Repetitions );
		
		if (Operation == 0){
			for(int i = 0;i < Repetitions ; i++){
				//Operação de adição
                insertCelula(SizeVetor, &lista);
			}
		}
		if (Operation == 1){
			for(int i = 0;i < Repetitions ; i++){
				//Operação de Remoção
                removeCelulaInit(SizeVetor , &lista);
			}
		}
	}
	
	
	fclose(archive);//fecha arquivo de teste
	
	FILE *FileOut;
	FileOut = fopen("SaidaDoTeste.txt","w");//cria arquivo para escrita
	
	
	end = clock();//finaliza o contador de tempo
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	fprintf(FileOut,"Tempo de execução = %.2lfs", cpu_time_used);//escreve o tempo gasto no nova arquivo
	fclose(FileOut);
    imprimeLista(SizeVetor, lista);

    return sucess;
}