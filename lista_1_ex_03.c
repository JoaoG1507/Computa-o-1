#include <stdio.h>

int main()
{
	int n;
	float a, b, c, m;

	printf("Digite o numero de casos a serem calculados:");
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		printf("Digite os tres valores:");
		scanf("%f %f %f", &a, &b, &c);

		m = (a*2)+(b*3)+(c*5)/10;
		printf("A media ponderada eh: %.1f\n", m);

	}
	return 0;
}
