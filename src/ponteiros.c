#include "include/ponteiros.h"

void exibeHumano(humano h){
	printf("Exibindo Humano\nNome: %s\nIdade: %d\nSexo: %c\n\n",h.nome,h.idade,h.sexo);
}

void alteraIdade(humano* h,int idade){
	h->idade = idade;
}