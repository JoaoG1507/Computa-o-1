#include <stdio.h>
#include <math.h>

int main()
{
	double n1, n2, n3;
	double A, P, G, H;
	char dig;

	printf("Escolha a media e digite o caractere equivalente\nA- Aritmetica\nP- Ponderada\nH- Harmonica\nG- Geometrica\n\n");
	scanf("%c", &dig);

	if (dig!='A'&& dig!='P'&& dig!='G'&& dig!='H' )
	{
		printf ("Selecione uma opcao viavel");
		return 0;}

		printf("\nDigite o primeiro valor:");
		scanf("%lf", &n1);
		printf("\nDigite o segundo valor:");
		scanf("%lf", &n2);
		printf("\nDigite o terceiro valor:");
		scanf("%lf", &n3);

		A=(n1+n2+n3)/3;
		P=(n1+(n2*2)+(n3*3))/6;
		G=cbrt(n1*n2*n3);
		H=3/((1/n1)+(1/n2)+(1/n3));

		if (dig=='A')
			printf ("O resultado eh: %2lf", A);
		if (dig=='P')
			printf ("O resultado eh: %2lf", P);
		if (dig=='G')
			printf ("O resultado eh: %2lf", G);
		if (dig=='H')
			printf ("O resultado eh: %2lf", H);
		return 0;
	}