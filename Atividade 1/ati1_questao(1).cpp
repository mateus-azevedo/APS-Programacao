#include <stdio.h>
#include <stdlib.h>

main (){
	char nome[20], sexo[9], endereco[100], cpf[11], idade[2], telefone[9], celular[9];

	printf("Insira seu nome: "); scanf("%s", &nome);
	printf("Insira seu CPF (somente numeros): "); scanf("%s", &cpf);
	printf("Insira sua idade: "); scanf("%s", &idade);
	printf("Insira seu sexo: "); scanf("%s", &sexo);
	printf("Insira seu endereco: "); scanf("%s", &endereco);
	printf("Insira seu telefone: "); scanf("%s", &telefone);
	printf("Insira seu celular: "); scanf("%s", &celular);	
	
	printf("\n---|---|---|---|---|---");
	
	printf("\n\nSeu nome eh: %s", &nome);
	printf("\nSeu CPF eh: %s", &cpf);
	printf("\nSua idade eh: %s", &idade);
	printf("\nSeu sexo eh: %s", &sexo);
	printf("\nSeu endereco eh: %s", &endereco);
	printf("\nSeu telefone eh: %s", &telefone);
	printf("\nSeu celular eh: %s", &celular);
}
