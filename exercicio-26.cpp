/* Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato. */
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
    setlocale(LC_ALL, "Portuguese");
    float i, preco, menor;
    printf("Informe o preço de 3 produtos para eu definir o mais em conta. \n");
    for(i=1;i<=3;i++){

    printf("Digite o %d° preço: \n", i);
    scanf("%f", &preco);
    
    if(i==1){
    	menor=preco;
	}
	else if(preco<menor){
		menor=preco;
	}  	
	}
	printf("O menor preço informado foi R$%.2f .\n", menor);  
	return 0;
}
