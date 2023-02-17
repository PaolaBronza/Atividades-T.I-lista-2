#include <stdio.h>
#include <locale.h>

main (void){
	setlocale(LC_ALL,"portuguese");
	int num,num2,soma;
	
	printf("insira um número: ");
	scanf("%d",&num);
	printf("insira um número: ");
	scanf("%d",&num2);
	soma=num+num2;
	printf("%d+%d=%d",num,num2,soma);
	return 0;
}
