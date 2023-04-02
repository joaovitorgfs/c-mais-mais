// Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

#include <stdio.h>
int main() {
	
	int num;
	
	printf("Informe um numero para que eu defina se é negativo ou positivo. \n");
	scanf("%d", &num);
	
	if(num >= 0){
		printf("O numero %d é um número positivo. \n", num);
	} else if(num < 0){
		printf("O numero %d e um número negativo. \n", num);
	}
	return 0;
}
