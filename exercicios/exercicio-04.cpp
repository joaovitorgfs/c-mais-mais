// Faça um Programa que peça as 4 notas bimestrais e mostre a média.
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");	
	float valA, valB, valC, valD, valE;
	
	printf("Insira as notas bimestrais para calcular a média\n");
	printf("Insira a nota do primeiro bimestre:\n");
	scanf("%f", &valA);
	printf("Insira a nota do primeiro bimestre:\n");
	scanf("%f", &valB);
	printf("Insira a nota do primeiro bimestre:\n");
	scanf("%f", &valC);
	printf("Insira a nota do primeiro bimestre:\n");
	scanf("%f", &valD);
	
	valE = (valA + valB + valC + valD)/4;
	
	printf("A média das notas bimestrais são: %.2f \n", valE);
}
