/*********************************************************************

* Entendendo ponteiros.

*

*********************************************************************/

// Bibliotecas

#include <stdio.h>

// Protótipo da função


int swap(int * a, int * b);



// Função principal (main).


int 
main(void)
{

	int x = 56;
	int y = 3;
	swap(&x, &y);

	printf ("\nx = %i, y = %i\n", x , y);

}

// Função swap (troca o conteudo de duas variáveis)




int swap(int * a, int * b)
{

	int tmp = *a;
	*a = *b;
	*b = tmp;
	
	return 0;

}

