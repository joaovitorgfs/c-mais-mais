/* Faça um Programa que leia um número e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido. */
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    int dia;
	
	printf("Informe um número entre 1 e 7 para ser mostrado o dia da semana: ");
	scanf("%d", &dia);
	
	if(dia == 1) {
		printf("O dia informado foi Domingo.");				
	} else if(dia == 2) {
		printf("O dia informado foi Segunda-Feira.");
    } else if(dia == 3) {
		printf("O dia informado foi Terça-Feira.");				
	} else if(dia == 4) {
		printf("O dia informado foi Quarta-Feira.");				
	} else if(dia == 5) {
		printf("O dia informado foi Quinta-Feira.");				
	} else if(dia == 6) {
		printf("O dia informado foi Sexta-Feira.");				
	} else if(dia == 7) {
		printf("O dia informado foio Sábado.");				
	} else {
		printf("O dia informado é invalido.");				
	}
    
	return 0;
}
