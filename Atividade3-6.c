#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num;
	printf("insira um número: ");
	scanf("%d",&num);
	if(num%2==0){
		printf("\no número inserido é par.");
	}
	else{
		printf("\no número inserido é ímpar");
	}
	return 0;
}
