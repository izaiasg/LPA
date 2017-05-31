/**********************

Função para 
treinar ponteiros

Ela recebe por 
parametro dois valores
e retorna ele de trás 
para frente.

**********************/

// Biblioteca

#include <stdio.h>

// Função de troca

void troca(int * x, int * y){

	int aux;
	aux = *x;
	*x = *y;
	*y = aux;

}

// Função main

int main(int argc, char const *argv[])
{
	
	int a, b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("!trocado = %d e %d\n", a, b);
	troca(&a, &b);
	printf("trocado = %d e %d\n", a, b);

	return 0;
}