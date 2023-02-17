#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int i;
	
	srand(time(NULL));
	printf("\nnumero aleatorio: %d",rand()% 100);
	return 0;
}