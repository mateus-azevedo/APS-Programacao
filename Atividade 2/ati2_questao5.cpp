#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float calculo_potencia(float x, int n);

main(){
    float numeroReal, resultado;
    int numeroInteiro;
    char opcao;

    do{

        printf("\nInforme o numero base: "); scanf("%f", &numeroReal);
        printf("Informe o enesima potencia: "); scanf("%d", &numeroInteiro);

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
