/***********************************************

* Correção da atividade sobre números primos

************************************************/

// Bibliotecas

#include <stdio.h>


// Declaração do enum Bool

enum Bool{FALSO, VERDADEIRO};


// Protótipos das funções

enum Bool primo(int n);
int primos(int * numeros, int tam);


// Função Principal (main)

int main(void)
{
	int quantidade_primos = 0;
	int numeros[5];

	numeros[0] = 2;
	numeros[1] = 3;
	numeros[2] = 11;
	numeros[3] = 7;
	numeros[4] = 9;

	quantidade_primos = primos(numeros, 5);

	printf("Há %d números primos nesse array!\n", quantidade_primos);

	return 0;
}

/* Função que retorna um bool, que 
   representa se um número é ou não primo */

enum Bool primo(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			return FALSO;
		}
	}
	return VERDADEIRO;
}

/* Função que recebe um array e retorna 
   quantos números primos tem nele*/

int primos(int * numeros, int tam)
{
	int i, cont = 0;
	for(i = 0; i < tam; i++)
	{
		if(primo(numeros[i]))
		{
			++cont;
		}
	}
	return cont;
}