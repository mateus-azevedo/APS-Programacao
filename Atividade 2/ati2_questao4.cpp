#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	float num[10];
	int i, faixa1 = 0, faixa2 = 0, faixa3 = 0;
	
	setlocale(LC_ALL,"");
	
	for(i = 1; i <= 10; i++){
		printf("Insira o %dº número: ", i); scanf("%f", &num[i]);
		
		if((num[i] >= 0) && (num[i] <= 50)){
			faixa1++;
		}
		else if((num[i] >= 100) && (num[i] <= 250)){
			faixa2++;
		}
		else if((num[i] >= 300) && (num[i] <= 400)){
			faixa3++;
		}
	}
	system("cls");
	printf(" NUMEROS EXISTENTES EM CADA FAIXA\n\n  FAIXA 1 (0 ~ 50): %d\n\n  FAIXA 2 (100 ~ 250): %d\n\n  FAIXA 3 (300 ~ 400): %d", faixa1, faixa2, faixa3);
	printf("\n\nNúmeros digitados: 1° = %.f", num[1]);
	
	for(i = 2; i <= 10; i++){
		printf("\n\t\t  %2.d° = %.f", i, num[i]);
	}
}
