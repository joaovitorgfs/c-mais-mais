// Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");
	float valA;
	
	printf("Informe um número a ser mostrado: \n");
	scanf("%f", &valA);
	
	printf("O numero informado foi: %.f \n", valA);
}
