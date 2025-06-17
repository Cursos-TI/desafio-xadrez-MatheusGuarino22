#include <stdio.h>
// ======================================
// Função recursiva para movimento da TORRE
// ======================================
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}
// ======================================
// Função recursiva para movimento da RAINHA
// ======================================
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}
// ======================================
// Função recursiva com loops aninhados para o BISPO
// ======================================
void moverBispo(int casas) {
    if (casas == 0) return;

    for (int vertical = 0; vertical < 1; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}
// ======================================
// Movimento do CAVALO: 2 casas para cima, 1 para a direita
// Usando loops aninhados com múltiplas variáveis
// ======================================
void moverCavalo(int movimentos) {
    printf("Movimento do Cavalo:\n");

    for (int m = 0; m < movimentos; m++) {
        // Primeiro loop para movimento vertical
        for (int cima = 0; cima < 2; cima++) {
            printf("Cima\n");
        }

        // Segundo loop para movimento horizontal
        for (int direita = 0; direita < 1; direita++) {
            printf("Direita\n");
        }

        printf("\n"); // separa múltiplos "L"
    }
}

int main() {
    // Número de casas ou movimentos
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 1; // Um movimento em L (2 cima + 1 direita)

    // ===========================
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    // ===========================
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);
    // ===========================
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);
    // ===========================
    printf("\n");
    moverCavalo(movimentosCavalo);

    return 0;
}
