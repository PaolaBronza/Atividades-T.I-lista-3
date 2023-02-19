#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int peso,altura,imc;
	printf("insira seu peso: ");
	scanf("%d",&peso);
	printf("insira sua altura: ");
	scanf("%d",&altura);
	imc=peso/(altura^2);
	printf("seu imc é: %d",imc);
	
	if(imc>0 && imc<18,5){
		printf("\nabaixo do peso");
	}
	else if(imc>=18,5 && imc<24,99){
	printf("\nmédia");
	}
	else if(imc>=25 && imc<29,00){
		printf("\nsobrepeso");
	}
	else if(imc>30){
		printf("\nobesidade");
	}
	printf("\n- imc válido para pessoas de 20 a 60 anos");
	return 0;
}
