#include<stdio.h>
#include<stdlib.h>

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
	int contador;
	
	number = 1;

	for(contador = 1; number != 0; contador += 1){
		
		printf("Teste: "); scanf("%d", &number);
		
		menor = num_menor(number);
		maior = num_maior(number);
		soma = num_soma(number);
		media = num_media(soma, contador);
		
		printf("\nMenor numero: %d\nMaior numero: %d\nSoma: %d\nMedia: %d\n\n", menor, maior, soma, media);		
	}
}
