/* Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos)*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
    setlocale(LC_ALL, "Portuguese");
    float tamanho, velocidade, tempo;

    printf("Vamos calcular a velocidade de download de um arquivo. \n");
    printf("Informe o tamannho do arquivo a ser baixado em MB ");
    scanf("%f", tamanho);
    printf("Informe a velocidade da sua internetr em Mbps: ");
    scanf("%f", velocidade);

    tempo = (tamanho/8) * velocidade;

    printf("O arquivo informado será baixado em um total se %.2f segundos.", tempo);
}    