#include <stdio.h>

// Função recursiva para mover a torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover o bispo (e também usando loops aninhados)
void moverBispo(int casas) {
    if (casas == 0) return;

    for (int i = 0; i < 1; i++) { // Loop horizontal (1 passo)
        printf("Cima, Direita\n");
    }

    moverBispo(casas - 1); // Chamada recursiva
}

// Função recursiva para mover a rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento complexo do cavalo: 2 pra cima, 1 pra direita
void moverCavaloComplexo(int vert, int hori) {
    printf("Movimento do Cavalo:\n");
    for (int i = 0, v = 0; i < vert + 2; i++) {
        if (v >= vert) break;
        if (i % 2 == 0) {
            printf("Cima\n");
            v++;
        }
        else {
            continue; // simula o pulo
        }

        for (int j = 0, h = 0; j < hori + 2; j++) {
            if (h >= hori) break;
            if (j == 0) {
                printf("Direita\n");
                h++;
            }
        }
    }
}

int main() {
    int torreMov = 5;
    int bispoMov = 5;
    int rainhaMov = 8;
    int cavaloVert = 2;
    int cavaloHori = 1;

    printf(" > Movimentação TORRE <\n");
    moverTorre(torreMov);

    printf("\n");

    printf(" > Movimentação BISPO < \n");
    moverBispo(bispoMov);

    printf("\n");

    printf(" > Movimentação RAINHA < \n");
    moverRainha(rainhaMov);

    printf("\n");

    moverCavaloComplexo(cavaloVert, cavaloHori);

    return 0;
}
