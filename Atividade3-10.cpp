#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int idade,renda;
	
	printf("insira sua idade: ");
	scanf("%d",&idade);
	printf("insira sua renda: ");
	scanf("%d",&renda);
	
	if(idade>=18&&renda<=1500){
		printf("Parabéns, você é elegível para receber o benefício!");
	}
	else{
		printf("Infelizmente, você não é elegível para receber o benefício.");
	}
	return 0;
}
