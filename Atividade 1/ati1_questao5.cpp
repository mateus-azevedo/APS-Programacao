#include <stdio.h>
#include <stdlib.h>

main (){
float salario, empres, porc;

printf("Insira seu salario: "); scanf("%f",&salario);
printf("\nInsira o quanto deseja pegar de emprestimo: "); scanf("%f",&empres);

porc = salario * 0.3;

if(empres>porc)
	printf("\n\nEmprestimo nao pode ser concedido");
else{
	printf("\n\nEmprestimo pode ser concedido");
}

}
