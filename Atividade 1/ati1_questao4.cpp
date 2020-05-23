#include <stdio.h>
#include <stdlib.h>

main(){
	int numero; 
	
	printf("Digite um numero inteiro: ");
	scanf("%d",&numero);
	
	if (numero >100)
		printf("\nEsse numero e maior que 100");
	else if (numero <100)
		printf("\nEsse numero e menor que 100");
	else if (numero ==100)
		printf("\nEsse numero e igual a 100");
}

