/*
 * Trabalho Ptático 01 - AEDS 1 
 * Professora Thais R. M. Braga Silva
 * Universidade Federal de Virçosa - Campus Florestal
 * @author Adriano Ferreira Pinheiro - Athos Leonel - Vitor Hugo França de Paula
 * @version 0.1
 * @since 15 de dez
*/

#ifndef PROCESS_H
#define PROCESS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Necessária para usar as funções de tempo
#include <math.h> //Necessária para usar as funções matemáticas
#include <string.h>

#define Numero_Max_Random 600000
#define Numero_Current_Time 80 


//CRIANDO UM PROCESSO
typedef struct Processo{
	int PID;       			//Identificador do processo, gerado aleatoriamente
	char *criationTime;     //Horário da criação do processo
	int priority;			//Valor de 1 a 5, gerado aleatoriamente
}process;


/** \brief Exibe todos os elementos do processo
 *
 * \param processo em questão 
 * \return void
 *
 */
void imprime(process processo);


/*========================== PID ===========================*/
/** \brief Acessar os dados do processo para leitura 
 *
 * \param void
 * \return PID do processo
 *
 */
int GetPID(process process);

/** \brief Alteração os dados do processo para leitura 
 *
 * \param PID para setar no processo
 * \return void
 *
 */
void SetPID(process *process);

/*========================== Criation Time ===========================*/
/** \brief Acessar os dados do processo para leitura 
 *
 * \param void
 * \return Tempo de criação do processo
 *
 */
char* GetCriationTime(process process);

/** \brief Alteração os dados do processo para leitura 
 *
 * \param Tempo de criação para setar no processo
 * \return void
 *
 */
void SetCriationTime(process *process);

/*========================== Priority ===========================*/
/** \brief Acessar os dados do processo para leitura 
 *
 * \param void
 * \return Priority do processo
 *
 */
int GetPriority(process process);

/** \brief Alteração os dados do processo para leitura 
 *
 * \param Priority para setar no processo
 * \return void
 *
 */
void SetPriority(process *process);


#endif //Arquivo "PROCESS_H"