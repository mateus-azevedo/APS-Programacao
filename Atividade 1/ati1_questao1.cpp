/*
	           NOMES                  MATRICULA
	RHUAN GONZAGA CUNHA FRANCISCO    2020100052
	VINICIUS SILVA DE OLIVEIRA       2020101398
	MATEUS SANTOS DE AZEVEDO         2020100086 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main (){
	char nome[31], cpf[12], idade[4], sexo[11], endereco[100], telefone[15], celular[15];
	
	setlocale(LC_ALL,"");

	printf("Insira seu nome: "); fgets(nome, 30, stdin);
	printf("Insira seu CPF (somente numeros): "); scanf("%s", &cpf);
	printf("Insira sua idade: "); scanf("%s", &idade);
	printf("Insira seu sexo: "); scanf("%s", &sexo);
	
	int c;
	while ((c = getchar()) != '\n' && c != EOF){} //Limpa o Buffer do Teclado
	
	printf("Insira seu endereço: "); fgets(endereco, 100, stdin);
	printf("Insira seu telefone: "); scanf("%s", &telefone);
	printf("Insira seu celular: "); scanf("%s", &celular);	
	
	printf("\n---|---|---DADOS USUÁRIO---|---|---\n");
	
	printf("\nNOME: %s", nome);
	printf("CPF: %s", cpf);
	printf("\n\nIDADE: %s", idade);
	printf("\nSEXO: %s", sexo);
	printf("\nENDEREÇO: %s", endereco);
	printf("\nTELEFONE: %s", telefone);
	printf("\nCELULAR: %s", celular);
}
