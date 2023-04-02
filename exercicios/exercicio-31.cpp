/* Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre, e calcule a sua média.

A atribuição de conceitos obedece à tabela abaixo: Média de Aproveitamento Conceito Entre 9.0 e 10.0 A Entre 7.5 e 9.0 B Entre 6.0 e 7.5 C Entre 4.0 e 6.0 D Entre 4.0 e zero E

O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente e a mensagem “APROVADO” se o conceito for A, B ou C ou “REPROVADO” se o conceito for D ou E. */
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, media;
	
	printf("Informe duas notas parciais obtidas pelo aluno para ser cálculado. \n");
	printf("Informe a primeira nota:");
	scanf("%f", &nota1);
	printf("Informe a segunda nota:");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/2;
	
	printf("A primeira nota parcial foi %.2f e a segunda %.2f \n", nota1, nota2);
	printf("A média das notas é: %.2f \n", media);	
	
	if(media >= 9.0 && media <= 10.0) {
		printf("Sendo assim o aluno conseguiu o conceito A. \n");
		printf("Aluno aprovado!");				
	} else if(media<9.0 && media>=7.5){
		printf("Sendo assim o aluno conseguiu o conceito B. \n");
		printf("Aluno aprovado!");	
	} else if(media<7.5 && media>=6.0){
		printf("Sendo assim o aluno conseguiu o conceito C. \n");
		printf("Aluno aprovado!");	
	} else if(media<6.0 && media>=4.0){
		printf("Sendo assim o aluno conseguiu o conceito D. \n");
		printf("Aluno reprovado! :(");	
	} else if(media<4.0 && media>=0){
		printf("Sendo assim o aluno conseguiu o conceito B. \n");
		printf("Aluno reprovado! :(");	
	} else {
		printf("A media dos alunos não se encaixou em nenhum conceito. Verifique as notas!");
	}
	
	return 0;
}
