#include <stdio.h>

int main()
{
	int valor, rs;


	printf("Digite o seu consumo de agua em metros cubicos inteiros:");
	scanf("%d", &valor);
	if(valor<=10) {
		printf("O valor da conta de agua eh de 7 Reais");

	}
	else if(valor<=30) {
		printf("O valor da conta da agua eh de %d Reais", valor);
	}
	else if(valor<=100) {
		rs=((valor-10)*2)+7;
		printf("O valor da conta da agua eh de %d Reais", rs );
	}
	else {
		rs=((valor-10)*5)+7;
		printf("O valor da conta da agua eh de %d Reais", rs );
	}


	return 0;
}