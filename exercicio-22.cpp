// Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
  	char vogal;
	
	printf("Informe uma letra para eu te informar se e Vogal ou Consoante. \n");
	scanf("%c", &vogal);
	getchar();
	
	if(vogal == 'A' || vogal == 'A' || vogal == 'E' || vogal == 'e' || vogal == 'I' || vogal == 'i' || vogal == 'O' || vogal == 'o' || vogal == 'U' || vogal == 'u'){
		printf("A letra informada é uma Vogal \n");
	} 
	else {
		printf("A letra informada é uma Consoante. \n");			
		}
		
	return 0;
	}
