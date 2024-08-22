#include <stdio.h>

int main(){
	
	float c,f;
	
	printf("Digite a temperatuea em graus Fahrenheit:\n");
	scanf("%f",&f);
	
	c=(f-32)*5/9;
	
	printf("A Temperatura em graus Celsius e: %2.f \n",c);
	
	return 0;
}
