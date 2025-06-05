#include <stdio.h>
#include <string.h>

// Função para remover o '\n' que o fgets insere no final da string
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

    return 0;  // finaliza o programa
}