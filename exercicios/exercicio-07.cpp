// Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	float valA, valB, valC;
	
	printf("Insira o valor da base/altura para calcular a área: \n");
	scanf("%f", &valA);
	
	
	valB = valA * valA;
	valC = (valB * 2);
	
	printf("O valor da área do quadrado é: %.2f \n", valB);
	printf("O dobro da área desse quadrado é: %.2f \n", valC);
}
