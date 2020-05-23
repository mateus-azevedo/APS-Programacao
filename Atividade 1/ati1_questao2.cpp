#include <stdio.h>
#include <stdlib.h>

main(){
	int numero,numero2,numero3;
	float media;
	
	printf("Informe o primeiro numero: ");
	scanf("%d",&numero);
	printf("Informe o segundo numero: ");
	scanf("%d",&numero2);
	printf("Informe o terceiro numero: ");
	scanf("%d",&numero3);
	
	media= (numero+numero2+numero3)/3;
	printf("\n--------------DADOS----------------");
	printf("\n\nOs numeros escolhidos foram: %d ,%d ,%d",numero,numero2,numero3);
	printf("\nA soma desses tres numeros e: %d",numero+numero2+numero3);
	printf("\nA media dos numeros e: %.2f",media);
}

