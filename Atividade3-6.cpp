#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num;
	printf("insira um n�mero: ");
	scanf("%d",&num);
	if(num%2==0){
		printf("\no n�mero inserido � par.");
	}
	else{
		printf("\no n�mero inserido � �mpar");
	}
	return 0;
}
