// Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {

#define PESO (72.2 * altura) - 58

	setlocale(LC_ALL, "Portuguese");
	float altura;
	
	printf("Informe a altura para calcular o peso ideal: \n");
	scanf("%f", &altura);
	
	float peso = PESO;
	
	printf("O peso ideal de acordo com a altura informada é: %.2f \n", peso);
}
