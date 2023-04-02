/* Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N- Noturno.

Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso. */
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    char turno;
	
	printf("Insira M, V ou N para definir seu turno: ");
	scanf("%c", &turno);
	getchar();
	
	if(turno == 'M' || turno == 'm') {
		printf("Bom dia! Seja bem-vindo. \n" );				
	} else 	if(turno == 'V' || turno == 'v') {
		printf("Bom tarde! Seja bem-vindo. \n");				
	} else if(turno == 'N' || turno == 'n') {
		printf("Boa noite! Seja bem-vindo. \n");				
	} else if(turno == 'M' || turno == 'm') {
		printf("Bom dia! Seja bem-vindo. \n");				
	} else{
		printf("Olá, o turno informado é invalido.");
	}
    
	return 0;
}
