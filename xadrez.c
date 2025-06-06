#include <stdio.h>
#include <string.h>

// Eu criei esta função para remover o '\n' que o fgets deixa no final da string.
void removerQuebraDeLinha(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

// Eu implementei a recursão para mover a Torre 'steps' casas para a direita.
// Cada chamada imprime "Direita" e reduz 'steps' em 1 até chegar a zero.
void rec_torre(int steps) {
    if (steps <= 0) {
        return;  // Caso base: não há mais passos
    }
    printf("Direita\n");
    rec_torre(steps - 1);  // Próximo passo recursivo
}

// Eu implementei a recursão para mover o Bispo 'steps' casas na diagonal
// Para cada passo diagonal, uso loops aninhados: o externo para "Cima" e o interno para "Direita".
void rec_bispo(int steps) {
    if (steps <= 0) {
        return;  // Caso base: não há mais passos diagonais
    }
    // Loop aninhado para simular um único passo diagonal
    // Loop externo para o movimento vertical ("Cima")
    for (int v = 0; v < 1; v++) {
        // Loop interno para o movimento horizontal ("Direita")
        for (int h = 0; h < 1; h++) {
            printf("Cima, Direita\n");
        }
    }
    rec_bispo(steps - 1);  // Chamada recursiva para o próximo passo diagonal
}

// Eu implementei a recursão para mover a Rainha 'steps' casas para a esquerda.
// Cada chamada imprime "Esquerda" e reduz 'steps' em 1 até chegar a zero.
void rec_rainha(int steps) {
    if (steps <= 0) {
        return;  // Caso base: não há mais passos
    }
    printf("Esquerda\n");
    rec_rainha(steps - 1);  // Próximo passo recursivo
}

int main() {
    // ------------------------------------------------------
    // 1) MOVIMENTO DA TORRE (recursivo)
    // Eu quero mover a Torre 5 casas para a direita, então defino:
    int casasTorre = 5;
    printf("=== Movimento da Torre (5 casas para a Direita) ===\n");
    rec_torre(casasTorre);  // Chamo a função recursiva da Torre
    printf("\n");

    // ------------------------------------------------------
    // 2) MOVIMENTO DO BISPO (recursivo com loops aninhados)
    // Eu quero mover o Bispo 5 casas na diagonal para cima e à direita, então defino:
    int casasBispo = 5;
    printf("=== Movimento do Bispo (5 casas na diagonal Cima-Direita) ===\n");
    rec_bispo(casasBispo);  // Chamo a função recursiva do Bispo
    printf("\n");

    // ------------------------------------------------------
    // 3) MOVIMENTO DA RAINHA (recursivo)
    // Eu quero mover a Rainha 8 casas para a esquerda, então defino:
    int casasRainha = 8;
    printf("=== Movimento da Rainha (8 casas para a Esquerda) ===\n");
    rec_rainha(casasRainha);  // Chamo a função recursiva da Rainha
    printf("\n");

    // ------------------------------------------------------
    // 4) MOVIMENTO DO CAVALO (loops complexos)
    // Eu preciso mover o Cavalo em "L": 2 casas para cima, depois 1 para a direita.
    // Vou usar um loop for sem condição explícita, junto com continue e break.
    printf("=== Movimento do Cavalo (2 casas para Cima, 1 casa para a Direita) ===\n");

    int countUp = 0;     // Eu conto quantas vezes já imprimi "Cima"
    int countRight = 0;  // Eu conto quantas vezes já imprimi "Direita"

    // Eu uso este for sem condição final, porque vou controlar a saída com break
    for (int i = 0; ; i++) {
        // Se ainda não dei os 2 passos para cima, imprimo "Cima"
        if (countUp < 2) {
            printf("Cima\n");
            countUp++;
            continue;  // Volto ao início do for para verificar novamente
        }
        // Depois de dois "Cima", preciso imprimir um único "Direita"
        if (countRight < 1) {
            printf("Direita\n");
            countRight++;
            break;  // Encerro o for após esse passo horizontal
        }
    }

    return 0;  // Eu finalizo o programa
}