#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	int numero1, numero2, numero3, soma, media; setlocale(LC_ALL,"");
	
	printf("Informe o primeiro n�mero: "); scanf("%d", &numero1);
	printf("Informe o segundo n�mero: "); scanf("%d", &numero2);
	printf("Informe o terceiro n�mero: "); scanf("%d", &numero3);
	
	soma = numero1 + numero2 + numero3;
	media = soma / 3;
	
	printf("\n\nForam escolhidos os n�meros: %d, %d e %d\nA soma entre eles � %d\nE a m�dia � %d", numero1, numero2, numero3, soma, media);
}
