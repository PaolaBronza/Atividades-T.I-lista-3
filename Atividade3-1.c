#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num;
	printf("Insira um número: ");
	scanf("%d",&num);
	
	//par ímpar
	if(num %2==0){
		printf("o número %d é par",num);
	}
	else{
		printf("o número %d é ímpar",num);
	}
	//positivo negativo
	if(num>0){
		printf("\no número %d é maior que 0",num);
		}
	else if(num<0){
		printf("\no número %d é menor que 0",num);
	}
	else if(num==0){
		printf("\no número %d é igual a 0");
	}
	return 0;
}
