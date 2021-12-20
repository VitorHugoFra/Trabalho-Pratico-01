#include "ProcessTAD.h"
// PID unico
void imprime(process processo){

    printf("\tProcesso de PID: %d\n", processo.PID);
    printf("\tHorário da criação do processo: %s\n", processo.criationTime);
    printf("\tPrioridade: %d\n", processo.priority);

}

int GetPID(process process){
    return process.PID;
}

void SetPID(process *process){
    process->PID = rand() % Numero_Max_Random;
}

char* GetCriationTime(process process){
    return process.criationTime;
}

void SetCriationTime(process *process){
    time_t currentTime;
    time (&currentTime);

    struct tm *timeInfo = localtime(&currentTime);
    process->criationTime = (char*) malloc (Numero_Current_Time * sizeof (char)); 
    
    char buffer [Numero_Current_Time];

    strftime (buffer, Numero_Current_Time,"%c", timeInfo);
    strcpy (process->criationTime, buffer);	/* Copia process->criationTime em buffer */
}

int GetPriority(process process){
    return process.priority;
}

void SetPriority(process *process){
    process->priority = rand() % 5;
}
