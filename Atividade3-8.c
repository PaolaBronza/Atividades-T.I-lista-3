#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	char nome[40];
	float num;
	int num2,num3;
	
	printf("digite seu nome: ");
	scanf("%s",&nome);
	printf("insira a sua idade: ");
	scanf("%f",&num);
	
	//nome
	if(strcmp(nome,"João")==0||strcmp(nome,"joão")==0){
		printf("seu nome é João");
	}
	else if(strcmp(nome,"Maria")==0||strcmp(nome,"maria")==0){
		printf("seu nome é Maria");
	}
	else if(strcmp(nome,"João")==1||strcmp(nome,"joão")==1||strcmp(nome,"Maria")==1||strcmp(nome,"maria")==1){
		printf("seu nome não é João nem Maria");
	}
	
	//idade
	if(num<18){
		printf("\nvocê ainda é menor de idade");
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
