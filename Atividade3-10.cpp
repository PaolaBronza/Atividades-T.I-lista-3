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
		printf("Parab�ns, voc� � eleg�vel para receber o benef�cio!");
	}
	else{
		printf("Infelizmente, voc� n�o � eleg�vel para receber o benef�cio.");
	}
	return 0;
}
