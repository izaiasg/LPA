/*********************************************************************

* crivo

*********************************************************************/

// Bibliotecas

#include <stdio.h>
#include <math.h>

// Declaração do enum Bool

enum Bool
{
	FALSO,
	VERDADEIRO
};


// Protótipos das funções

enum Bool primoCrivo(int n);
void preencherCrivo(int *crivo, int tam);


// Função Principal (main)

int
main(void)
{

	int n = 2;
	int res;
	res = primoCrivo(n);

	if(res == VERDADEIRO)
	{
		printf("Esse é um número primo!\n");
	}
	if (res == FALSO)
	{
		printf("Esse não é um número primo!\n");
	}
}


// Função que preenche o crivo

void preencherCrivo(int *crivo, int tam)
{
	int i;
	int maxTam = ceil (sqrt(tam));

// preenchendo o crivo com -1

	for ( i = 2; i < tam; ++i)
	{
		crivo[i] = -1;
	}

// setando 0 aos dois primeiros pois não são primos

	crivo[0] = 0;
	crivo[1] = 0;

/************************************** 

* como todos começão com -1:

1) o primeiro for vai percorrer
todas as posições;

2) o if vai ver se ainda não foi 
preenchido, ou seja, vai ver se ainda
está com o -1;

3) o for que está dentro do if vai 
percorrer os elementos do arrey, 
colocando no arrey (i * j), que é a 
posição atual vezes ela mesma que
resulta em um numero que não é 
primo e coloco 0 lá. Isso ocorre
até i * j >= tam;

4) e,quando sair desse for coloca
1 no numero atual para dizer que ele 
é primo;

5) o ultimo for é para setar 1 nos que
ainda não foram ppreenchidos.

**************************************/


	for (i = 2; i < maxTam; ++i)
	{
		if (crivo[i] == -1)
		{
			int j;
			for (j = 2; j < tam / 2; ++i)
			{
				if (i * j >= tam)
				{
					break;
				}
				crivo[i * j] = 0;
			}
			crivo[i] = 1;
		}
	}

	for (i = maxTam; i < tam; ++i)
	{
		if(crivo[i] == -1) crivo[i] = 1;
	}
}


// Função que diz se é ou não primo atravez do Crivo

enum Bool primoCrivo(int n)
{

	static int crivo[1000];
	static int ja_entrou = 0;

	if (!ja_entrou)
	{
		preencherCrivo(crivo, 1000);
		ja_entrou = 1;
	}
	if (crivo[n])
	{
		return VERDADEIRO;
	}
	return FALSO;
}