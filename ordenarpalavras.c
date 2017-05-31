/*********************************************************************

* Programa que ordena um vetor de int's

*********************************************************************/

// Bibliotecas

#include <stdio.h>
#include <string.h>

// Protótipos das funções

void ordenar(char **str, int tam);

// Função Principal (main)

int main(int argc, char const *argv[])
{
	char *str[] = {"izaias","Joao","mylena","pedro","thomas"};
	
	int i;
	
	for (i = 0; i < 5; ++i)
	{
		printf("%s\n",str[i]);
	}

	printf("\n");

	ordenar(str, 5);
	
	for (i = 0; i < 5; ++i)
	{
		printf("%s\n",str[i]);
	}

	return 0;
}

// Função que organiza um vetor de int's

void ordenar(char **str, int tam)
{
	int i,j;
	for (i = 0; i < tam; ++i)
	{
		for (j = i + 1; j < tam; ++j)
		{
			if (strcmp(str[i],str[j]))
			{
				char *temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
}