/* As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe contrataram para desenvolver o programa que calculará os reajustes.

Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:

salários até R$ 280,00 (incluindo) : aumento de 20%
salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
salários de R$ 1500,00 em diante :
    aumento de 5% Após o aumento ser realizado,
informe na tela:
    o salário antes do reajuste;
    o percentual de aumento aplicado;
    o valor do aumento;
    o novo salário, após o aumento. */
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    float salario, reajuste;
	
	printf("Informe o seu salário para saber qual será o valor após o reajuste: ");
	scanf("%f", &salario);
	
	if(salario <= 280) {
		reajuste = salario * 1.2;				
	} else if(salario > 280 && salario <= 700){
		reajuste = salario * 1.15;
	} else if(salario > 700 && salario <= 1500){
		reajuste = salario * 1.1;
	} else if(salario > 1500){
		reajuste = salario * 1.05;
	}
	
	printf("O seu salário com reajuste será de R$ %.2f \n", reajuste);
    
	return 0;
}
