/*
	           NOMES                  MATRICULA
	RHUAN GONZAGA CUNHA FRANCISCO    2020100052
	VINICIUS SILVA DE OLIVEIRA       2020101398
	MATEUS SANTOS DE AZEVEDO         2020100086 
*/
#include <stdio.h>
#include <stdlib.h>

main (){
	float numero=1, total_10, total_40;
	
	while(numero!=0){
		printf("INSIRA UM NUMERO OU PRESSIONE 0 PARA ENCERRAR: "); scanf("%f", &numero);
		
		if((numero>=10)&&(numero<=20))
		total_10++;
		
		else if(numero>40.5)
		total_40++;
	} 
	system("cls");
	printf("TOTAL DE NUMEROS ENTRE 10 E 20: %1.0f", total_10);
	printf("\n\nTOTAL DE NUMEROS MAIORES DO QUE 40.5: %1.0f", total_40);
}
