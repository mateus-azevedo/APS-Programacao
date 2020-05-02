#include <stdio.h>

main(){
	short num;
	
	printf("Insira um numero inteiro: "); scanf("%hd", &num);
	if((num >= 10) && (num <= 50))
		printf("Parabens");
	else
		printf("erro");
}
