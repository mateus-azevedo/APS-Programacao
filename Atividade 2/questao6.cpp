#include<stdio.h>
#include<stdlib.h>

int num_menor(int x);

main(){
	int number, menor;
	
	do
	{
		printf("Teste: "); scanf("%d", &number);
		
		menor = num_menor(number);
		
		printf("Menor numero: %d\n", menor);
		
	}while(number != 0);
}

int num_menor(int x){
	int menor; 
	
	if(x < menor){
		menor =  x;
	}
	return menor;
}
