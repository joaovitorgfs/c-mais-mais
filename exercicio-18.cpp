/* Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos)*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");	
    float tamanho, velocidade, tempo, tempom;
    
    printf("Vamos calcular o tempo de download de um arquivo. \n");
    printf("Informe o tamanho do arquivo em MB: ");
    scanf("%f", &tamanho);
    printf("Informe a velocidade da internet em Mbps: ");
    scanf("%f", &velocidade);
    
    tempo = (tamanho * 8)/velocidade ;
    tempom = tempo/60;
    
    printf("Para fazer o download do arquivo com os dados informados seria necessário aproximadamente %.2f minutos (ou %.2f segundos).", tempom, tempo);
    return 0;
}   