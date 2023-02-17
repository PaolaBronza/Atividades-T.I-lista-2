#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*scanf(”%d”, &idade); //Número inteiro
scanf(”%f”, &preco); //Número decimal
scanf(”%c”, &letra); //Número char
scanf("%s", &nome); //Textos (Strings)*/

int main(void){
	char frase[100];
	int qtd;
	
	printf("escreva uma frase: ");
	fgets(frase,100,stdin);
	qtd = strlen(frase);
	qtd -= 1;/*mesma coisa que qtd = qtd-1*/
	printf("o texto %s e: %d",frase, qtd);
	return 0;
}