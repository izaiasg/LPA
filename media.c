/*********************************************************************

* Vetores/arrays
* Prorgama que pega um array de 20 posições e calcula
* e calcula a media de cada aluno.


*********************************************************************/

// Bibliotecas

#include <stdio.h>


// Protótipos das funções

void iniciaDados(double *n1, double *n2, int tamanha, double notaInicial1, double notaInicial2);
void calculaMedia(const double *n1,const double *n2, int tamanho, double *res);


// Função principal (main)

void main()
{

	int i;
	double nota1[20];
	double nota2[20];
	double medias[20];
	iniciaDados(nota1, nota2, 20, 2.0, 0.5);
	calculaMedia(nota1, nota2, 20, medias);
	for(i = 0; i < 20; i++)
	{

		printf("Média %d = %.2lf\n", i + 1, medias[i]);

	}
}



// Função que inicia os dados aleatoriamente

void iniciaDados(double *n1, double *n2, int tamanho, double notaInicial1, double notaInicial2)
{

	int i;
	for(i = 0; i < tamanho; i++){
		
		n1[i] = notaInicial1;
		notaInicial1 += 0.25;
		n2[i] = notaInicial2;
		notaInicial2 += 0.05;

	}

}

// Função que pega dois arreys e calcula a media entre eles e coloco em outro.


void calculaMedia(const double *n1,const double *n2, int tamanho, double *res)
{

	int i;
	for (i = 0; i < tamanho; i++)
	{
		res[i] = (n1[i] + n2[i]) / 2.0;
		
	}

}