#include <stdio.h>

int main()
{
	float base, altura, area, perimetro;
	printf("Insira a base:");
	scanf("%f", &base);
	printf("Insira a altura");
	scanf("%f", &altura);
	if(base*altura>base*2+altura*2)
	{
		printf("A area eh maior do que o perimetro");
	}
	else if(base*altura<base*2+altura*2)
	{
		printf("A area eh menor do que o perimetro");
	}
	else
	{
		printf("Area e perimetro sao iguais");
	}
	return 0;
}