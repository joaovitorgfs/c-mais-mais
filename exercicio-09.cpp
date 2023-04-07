// Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).
#include <stdio.h>

int main() {
	
	float valA, valB;
	
	printf("Informe a temperatura em Fahrenheit a ser convertida: \n");
	scanf("%f", &valA);
	
	valB = (5 * (valA - 32)/9);
	
	printf("A temperatura informada em Celsius é: %.2f", valB);
}
