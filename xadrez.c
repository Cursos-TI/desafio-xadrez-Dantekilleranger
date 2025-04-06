#include <stdio.h>

// ==============================
// Funções Recursivas
// ==============================

// Torre - Movimento apenas para cima e para a direita
void moverTorreCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// Bispo - Recursivo + loops aninhados: vertical (externo), horizontal (interno)
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;

    for (int i = 0; i < vertical; i++) {         // Loop externo - vertical
        for (int j = 0; j < horizontal; j++) {   // Loop interno - horizontal
            printf("Diagonal para cima e direita\n");
        }
    }

    // Chamada recursiva para reduzir os passos diagonais
    moverBispo(vertical - 1, horizontal - 1);
}

// Rainha - Combina movimentos da Torre e do Bispo
void moverRainha(int verticais, int horizontais) {
    // Movimento vertical (como a Torre)
    moverTorreCima(verticais);

    // Movimento horizontal (como a Torre)
    moverTorreDireita(horizontais);

    // Espaço entre seções
    printf("\n");

    // Movimento diagonal (como o Bispo)
    moverBispo(verticais, horizontais);
}

// ==============================
// Cavalo com Loops Complexos
// ==============================

void moverCavalo() {
    // Simulando movimentos para cima e para a direita em "L"
    // 2 casas para cima (i), 1 para direita (j)
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2; j++) {
            if (i == 2 && j == 1) {
                printf("Cavalo: 2 casas para cima, 1 para a direita\n");
                continue;
            }
            if (i + j > 3) break;
        }
    }
}

// ==============================
// Função Principal
// ==============================

int main() {
    // Variáveis definidas no código, conforme exigido
    int casasTorre = 3;
    int casasBispoVertical = 2;
    int casasBispoHorizontal = 2;
    int casasRainhaVertical = 2;
    int casasRainhaHorizontal = 2;

    // ======================
    // Movimento da Torre
    // ======================
    printf("Movimento da Torre:\n");
    moverTorreCima(casasTorre);
    moverTorreDireita(casasTorre);

    printf("\n");

    // ======================
    // Movimento do Bispo
    // ======================
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);

    printf("\n");

    // ======================
    // Movimento da Rainha
    // ======================
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainhaVertical, casasRainhaHorizontal);

    printf("\n");

    // ======================
    // Movimento do Cavalo
    // ======================
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
