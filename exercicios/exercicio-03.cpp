// Faça um Programa que peça dois números e imprima a soma..
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese")
	float valA, valB, valC;
	
	printf("Informe dois números a serem somados: \n");
	scanf("%f", &valA);
	scanf("%f", &valB);
	
	valC = valA + valB;
	
	printf("O resultado da soma dos números é: %.f \n", valC);
}
