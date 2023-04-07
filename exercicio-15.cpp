/* Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.

Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, 
faça um programa que nos dê: salário bruto. quanto pagou ao INSS. quanto pagou ao sindicato. o salário líquido. calcule os descontos e o salário líquido, conforme a tabela abaixo:

+ Salário Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Salário Liquido : R$ */

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	float salario, horas, bruto, ir, inss, sindicato, líquido;
	
	printf("Digite o valor que você ganha por hora: \n");
	scanf("%f", &salario);
	printf("Digite o numero de horas que você trabalha mensalmente: \n");
	scanf("%f", &horas);
	
	bruto = salario * horas;
	ir = bruto * 0.11;
	inss = bruto * 0.08;
	sindicato = bruto * 0.05;
	liquido = bruto - ir - inss - sindicato;	
		
	printf("O seu salário mensal bruto é de: R$%.2f \n", bruto);
	printf("O valor pago para imposto de renda foi de: R$%.2f \n", ir);
	printf("O valor pago para o inss foi de: R$%.2f \n", inss);
	printf("O valor pago para o sindicato foi de: R$%.2f \n", sindicato);
	printf("O seu salário líquido no final do mês será de: R$%.2f \n", liquido);			
}
