/* Faça um programa para o cálculo de uma folha de pagamento, sabendo que os descontos são do Imposto de Renda, 
que depende do salário bruto (conforme tabela abaixo) e 10% para o INSS e que o FGTS corresponde a 11% do Salário Bruto, mas não é descontado (é a empresa que deposita).
O Salário Líquido corresponde ao Salário Bruto menos os descontos. O programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas trabalhadas no mês.
Desconto do IR: Salário Bruto até 900 (inclusive) - isento Salário Bruto até 1500 (inclusive) - 
desconto de 5% Salário Bruto até 2500 (inclusive) - desconto de 10% Salário Bruto acima de 2500 - desconto de 20%
Imprima na tela as informações, dispostas conforme o exemplo abaixo. No exemplo o valor da hora é 5 e a quantidade de hora é 220.*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");	
    float horas, salario, bruto, ir, inss, fgts, liquido, descontos;
    
    printf("Informe os dados para calcular os impostos e informar o seu salário líquido.\n");
    printf("Informe o salário referente a hora: ");
    scanf("%f", &salario);
    printf("Informe as horas trabalhadas mensalmente: ");
    scanf("%f", &horas);
    
    bruto = salario * horas;
    if(bruto <= 900){
    	ir = bruto * 1;
	} else if(bruto > 900 && bruto <= 1500){
		ir = bruto * 0.05;
	} else if(bruto > 1500 && bruto <= 2500){
		ir = bruto * 0.1;
	} else if(bruto > 2500){
		ir = bruto * 0.2;
	}
	
    inss = bruto * 0.1;
    fgts = bruto * 0.11;
    
    descontos = ir + inss;
    liquido = bruto - descontos;
    
    printf("\nSalário Bruto (%.f * %.2f)       =       R$ %.2f \n", horas, salario, bruto);
    printf("(-) Imposto de Renda       =       R$ %.2f \n", ir);
    printf("(-) INSS       =       R$ %.2f \n", inss);
    printf("(+) FGTS       =       R$ %.2f \n \n", fgts);
    printf("Total de Descontos       =       R$ %.2f \n", descontos);
    printf("Salário Líquido       =       R$ %.2f \n", liquido);

    return 0;
}