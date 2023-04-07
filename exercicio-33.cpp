/* Faça um Programa que peça os 3 lados de um triângulo. O programa deverá informar se os valores podem ser um triângulo. 
Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.

Dicas: Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o terceiro; 
Triângulo Equilátero: três lados iguais; Triângulo Isósceles: quaisquer dois lados iguais; Triângulo Escaleno: três lados diferentes; */
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");	
    int lado1, lado2, lado3;
    
    printf("Informe três lados de um triângulo para definir o tipo de triângulo.\n");
    printf("Informe o 1° lado: ");
    scanf("%d", &lado1);
    printf("Informe o 2° lado: ");
    scanf("%d", &lado2);
    printf("Informe o 3° lado: ");
    scanf("%d", &lado3);
    
    if(lado1 == lado2 && lado2 == lado3){
    	printf("O triângulo informado é EQUILÁTERO.");
	} else if(lado1 == lado2 && lado2 != lado3 || lado2 == lado3 && lado2 != lado1){
		printf("O triângulo informado é ISÓSCELES.");
	} else if(lado1 != lado2 && lado2 != lado3){
		printf("O triângulo informado é ESCALENO.");
	} 
   
    return 0;
}
