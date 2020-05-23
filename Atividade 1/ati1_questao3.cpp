/*
	           NOMES                  MATRICULA
	RHUAN GONZAGA CUNHA FRANCISCO    2020100052
	VINICIUS SILVA DE OLIVEIRA       2020101398
	MATEUS SANTOS DE AZEVEDO         2020100086 
*/
#include <stdio.h>

main(){
	short num;
	
	printf("Insira um numero inteiro: "); scanf("%hd", &num);
	if((num >= 10) && (num <= 50))
		printf("Parabens");
	else
		printf("erro");
}
