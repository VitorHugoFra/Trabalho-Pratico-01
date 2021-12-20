#include "ProcessTAD.h"
#include "ListaProcessosTAD.h"



#define sucess 0

int main(void){
    process test;

    SetPID(&test);
    SetCriationTime(&test);
    SetPriority(&test);
    imprime(test);
    return sucess;
}