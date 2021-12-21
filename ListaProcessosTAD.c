#include "ProcessTAD.h"
#include "ListaProcessosTAD.h"


void insertCelula(int n , listaProcesso *Lista){

    SetPID(&Lista->vetor[Lista->celulasDisp].processo);
    SetCriationTime(&Lista->vetor[Lista->celulasDisp].processo);
    SetPriority(&Lista->vetor[Lista->celulasDisp].processo);

    int i = 0;
    for ( i = 0; i < Lista->numCelOcupadas; i++)
    {
        if (Lista->vetor[i].processo.PID > Lista->vetor[Lista->celulasDisp].processo.PID)
        {
            process aux;

            aux = Lista->vetor[i].processo;
            Lista->vetor[i].processo = Lista->vetor[Lista->celulasDisp].processo;
            Lista->vetor[Lista->celulasDisp].processo = aux;
        }
    }
    if(Lista->celulasDisp == 0){
        Lista->inicio = 0;
        Lista->fim = 0;
    }else{
        Lista->fim++;
    }
        
    Lista->numCelOcupadas++;
    Lista->celulasDisp++;
}

void removeCelulaInit(int n , listaProcesso *Lista){

    if(Lista->numCelOcupadas > 0){

        int i = 0;
        for ( i = 1; i < Lista->numCelOcupadas; i++)
        {
            Lista->vetor[i-1] = Lista->vetor[i];
        }
        Lista->numCelOcupadas--;
        Lista->celulasDisp--;
    }

}

void removeCelulaEnd(int n , listaProcesso *Lista){

        int i = 0;
        process aux;
        Lista->vetor[Lista->numCelOcupadas].processo = aux;

        Lista->numCelOcupadas--;
        Lista->celulasDisp--;
}

void initList (int n , listaProcesso *Lista){
	Lista->vetor =  (celula*) malloc(n * sizeof(celula));
    Lista->numCelOcupadas = 0;
    Lista->inicio = -1;
    Lista->fim = -1;
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
    }
    

}

int FullVector (int n , listaProcesso Lista){
	int ocupy = 0;
	for(int i = 0;i < n ; i++){
		if (Lista.numCelOcupadas == 4){
			ocupy ++;
		}
	}
	return ocupy;
}

void imprimeLista(int n , listaProcesso Lista){
    int i = 0;

    for (i = 0; i < Lista.numCelOcupadas; i++)
    {
       imprime(Lista.vetor[i].processo);
    }
    

}