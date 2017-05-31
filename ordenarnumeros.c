/*********************************************************************

* Programa que ordena um vetor de int's

*********************************************************************/

// Bibliotecas

#include <stdio.h>

// Protótipos das funções

void ordenar(int *num, int tam);

// Função Principal (main)

int main(int argc, char const *argv[])
{
	int num[]={2,9,4,-5,78,120,1}, i;
	
	for (i = 0; i < 7; ++i)
	{
		printf("%d\n",num[i]);
	}

	printf("\n");

	ordenar(num, 7);
	
	for (i = 0; i < 7; ++i)
	{
		printf("%d\n",num[i]);
	}

	return 0;
}

// Função que organiza um vetor de int's

void ordenar(int *num, int tam)
{
	int i,j;
	for (i = 0; i < tam; ++i)
	{
		for (j = i + 1; j < tam; ++j)
		{
			if (num[i]>num[j])
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
}