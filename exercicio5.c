#include <stdio.h>

int main(){
	
	float salario,percentual,perc_salario;

	printf("Digite o salario mensal:\n");
	scanf("%f",&salario);
	
	printf("Digite o percentual de reajuste:\n");
	scanf("%f",&percentual);
	
	perc_salario=salario*(1+percentual/100);
	
	printf("O salario reajustado: %2.f\n",perc_salario);
	
	
	
	
	return 0;
}
