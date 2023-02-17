#include <stdio.h>
#include <math.h>
#include <locale.h>

main(void){
	setlocale(LC_ALL,"portuguese");
	int ano,idade;
	printf("ano de nascimento: ");
	scanf("%d",&ano);
	idade=2023-ano;
	printf("essa é sua idade: %d",idade);
	return 0;	
}
