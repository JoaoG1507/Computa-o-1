#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	int random = rand() %500 + 1;
	int guess;
	int tries = 0;


	printf("Adivinhe o numero aleatorio sorteado entre 1 e 500!\n");
	printf("Digite sua tentativa: ");
	scanf("%d", &guess);
	tries++;

	while(guess != random) {
		if(guess > random) {
			printf("Tente um numero mais baixo!\n");
		} else {
			printf("Tente um numero mais alto!\n");
		}


		printf("Tente novamente:");
		scanf("%d", &guess);
		tries++;
	}


	printf("Voce acertou o numero apos %d tentativas. Parabens!!!\n", tries);

	if (tries <= 3)
	{
		printf("Voce foi excelente!\n");
	} else if (tries <= 6) {
		printf("Voce foi otimo!\n");
	} else if(tries <= 10) {
		printf("Voce foi bom\n");
	} else {
		printf("Voce poderia ter ido melhor");
	}

	return 0;
}
