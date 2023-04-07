// Faça um Programa que converta metros para centímetros.
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	float valA, valB;
	
	printf("Insira o valor em metros a ser convertido para centímetros:\n");
	scanf("%f", &valA);
	
	valB = valA * 100;
	
	printf("O valor convertido para centímetros é: %.2f \n", valB);
}
