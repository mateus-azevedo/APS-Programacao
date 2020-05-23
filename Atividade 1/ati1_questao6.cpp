#include <stdio.h>
#include <stdlib.h>

main(){
	float compra, venda, lucro40, lucro35;
	
	printf("Valor do Produto: "); scanf("%f", &compra);
	
	lucro40 = compra * 0.4;
	lucro35 = compra * 0.35;
	
	if(compra < 30){
		venda = compra + lucro40;
	}
	else{
		venda = compra + lucro35;
	}
	
	printf("Valor da venda: %.2f", venda);
}
