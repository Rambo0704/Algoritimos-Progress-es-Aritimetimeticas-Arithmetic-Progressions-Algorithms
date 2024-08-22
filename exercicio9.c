#include <stdio.h>

int main(){
	
	float mf,n1,n2,n3;
	
	printf("Digite a nota 1:\n");
	scanf("%f",&n1);
	
	printf("Digite a nota 2:\n");
	scanf("%f",&n2);
	
	printf("Digite a nota 3:\n");
	scanf("%f",&n3);
	
	mf = (2*n1+3*n2+5*n3)/10;
	
	printf("A media final:%f\n",mf);
	
	
	
	return 0;
}
