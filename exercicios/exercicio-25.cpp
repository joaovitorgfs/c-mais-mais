/* Faça um Programa que leia três números e mostre o maior e o menor deles. */
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
    setlocale(LC_ALL, "Portuguese");
    int i, num, maior, menor;
    printf("Digite três números para ser mostrado o maior e o menor deles \n");
    for(i=1;i<=3;i++){

    printf("Digite o %d° número: \n", i);
    scanf("%d", &num);
    
    if(i==1){
    	maior=num;
    	menor=num;
	}
	else
	if(num>maior){
		maior=num;
	}
	else if(num<menor){
		menor=num;
	}  	
	}
	printf("O maior número informado foi %d e o menor %d\n", maior, menor);  
	return 0;
}
