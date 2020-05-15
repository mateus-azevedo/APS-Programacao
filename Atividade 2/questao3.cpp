#include<stdio.h>
#include<stdlib.h>

main(){
	int total_numero10_20 = 0, total_maior40 = 0;
	float numeroReal;
	
	do
	{
		printf("Informe Numeros Reais: "); scanf("%f", numeroReal);
		
		if(numeroReal != 0){
			if((numeroReal >= 10) && (numeroReal <= 20)){
				total_numero10_20 += 1;
			}
			else if(numeroReal > 40.5){
				total_maior40 += 1;
			}
		}
		else{
			break;
		}
		
		printf("Total de numeros entre 10 e 20: ", total_numero10_20);
		printf("Total de numero acima de 40,5: ", total_maior40);
	}while(numeroReal != 0);
}
