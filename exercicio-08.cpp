// Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	float valA, valB, valC;
	
	printf("Insira o valor que você recebe por hora: \n");
	scanf("%f", &valA);
	
	printf("Insira o valor de horas que você trabalha: \n");
	scanf("%f", &valB);	
	
	
	valC = valA * valB;
	
	printf("O seu salário total no final do mês será: %.2f \n", valC);
}

