//Irei iniciar relembrando a base de c, entao esse arquivo tera algunas estruturas ponteiros e variaveis que nao serao usadas no sistema.
#include <stdlib.h> //Biblioteca com varias funcoes usadas durante a execucao do programa.
#include <stdio.h> //Para controle de entrada e saida de stream de dados.

//#include "include/teste.h"
#include "include/ponteiros.h"

int main(int argc, char* argv[]){
	humano carlos = {
		"Caros Roberto",
		22,
		'M'
	};
	
	exibeHumano(carlos);
	
	humano *p_carlos = &carlos;
	
	
	p_carlos->idade=20;
	exibeHumano(carlos);
	
	return 0;
}