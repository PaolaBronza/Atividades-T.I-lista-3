#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num;
	printf("Insira um n�mero: ");
	scanf("%d",&num);
	
	//par �mpar
	if(num %2==0){
		printf("o n�mero %d � par",num);
	}
	else{
		printf("o n�mero %d � �mpar",num);
	}
	//positivo negativo
	if(num>0){
		printf("\no n�mero %d � maior que 0",num);
		}
	else if(num<0){
		printf("\no n�mero %d � menor que 0",num);
	}
	else if(num==0){
		printf("\no n�mero %d � igual a 0");
	}
	return 0;
}
