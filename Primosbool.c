
/*************************************************************************************

* Programa que diz se é ou não número primo;
* Recebe um número natural e retorna um bool.

* OBS.: o número 2 é o único número primo que é par. Os demais são números ímpares;
* Nem todos os numeros impares são primos (O "9" por exemplo não é.)

* Números primos são números que possuem apenas 2 divisores: 
* o próprio número e 1. Para saber se um número é primo, 
* precisamos dividi-lo por todos os números entre ele
* e 1 e verificar quantos divisores há neste intervalo. 
* Se forem apenas 2, então o número é primo.

* CONDIÇOES PARA TORNAR MAIS EFICIENTE

* Se for 2, já retorna o resultado
* se for menor que 1 retorna erro

* Primos: Z -> B

************************************************************************************/

// Bibliotecas

#include <stdio.h>

// Declaração do enum

enum Bool{FALSO, VERDADEIRO};

// Protótipos das funções

enum Bool primos(const int * valor);

// Função Principal (main)

int 
main(void)
{
	
	int valor = 1232;
	int resultado = 0;

	resultado = primos(&valor);

	if (resultado == FALSO)
	{
		printf("Esse não é um número primo!\n");
	}
	if (resultado == VERDADEIRO)
	{
		printf("Esse é um número primo!\n");
	}
	



	return 0;
}

// Função que retorna "0" caso não seja primo e "1" casso seja

enum Bool primos(const int * valor)
{

	int i;
	int quantidade = 0;
	int numero = *valor;
	
	// Loop que fica add 1 em i, e se o resto da divisão for 0, add 1 em quantidade
 
	for ( i = 1; i <= numero; i++)
	{

		if (numero % i == 0) quantidade++;

	}

	if (quantidade == 2) return VERDADEIRO;
	if (quantidade != 2) return FALSO;

}