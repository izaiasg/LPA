/*

* Programa que pega três variaveis (a,b,c) e retorna x¹ e x². (Bhaskara)
*
* Assinatura de delta:
*
* 	delta: (IRxIRxIR) - IR
*	delta(a,b,c) = b² - 4*a*c
*
* Assinatura de bhaskara:
*
*	IE = {ERR_SEM_RAIZES_REAIS, ERR_ARG_A_INVALIDO, ERR_SUCESSO}
*
*	bhaskara:(IRxIRxIR) - (IExIRxIR)
*	bhaskara(0,_,_) = (ERR_ARG_A_INVALIDO,0,0)
*	bhaskara(a,b,c) = 	
*		se delta(a,b,c) < 0 => (ERR_SEM_RAIZES_REAIS,0,0)
*		senão => (ERR_SUCESSO, (- b + ("raiz"delta(a,b,c)) / 2*a),(- b - ("raiz"delta(a,b,c)) / 2*a))
*

*/

// Bibliotecas 

#include <stdio.h>
#include <math.h>

// Tratando os erros (enum)

enum Erro{ERR_SUCESSO, ERR_ARG_A_INVALIDO, ERR_SEM_RAIZES_REAIS};


// Função que calcula delta

double delta (double a, double b, double c)
{

	return b * b - (4 * a * c);

}

// Função bhaskara

enum Erro bhaskara(double a, double b, double c, double *res1, double *res2)
{
	double deltav;
	if(a == 0.0)
	{
		return ERR_ARG_A_INVALIDO;
	}
	deltav = delta(a,b,c);
	if(deltav < 0.0)
	{
		return ERR_SEM_RAIZES_REAIS;
	}
	*res1 = (- b + sqrt(deltav)) / (2.0 * a);
	*res2 = (- b - sqrt(deltav)) / (2.0 * a);
	return ERR_SUCESSO;
}

// Função principal (main)

void main()
{
	double a = 1, b = 4, c = 1, r1, r2;
	enum Erro err;
	err = bhaskara(a, b, c, &r1, &r2);
	if(err != 0)
	{
		printf("Erro código = %d.\n",err);
		if(err == ERR_ARG_A_INVALIDO)
		{
			printf("A inválido: não é equação do segundo grau.\n");
		}
		if(err == ERR_SEM_RAIZES_REAIS)
		{
			printf("Sem raizes reaiz.\n");
		}
		return;
	}
	printf("Resultado: (%.2lf, %.2lf)\n", r1, r2);
}