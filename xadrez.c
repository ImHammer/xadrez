#include "stdio.h"

int main()
{
	int torreMov = 5;
	int bispoMov = 5;
	int rainhMov = 8;

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

	return 0;
}