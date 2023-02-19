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
	
	if(strcmp(nome,"João")==0||strcmp(nome,"joão")==0){
		printf("seu nome é João");
	}
	else if(strcmp(nome,"Maria")==0||strcmp(nome,"maria")==0){
		printf("seu nome é Maria");
	}
	else if(strcmp(nome,"João")==1||strcmp(nome,"joão")==1||strcmp(nome,"Maria")==1||strcmp(nome,"maria")==1){
		printf("seu nome não é João nem Maria");
	}
	return 0;
}
