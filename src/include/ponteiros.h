#ifndef PONTEIROS_H
#define PONTEIROS_H

#include <stdio.h>

typedef struct humano{
	char nome[1024];
	int idade;
	char sexo;
} humano;

void exibeHumano(humano);

#endif