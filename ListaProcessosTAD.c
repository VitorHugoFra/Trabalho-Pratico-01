#include "ProcessTAD.h"
#include "ListaProcessosTAD.h"


void insertCelula(int n , ListaProcesso *Lista){
    if(Lista->celulasDisp == 0){

        SetPID(&Lista->vetor[celulasDisp].processo);
        SetCriationTime(&Lista->vetor[celulasDisp].processo);
        SetPriority(&Lista->vetor[celulasDisp].processo);
        imprime(Lista->vetor[celulasDisp].processo);
        
    }else{

    }
}
void removeCelulaInit(int n , ListaProcesso *Lista){
    if(Lista->numCelOcupadas > 0){


        Lista->vetor[0]
        int i = 0;
        for ( i = 0; i < count; i++)
        {
            /* code */
        }
        
    }

}
void removeCelulaEnd(int n , ListaProcesso *Lista){

}

void initList (int n , ListaProcesso *Lista){
	Lista->vetor =  (celula*) malloc(n * sizeof(celula));
    Lista->numCelOcupadas = 0;
    Lista->inicio = -1;
    Lista->fim = n-1;
    Lista->celulasDisp = 0;
    int i = 0;

    for (i = 0; i < n; i++)
    {
        if(i == 0){
            Lista->vetor[i].prox = i + 1;
            Lista->vetor[i].ant = -1;
        }else if(i == (n-1)){
            Lista->vetor[i].prox = -1;
            Lista->vetor[i].ant = i -1;
        }else{
            Lista->vetor[i].prox = i + 1;
            Lista->vetor[i].ant = i - 1;
        }
        Lista->vetor[i].
    }
    

}

int FullVector (int n , ListaProcesso Lista){
	int ocupy = 0;
	for(int i = 0;i < n ; i++){
		if (Lista.numCelOcupadas == 4){
			ocupy ++;
		}
	}
	return ocupy;
}

void imprime(int n , ListaProcesso Lista){
    int i = 0;

    for (i = 0; i < Lista.numCelOcupadas; i++)
    {
        Lista.vetor[i].processo.imprime();
    }
    

}