/*
	           NOMES                  MATRICULA
	RHUAN GONZAGA CUNHA FRANCISCO    2020100052
	VINICIUS SILVA DE OLIVEIRA       2020101398
	MATEUS SANTOS DE AZEVEDO         2020100086 
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int number, menor = INT_MAX, maior = INT_MIN, soma = 0, media;

 int num_menor(int x){
 	if(x < menor){
		menor =  x;
	}
		return menor;
}

 int num_maior(int x){
	if(x > maior){
		maior = x;
	}
		return maior;
}

 int num_soma(int x){
	soma += x;
	
	return soma;
}

 int num_media(int x, int y){
	media = x / y;
	
	return media;
}

main(){
	int contador; setlocale(LC_ALL,"");
	
	number = 1;

	for(contador = 1; number != 0; contador += 1){
		system("cls");		
		printf("Digite um numero(Se deseja encerrar digite 0): "); scanf("%d", &number);
		
		if (number == 0)
			printf("\nFoi Digitado o número 0, ele não será contabilizado e encerrará o programa\n");			
		else{
			menor = num_menor(number);
			maior = num_maior(number);
			soma = num_soma(number);
			media = num_media(soma, contador);
		}				
		
		if(number == 0){
			if(contador == 1){
				printf("\nMenor numero: INVALID VALUE\nMaior numero: INVALID VALUE\nSoma: INVALID VALUE\nMedia: INVALID VALUE\n\n");
			}
			else{
				printf("\nMenor numero: %d\nMaior numero: %d\nSoma: %d\nMedia: %d\n\n", menor, maior, soma, media);
			}
		}		
		else{
			printf("\nMenor numero: %d\nMaior numero: %d\nSoma: %d\nMedia: %d\n\n", menor, maior, soma, media);
		}
		
		system("pause");			
	}
}

