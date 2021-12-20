#include "ProcessTAD.h"
// PID unico
void imprime(process processo){

    printf("Processo de PID:%d\n\t", processo.PID);
    printf("Horário da criação do processo: %d\n\t", processo.criationTime);
    printf("Prioridade: %d\n\t", processo.priority);

}

int GetPID(process process){
    return process.PID;
}

void SetPID(process *process){
    processo.PID = rand() % 100;
}

int GetCriationTime(process process){
    return process.criationTime;
}

void SetCriationTime(process *process){
    // Calculate the time taken by fun()
    processo.criationTime = clock();
}

int GetPriority(process process){
    return process.priority;
}

void SetPriority(process *process, int priority){
    processo.priority = rand() % 5;
}
