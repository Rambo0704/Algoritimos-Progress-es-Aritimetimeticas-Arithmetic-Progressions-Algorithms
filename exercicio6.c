#include <stdio.h>

int main(){
	
	float custo_novo,custo_fabrica;
	printf("Custo de Fabrica do carro:\n");
	scanf("%f",&custo_fabrica);
	

	custo_novo = custo_fabrica + (custo_fabrica*28/100)+ (custo_fabrica * 45/100);
	printf("O Custo final do carro:");
	printf("%2.f\n",custo_novo);
	
	
	
	
	
	return 0;
}
