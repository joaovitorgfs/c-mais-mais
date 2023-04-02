/* Faça um Programa que peça os 3 lados de um triângulo. O programa deverá informar se os valores podem ser um triângulo. 
Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.

Dicas: Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o terceiro; 
Triângulo Equilátero: três lados iguais; Triângulo Isósceles: quaisquer dois lados iguais; Triângulo Escaleno: três lados diferentes; */
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	int lado1, lado2, lado3;
	
	printf("Informe os três lados de um triângulo para definir o tipo. \n");
	printf("Informe o primeiro lado: \n");
	scanf("%d", &lado1);
	printf("Informe o segundo lado: \n");
	scanf("%d", &lado2);
	printf("Informe o terceiro lado: \n");
	scanf("%d", &lado3);
			
	if(lado1 == lado2 == lado3){
		printf("Com os valores informados pude chegar ao resultado de que o triângulo informado é Equilátero");
	} else if (lado1 == lado2 != lado3 || lado1 == lado3 != lado2 || lado2 == lado3 != lado1){
		printf("Com os valores informados pude chegar ao resultado de que o triângulo informado é Isósceles");
	} else if (lado1 != lado2 != lado3){
		printf("Com os valores informados pude chegar ao resultado de que o triângulo informado é Escaleno");
	}
}
