#include <stdio.h>

int main()
{
	float n1, n2;

	printf("Digite o primeiro valor:");
	scanf("%f", &n1);
	printf("Digite o segundo valor:");
	scanf("%f", &n2);
	printf("A soma dos valores é:");
	printf("%.2f", n1+n2);
	
    
	return 0;
}