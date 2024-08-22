#include <stdio.h>

int main(){
	
	int total, brancos, nulos, validos;
	float perc_brancos, perc_nulos, perc_validos;
	
	printf("Digite o Total de eleitores: ");
	scanf("%d", &total);
	
	printf("Digite os votos brancos: ");
	scanf("%d", &brancos);
	
	printf("Digite os votos nulos: ");
	scanf("%d", &nulos);
	
	printf("Digite os votos validos: ");
	scanf("%d", &validos);
	
	perc_brancos = ((float)brancos / total) * 100;
	perc_nulos = ((float)nulos / total) * 100;
	perc_validos = ((float)validos / total) * 100;
	
	printf("O percentual de votos brancos: %.2f%%\n", perc_brancos);
	printf("O percentual de votos nulos: %.2f%%\n", perc_nulos);
	printf("O percentual de votos validos: %.2f%%\n", perc_validos);
	
	return 0;
}

