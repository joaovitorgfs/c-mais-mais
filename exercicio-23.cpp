/* Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar: A mensagem "Aprovado", se a média alcançada for maior ou igual a sete; 
A mensagem "Reprovado", se a média for menor do que sete; A mensagem "Aprovado com Distinção", se a média for igual a dez. */
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, media;
	
	printf("Informe duas notas para calcular a média do aluno e verificar se ele foi aprovado. \n");
	printf("Infome a primeira nota: \n");
	scanf("%f", &nota1);
	printf("Infome a segunda nota: \n");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/2;
	
	if(media < 7){
		printf("O aluno foi reprovado, pois a média dele foi %.2f \n", media);
	} else 
	if(media >= 7){
		printf("O aluno foi aprovado, pois a média dele foi %.2f\n", media);			
		}
		
	return 0;
	}
