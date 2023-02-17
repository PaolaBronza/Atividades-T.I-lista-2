#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locate.h>

int main (void){
	setlocate(LC_ALL,"portuguese");
	int i,num,num2;
	srand(time(NULL));
	num=rand() %100;
	num2=rand() %100;
	printf("número 1:%d ",num);
	printf("\nnúmero 2:%d ",num2);
	if (num>num2){
		printf("\n%d>%d",num,num2);	
	}
	else {
		printf("\n%d<%d",num,num2);
	}
	return 0;
}
