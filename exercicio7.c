#include <stdio.h>

int main(){
	
	float salario_final, salario_fixo,venda;
	int comissao,carro;
	printf("Carros Vendidos:\n");
	scanf("%d",&carro);
	
	printf("Valor das vendas:\n");
	scanf("%f",&venda);
	
	printf("Salario fixo:\n");
	scanf("%f",&salario_fixo);
	
	printf("Comissão por Carro:\n");
	scanf("%d",&comissao);
	
	salario_final = salario_fixo + (comissao *carro)+ (venda * 5/100);
	
	printf("O salario final e de: %2.f\n",salario_final);
	
	return 0;
}
