/*
	           NOMES                  MATRICULA
	RHUAN GONZAGA CUNHA FRANCISCO    2020100052
	VINICIUS SILVA DE OLIVEIRA       2020101398
	MATEUS SANTOS DE AZEVEDO         2020100086 
*/
#include <stdio.h>
#include <stdlib.h>



 main(){
	int i,num,k;
	
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	system("cls");
	
	for (i=1; i <=num; i=i+1)
	{
	
		for (k=1; k<=num; k=k+1)
		{
			printf("%d",k);
				if (k==i)
					break;	
			
		}
			
		putchar('\n');	
	}	
	
 }
