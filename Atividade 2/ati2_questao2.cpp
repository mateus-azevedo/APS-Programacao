#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	int rep, cont, numero[101], avaliador = 0; setlocale(LC_ALL,"");
	
	printf("Quantas vezes quer testar? (Limite de 100 vezes): "); scanf("%d", &rep);
	
	for(cont = 1; cont <= rep; cont++){
		system("cls");
		puts("Para sair digite qualquer n�mero negativo");
		printf("Valor do N�mero %d: ", cont); scanf("%d", &numero[cont]);
				
		if(numero[cont] >= 0){
			if(numero[cont] % 3 == 0){
				avaliador++;
			}
		}
		else{
			break;
		}
	}
	printf("\n%d n�meros s�o multiplos de 3", avaliador);
}
