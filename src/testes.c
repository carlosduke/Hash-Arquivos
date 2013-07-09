//Irei iniciar relembrando a base de c, entao esse arquivo tera algunas estruturas ponteiros e variaveis que nao serao usadas no sistema.
#include <stdlib.h> //Biblioteca com varias funcoes usadas durante a execucao do programa.
#include <stdio.h> //Para controle de entrada e saida de stream de dados.

#include "include/teste.h"

int main(int argc, char* argv[]){
	printf("Iniciando sistema.\n");
	
	texto teste = {sizeof("Carlos Roberto Lima Junior"),"Carlos Roberto Lima Junior"};
	
	
	printf("Tamanho: %d, %s\n",teste.tamanho,teste.texto);
	printf("Finalizando.\n");
	return 0;
}