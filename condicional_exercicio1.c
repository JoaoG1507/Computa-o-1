#include <stdio.h>

int main()
{
	int alunos, monitores;
	printf("Insira o nC:mero de alunos: ");
	scanf("%d", &alunos);
	printf("Insira o nC:mero de monitores: ");
	scanf("%d", &monitores);
	if(alunos+monitores<=50)
	{
		printf("Um bondinho serC! suficiente");
	}
	else
	{
		printf("SerC! necessC!rio mais do que um bondinho");
	}
	return 0;
}