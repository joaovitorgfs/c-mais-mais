/* Faça um Programa que leia três números e mostre-os em ordem decrescente. */
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    int A, B, C;
	
	printf("Insira os valores para serem mostrados em ordem decrescente \n");
	printf("Insira o primeiro valor: ");
	scanf("%d", &A);
	printf("Insira o segundo valor: ");
	scanf("%d", &B);
	printf("Insira o terceiro valor: ");
	scanf("%d", &C);
	
			
	printf("Ordem decrescente dos números informados é: ");
	if(A>B && B>C) {
		printf("%d, %d %d.", A, B ,C);				
	} else if(A>C && C>B){
		printf("%d, %d, %d.", A, C, B);
	} else if (B>A && A>C){
		printf("%d, %d, %d.", B, A, C);
	} else if(B>C && C>A){
		printf("%d, %d, %d.", B, C, A);
	} else if(C>A && A>B){
		printf("%d, %d, %d.", C, A, B);
	} else{
		printf("%d, %d, %d.", C, B, A);
	}	
    
	return 0;
}
