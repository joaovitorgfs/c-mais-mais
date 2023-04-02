// Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit.
#include <stdio.h>

int main() {
	
	float valA, valB;
	
	printf("Informe a temperatura em Celsius a ser convertida: \n");
	scanf("%f", &valA);
	
	valB = (valA * 1.8) + 32;
	
	printf("A temperatura informada em Fahrenheit é: %.2f", valB);
}
