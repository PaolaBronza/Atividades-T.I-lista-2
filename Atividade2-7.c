#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(void){
	char num,resp;
	printf("digite um numero de 1 a 10: ");
	scanf("%d",&num);
	srand(time(NULL));
	printf("numero aleatorio: %d",rand()% 11-1);
	printf("\nacertou? ");
	scanf("%c",&resp);
	
	return 0;
}