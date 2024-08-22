#include <stdio.h>

int main(){
	int ano,mes,dias,idade;
	printf("Quantos anos de vida:\n");
	scanf("%d",&ano);
	printf("Quantos meses de vida:\n");
	scanf("%d",&mes);
	printf("Quantos dias de vida:\n");
	scanf("%d",&dias);
	idade = (ano * 365) + (mes * 30) + dias;
	printf ("Esta e a sua idade em dias: %d",idade);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
