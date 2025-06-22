#include "stdio.h"

int main()
{
	int torreMov = 5;
	int bispoMov = 5;
	int rainhMov = 8;
	int cavaBMov = 2;
	int cavaDMov = 1;

	printf(" > Movimentação TORRE <\n");
	for (int i = 0; i < torreMov; i++) {
		printf("Direita\n");
	}

	printf("\n");

	printf(" > Movimentação BISPO < \n");
	for (int i = 0; i < bispoMov; i++) {
		printf("Cima, Direita\n");
	}

	printf("\n");
	printf(" > Movimentação RAINHA < \n");
	for (int i = 0; i < rainhMov; i++) {
		printf("Esquerda\n");
	}

	printf("\n");

	printf("Movimento do Cavalo:\n");
	for (int j = 0; j < cavaBMov; j++) {
		printf("Baixo\n");

		if (j == cavaBMov - 1) {
			int k = 0;
			while (k < cavaDMov) {
				printf("Esquerda\n");
				k++;
			}
		}
	}
	return 0;
}