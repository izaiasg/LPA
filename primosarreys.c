

/*********************************************************************

* Programa que recebe um array contendo varios valores.
* E retorna a quantidade de números primos que tem dentro 
* dele.

*********************************************************************/

// Bibliotecas

#include <stdio.h>

// Protótipos das funções

void qprimos(const int *primos, int tamanho, int *quantidade);

// Função Principal (main)

void main()
{
	int primos[5];
	int quantidade = 0;

	primos[0] = 9;
	primos[1] = 2;
	primos[2] = 7;
	primos[3] = 5;
	primos[4] = 11;

	qprimos(primos, 5, &quantidade);

	printf("Há %d números primos nesse array.\n", quantidade);
}

// Função que diz quantos primos tem no array

void qprimos(const int *primos, int tamanho, int *quantidade)
{
	int i;
	int j;
	int quantidade_primos = 0;

	for ( i = 0; i < tamanho; ++i)
	{
		
		int vezes_div = 0;
		for ( j = 1; j <= primos[i]; ++j)
		{
			if (primos[i] % j == 0) vezes_div++;
		}

		if (vezes_div == 2) quantidade_primos++;
	}

	*quantidade = quantidade_primos;

}

