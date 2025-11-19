#include <stdio.h>

#define TAM 10


float calculaMedia(int vetor[], int tamanho) {
	int soma = 0;
	for(int i = 0; i < tamanho; i++) {
		soma += vetor[i];
	}
	return (float)soma / tamanho;
}

int main() {
	FILE *arquivo;
	int numeros[TAM];
	int vetor[TAM];
	float media;

	fopen("numeros.txt", "w");


	printf("Digite %d numeros inteiros:\n", TAM);
	for(int i = 0; i < TAM; i++) {
		printf("Numero %d: ", i + 1);
		scanf("%d", &numeros[i]);
		fprintf(arquivo, "%d\n", numeros[i]);
	}


	fclose(arquivo);

	fopen("numeros.txt", "r");






	for(int i = 0; i < TAM; i++) {
		fscanf(arquivo, "%d", &vetor[i]);
	}


	fclose(arquivo);


    media = calculaMedia(vetor, TAM);


	printf(" Numeros lidos do arquivo\n");
	for(int i = 0; i < TAM; i++) {
		printf("%d ", vetor[i]);
	}

	printf("\nVetor armazenado\n");
	for(int i = 0; i < TAM; i++) {
		printf("vetor[%d] = %d\n", i, vetor[i]);
	}

	printf("Media calculada: %.2f", media);

	return 0;
}