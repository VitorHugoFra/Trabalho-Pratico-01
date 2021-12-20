/*
 * Trabalho Ptático 01 - AEDS 1 
 * Professora Thais R. M. Braga Silva
 * Universidade Federal de Virçosa - Campus Florestal
 * @author Adriano Ferreira Pinheiro - Athos Leonel - Vitor Hugo França de Paula
 * @version 0.1
 * @since 19 de dez
*/

#ifndef CELULA_H
#define CELULA_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Necessária para usar as funções de tempo
#include <math.h> //Necessária para usar as funções matemáticas
#include "ProcessTAD.h"

//CRIANDO UMA CELULA
typedef struct Celula{
	process processo;	//Dado da celula
	process *prox;  	//Aponta para proximo processo
	process *ant;		//Aponta para anterior processo
}celula;

//CRIANDO UM LISTA PROCESSOS
typedef struct ListaProcessos{
	celula *vetor ;			  //Vetor de celula
	processoInicial *inicio;  //Aponta para a primeira celula
	processoFinal *fim;		  //Aponta para a ultimo celula
	int numCelOcupadas;		  //Indica quantas células da lista estão ocupadas
	celula *celulasDisp;	  //Apontar para a primeira célula disponível
}litstaProcesso;

/** \brief Ordena as celulas na lista de processos
 *	 ***** usar boble sort *******
 * \param processo em questão 
 * \return void
 *
 */
void imprime(process processo);

/** \brief Exibe todos os elementos do processo
 *
 * \param processo em questão 
 * \return void
 *
 */
void imprime(process processo);


#endif //Arquivo "CELULA_H"