#include<stdio.h>
#include<stdlib.h>

main(){
	int total_numero10_20 = 0, total_maior40 = 0;
	float numeroReal;
	
	do
	{
		puts("\nDigite zero (0) para sair");
		printf("Informe Numeros Reais: "); scanf("%f", &numeroReal);
		system("cls");
		
		if(numeroReal != 0){
			if((numeroReal >= 10) && (numeroReal <= 20)){
				total_numero10_20 += 1;
			}
			else if(numeroReal > 40.5){
				total_maior40 += 1;
			}
		}
		else{
			puts("\t--Programa encerrado--");			
		}
		
		printf("\n Total de numeros entre 10 e 20: %d\n", total_numero10_20);
		printf(" Total de numero acima de 40,5: %d\n", total_maior40);
	}while(numeroReal != 0);
	
	return 0;
}
