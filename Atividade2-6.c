#include <stdio.h>
#include <math.h>
#include <locale.h>

main(void){
	setlocale(LC_ALL,"portuguese");
	int num,raiz;
	printf("digite um número: ");
	scanf("%d",&num);
	raiz=sqrt(num);
	printf("%d",raiz);
	return 0;
}
