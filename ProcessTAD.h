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

//CRIANDO UM PROCESSO
typedef struct Processo{
	int PID;       //Identificador do processo, gerado aleatoriamente)
	int criationTime;
	int priority;
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
void GetPID(process process);

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
void GetCriationTime(process process);

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
void GetPriority(process process);

/** \brief Alteração os dados do processo para leitura 
 *
 * \param Priority para setar no processo
 * \return void
 *
 */
void SetPriority(process *process);




#endif //Arquivo "PROCESS_H"