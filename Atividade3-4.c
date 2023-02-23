#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	char let[1];
	printf("insira uma letra: ");
	scanf("%s",let);
	
	if(strcmp(let,"A")==0||strcmp(let,"a")==0||strcmp(let,"E")==0||strcmp(let,"e")==0||strcmp(let,"I")==0||strcmp(let,"i")==0||strcmp(let,"O")==0||strcmp(let,"o")==0||strcmp(let,"U")==0||strcmp(let,"u")==0){
		printf("\na letra inserida é uma vogal");
	}
	else{
		printf("\na letra inserida é uma consoante");
	}
}
