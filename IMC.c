/*********************************************************************

* Programa que calcula o IMC de 2000 pessoas que estão 
* em um array (vetor).


*********************************************************************/

// Bibliotecas

#include <stdio.h>

// Protótipos das funções

void iniciarDados(double *p, double *a, int tam, double pesoInicial, double alturaInicial);
void imc(const double *p, const double *a, int tamanho, double *res);


// Função Principal (main)

void main()
{
	int cont = 0;
	double peso[2000], altura[2000], saida[2000];
	iniciarDados(peso, altura, 2000, 46.0, 1.55);
	imc(peso, altura, 2000, saida);
	while(cont < 2000)
	{
		printf("%.2lf ",saida[cont++]);
	}
}

// Função que gera dados aleatoriamente para o array

void iniciarDados(double *p, double *a, int tam, double pesoInicial, double alturaInicial)
{
	int cont = 0;
	while(cont < tam)
	{
		p[cont] = pesoInicial;
		pesoInicial += 1.0;
		a[cont] = alturaInicial;
		alturaInicial += 0.02;
		++cont;
	}
}

// Função que calcula o IMC

void imc(const double *p, const double *a, int tamanho, double *res)
{
	int i;
	for(i = 0; i < tamanho; ++i)
	{
		res[i] = (a[i] * a[i]) / p[i];
	}
}