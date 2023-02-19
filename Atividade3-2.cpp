#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	float num;
	int num2,num3;
	printf("insira a sua idade: ");
	scanf("%f",&num);
	
	if(num<18){
		printf("você ainda é menor de idade");
	num2=18-num;
		printf("\nfaltam %d anos para atingir a maioridade",num2);
	}
	else if(num>=18){
		printf("você já é maior de idade");
	num3=num-18;
		printf("\natingiu a maioridade há %d anos",num3);
	}
	printf("\nmaioridade: 18 anos");
	return 0;
}
