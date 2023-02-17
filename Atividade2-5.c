#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num,num2,mul;

	printf("digite um número: ");
	scanf("%d",&num);
	printf("digite um número: ");
	scanf("%d",&num2);
	
	mul=num*num2;
	
	printf("%d*%d=%d",num,num2,mul);
return 0;
}
