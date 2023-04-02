// Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	char sexo, F, M;
	
	printf("Digite M para Masculino e F para Feminino. \n");
	scanf("%c", &sexo);
	getchar();
	
	if(sexo == 'M' || sexo == 'm'){
		printf("O sexo é masculino. \n");
	} 
	else if(sexo == 'F' || sexo == 'f'){
		printf("O sexo é feminino. \n");
	} 
	else if(sexo != 'M' && sexo != 'F') {
		printf("O sexo é inválido! \n");			
		}
		
	return 0;
	}
