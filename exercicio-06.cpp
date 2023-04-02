// Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {

#define PI 3.14
	
	setlocale(LC_ALL, "Portuguese");	
	float valA, valB;
	
	printf("Insira o valor do raio para calcular a área: \n");
	scanf("%f", &valA);
	
	float pi = PI;
	
	valB = pi * (valA * valA);
	
	printf("O valor da área do circulo é: %.2f \n", valB);
}
