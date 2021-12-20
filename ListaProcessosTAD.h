/*
 * Trabalho Ptático 01 - AEDS 1 
 * Professora Thais R. M. Braga Silva
 * Universidade Federal de Virçosa - Campus Florestal
 * @author Adriano Ferreira Pinheiro - Athos Leonel - Vitor Hugo França de Paula
 * @version 0.1
 * @since 19 de dez
*/

#ifndef LISTA_PROCESSOS_H
#define LISTA_PROCESSOS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Necessária para usar as funções de tempo
#include <math.h> //Necessária para usar as funções matemáticas
#include "ProcessTAD.h"

//CRIANDO UMA CELULA
typedef struct Celula{
	process processo;	//Dado da celula
	int prox;  			//Aponta para proximo processo
	int ant;		    //Aponta para anterior processo
}celula;

//CRIANDO UM LISTA PROCESSOS
typedef struct ListaProcessos{
	celula *vetor ;			    //Vetor de celula
	int inicio;  				//Aponta para a primeira celula
	int fim;		  			//Aponta para a ultimo celula
	int numCelOcupadas;		    //Indica quantas células da lista estão ocupadas
	int celulasDisp;	        //Apontar para a primeira célula disponível
}listaProcesso;



/** \brief Aloca celulas e inicia elementos
 *
 * \param Lista em questão, Tamanho da lista
 * \return void
 *
 */
void initList (int n , ListaProcesso *Lista);


/** \brief Retorna tamanho de celulas da lista
 *
 * \param Lista em questão, Tamanho da lista
 * \return Tamanho de celulas da lista
 *
 */
int FullVector (int n , ListaProcesso Lista);

/** \brief Inserir celulas na lista
 *
 * \param Lista em questão, Tamanho da lista
 * \return void
 *
 */
void insertCelula(int n , ListaProcesso *Lista)

/** \brief Remove celulas no inicio da lista
 *
 * \param Lista em questão, Tamanho da lista
 * \return void
 *
 */
void removeCelulaInit(int n , ListaProcesso *Lista)

/** \brief Remove celulas no fim da lista
 *
 * \param Lista em questão, Tamanho da lista
 * \return void
 *
 */
void removeCelulaEnd(int n , ListaProcesso *Lista){

/** \brief Imprime a lista de processos
 *
 * \param Lista em questão, Tamanho da lista 
 * \return void
 *
 */
void imprime(int n , ListaProcesso Lista);


#endif //Arquivo "LISTA_PROCESSOS_H"