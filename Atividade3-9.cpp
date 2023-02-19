#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num,num2,num3;
	printf("insira um número: ");
	scanf("%d",&num);
	printf("insira um número: ");
	scanf("%d",&num2);
	printf("insira um número: ");
	scanf("%d",&num3);
	
	if(num>num2&&num2>num3){
		printf("maior: %d\n%d\nmenor: %d",num,num2,num3);
	}
	else if(num<num2&&num>num3){
		printf("maior: %d\n%d\nmenor: %d",num2,num,num3);
	}
	else if(num<num2&&num2<num3){
		printf("maior: %d\n%d\nmenor: %d",num3,num2,num);
	}
	else if(num>num3&&num3>num2){
		printf("maior: %d\n%d\nmenor: %d",num,num3,num2);
	}
	else{
		printf("maior: %d\n%d\nmenor: %d",num2,num3,num);
	}
	return 0;
}
