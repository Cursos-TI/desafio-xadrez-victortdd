#include <stdio.h>
#include <string.h>

// Função para remover o '\n' que o fgets adiciona ao final da string
void removerQuebraDeLinha(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

int main() {
    // MOVIMENTO DA TORRE: 5 casas para a direita (uso do for)
    int casasTorre = 5;  // número de casas que a Torre vai andar
    printf("=== Movimento da Torre (5 casas para a Direita) ===\n");
    // O for roda exatamente 'casasTorre' vezes, imprimindo "Direita" a cada passo
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // MOVIMENTO DO BISPO: 5 casas na diagonal para cima e à direita (uso do while)
    int casasBispo = 5;      // número de casas que o Bispo vai andar na diagonal
    int contadorBispo = 0;   // contador para o loop while
    printf("=== Movimento do Bispo (5 casas na diagonal Cima-Direita) ===\n");
    // Enquanto o contador for menor que 'casasBispo', continuo imprimindo "Cima, Direita"
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // MOVIMENTO DA RAINHA: 8 casas para a esquerda (uso do do-while)
    int casasRainha = 8;     // número de casas que a Rainha vai andar para a esquerda
    int contadorRainha = 0;  // contador para o loop do-while
    printf("=== Movimento da Rainha (8 casas para a Esquerda) ===\n");
    // O do-while garante que pelo menos uma impressão aconteça antes de checar a condição
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);
    printf("\n");

    // MOVIMENTO DO CAVALO: 2 casas para baixo e 1 casa para a esquerda (uso de loops aninhados)
    // Usamos um for (obrigatório) e um while (ou do-while) dentro dele para criar aninhamento.
    // A lógica para o Cavalo é:
    //   - Primeiro, mover 2 casas para baixo (imprimir "Baixo" duas vezes)
    //   - Depois, mover 1 casa para a esquerda (imprimir "Esquerda" uma vez)
    printf("=== Movimento do Cavalo (2 casas para Baixo, 1 casa para a Esquerda) ===\n");
    // For externo roda uma única vez apenas para permitir aninhar o while dentro
    for (int passo = 0; passo < 1; passo++) {
        int movDown = 2;   // contador para as casas para baixo
        int movLeft = 1;   // contador para a casa para a esquerda

        // Enquanto movDown > 0, imprimimos "Baixo" e decrementamos
        while (movDown > 0) {
            printf("Baixo\n");
            movDown--;
        }
        // Após as duas casas para baixo, movemos uma casa para a esquerda
        while (movLeft > 0) {
            printf("Esquerda\n");
            movLeft--;
        }
    }

    return 0;
}