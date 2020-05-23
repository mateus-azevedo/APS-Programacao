/*
	           NOMES                  MATRICULA
	RHUAN GONZAGA CUNHA FRANCISCO    2020100052
	VINICIUS SILVA DE OLIVEIRA       2020101398
	MATEUS SANTOS DE AZEVEDO         2020100086 
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float calculo_potencia(float x, int n);

main(){
    float numeroReal, resultado;
    int numeroInteiro;
    char opcao;

    do{

        printf("\nInforme o numero da base: "); scanf("%f", &numeroReal);
        printf("Informe o expoente (enesima potencia): "); scanf("%d", &numeroInteiro);

        resultado = calculo_potencia(numeroReal, numeroInteiro);

        printf("f(%.f,%d) = %.2f", numeroReal, numeroInteiro, resultado);
        printf("\n\nDeseja Continuar? [S/N]: "); scanf(" %c", &opcao);
        system("cls");

    }while((opcao == 'S') || (opcao == 's'));
    
    return 0;
}

float calculo_potencia(float x, int n){
    float potencia;

    potencia = pow(x,n);

    return potencia;
}
