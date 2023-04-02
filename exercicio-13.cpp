// Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas: 
// Para homens: (72.7h) - 58 Para mulheres: (62.1h) - 44.7
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	float altura, pih, pim;
	
	printf("Informe a altura em metros para calcular o peso ideal: \n");
	scanf("%f", &altura);
	
	pih = (72.7 * altura) - 58;
	pim = (62.1 * altura) - 44.7;
	
	printf("O peso ideal de acordo com a altura informada e:\n \n");
	printf("Sendo homem: %.2f \n", pih);
	printf("Sendo mulher: %.2f \n", pim);
}
