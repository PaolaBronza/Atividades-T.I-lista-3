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
	if(strcmp(nome,"Jo�o")==0||strcmp(nome,"jo�o")==0){
		printf("seu nome � Jo�o");
	}
	else if(strcmp(nome,"Maria")==0||strcmp(nome,"maria")==0){
		printf("seu nome � Maria");
	}
	else if(strcmp(nome,"Jo�o")==1||strcmp(nome,"jo�o")==1||strcmp(nome,"Maria")==1||strcmp(nome,"maria")==1){
		printf("seu nome n�o � Jo�o nem Maria");
	}
	
	//idade
	if(num<18){
		printf("\nvoc� ainda � menor de idade");
	num2=18-num;
		printf("\nfaltam %d anos para atingir a maioridade",num2);
	}
	else if(num>=18){
		printf("voc� j� � maior de idade");
	num3=num-18;
		printf("\natingiu a maioridade h� %d anos",num3);
	}
	printf("\nmaioridade: 18 anos");
	return 0;
}
