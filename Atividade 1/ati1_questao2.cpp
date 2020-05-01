#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	int numero1, numero2, numero3, soma, media; setlocale(LC_ALL,"");
	
	printf("Informe o primeiro número: "); scanf("%d", &numero1);
	printf("Informe o segundo número: "); scanf("%d", &numero2);
	printf("Informe o terceiro número: "); scanf("%d", &numero3);
	
	soma = numero1 + numero2 + numero3;
	media = soma / 3;
	
	printf("\n\nForam escolhidos os números: %d, %d e %d\nA soma entre eles é %d\nE a média é %d", numero1, numero2, numero3, soma, media);
}
