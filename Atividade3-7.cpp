#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main (void){
	setlocale(LC_ALL,"portuguese");
	char nome[40];
	printf("digite seu nome: ");
	scanf("%s",&nome);
	
	if(strcmp(nome,"Jo�o")==0||strcmp(nome,"jo�o")==0){
		printf("seu nome � Jo�o");
	}
	else if(strcmp(nome,"Maria")==0||strcmp(nome,"maria")==0){
		printf("seu nome � Maria");
	}
	else if(strcmp(nome,"Jo�o")==1||strcmp(nome,"jo�o")==1||strcmp(nome,"Maria")==1||strcmp(nome,"maria")==1){
		printf("seu nome n�o � Jo�o nem Maria");
	}
	return 0;
}
