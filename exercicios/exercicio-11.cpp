/* Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: o produto do dobro do primeiro com metade do segundo. 
a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo. */ 
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {

#define PRI (valA * 2) * (valB / 2)
#define SEGU (valA * 3) + valC
#define TER	valC * valC * valC
	
	setlocale(LC_ALL, "Portuguese");
	int valA, valB;
	float valC;
	
	printf("Informe dois números inteiros: \n");
	scanf("%i", &valA);
	scanf("%i", &valB);
	printf("Informe um número real: \n");
	scanf("%f", &valC);
	
	float pri = PRI;
	float segu = SEGU;
	float ter = TER;
	
	printf("O produto do dobro do primeiro com metade do segundo é: %.2f \n", pri);
	printf("A soma do triplo do primeiro com o terceiro é: %.2f \n", segu);
	printf("O terceiro elevado ao cubo é: %.2f \n", ter);
}
