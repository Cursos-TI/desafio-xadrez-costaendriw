#include <stdio.h>

// --- Constantes para o número de casas a serem movidas ---
const int CASAS_TORRE = 5;  // Define o número de casas que a Torre se moverá para a direita
const int CASAS_BISPO = 5;  // Define o número de casas que o Bispo se moverá na diagonal (superior direita)
const int CASAS_RAINHA = 8; // Define o número de casas que a Rainha se moverá para a esquerda

int main() {
    // --- Movimento da Torre (usando 'for') ---
    printf("Movimento da Torre (%d casas para a direita):\n", CASAS_TORRE); // Imprime um cabeçalho para o movimento da Torre
    // O loop 'for' é ideal quando o número de iterações é conhecido antecipadamente.
    for (int i = 0; i < CASAS_TORRE; i++) { // Inicia o loop 'for'.
                                           // 'int i = 0;': declara e inicializa a variável de controle do loop 'i' em 0.
                                           // 'i < CASAS_TORRE;': condição de continuação do loop (enquanto 'i' for menor que CASAS_TORRE).
                                           // 'i++': incrementa 'i' em 1 após cada iteração.
        printf("Direita\n");              // Imprime a direção do movimento da Torre a cada casa.
    }
    printf("\n"); // Adiciona uma linha em branco para melhor separação visual no console.

    // --- Movimento do Bispo (usando 'while') ---
    printf("Movimento do Bispo (%d casas na diagonal superior direita):\n", CASAS_BISPO); // Imprime um cabeçalho para o movimento do Bispo.
    int casas_movidas_bispo = 0; // Declara e inicializa um contador para as casas movidas pelo Bispo.
    // O loop 'while' é útil quando a condição de parada depende de algo que muda dentro do loop.
    while (casas_movidas_bispo < CASAS_BISPO) { // Inicia o loop 'while'.
                                               // A condição é verificada ANTES de cada iteração.
                                               // O loop continua enquanto 'casas_movidas_bispo' for menor que CASAS_BISPO.
        printf("Cima, Direita\n");             // Imprime a direção do movimento diagonal do Bispo.
        casas_movidas_bispo++;                 // Incrementa o contador de casas movidas pelo Bispo.
    }
    printf("\n"); // Adiciona uma linha em branco para melhor separação visual no console.

    // --- Movimento da Rainha (usando 'do-while') ---
    printf("Movimento da Rainha (%d casas para a esquerda):\n", CASAS_RAINHA); // Imprime um cabeçalho para o movimento da Rainha.
    int casas_movidas_rainha = 0; // Declara e inicializa um contador para as casas movidas pela Rainha.
    // O loop 'do-while' garante que o bloco de código seja executado PELO MENOS UMA VEZ.
    // Adicionamos uma verificação para o caso de CASAS_RAINHA ser 0, embora para este problema seja sempre > 0.
    if (CASAS_RAINHA > 0) { // Verifica se há casas a serem movidas.
        do { // Inicia o bloco de código do loop 'do-while'.
            printf("Esquerda\n");            // Imprime a direção do movimento da Rainha.
            casas_movidas_rainha++;          // Incrementa o contador de casas movidas pela Rainha.
        } while (casas_movidas_rainha < CASAS_RAINHA); // Condição de continuação do loop.
                                                      // Verificada APÓS a execução do bloco de código.
    } else if (CASAS_RAINHA == 0) { // Trata o caso de 0 movimentos para a Rainha.
        printf("Nenhum movimento para a Rainha (0 casas).\n"); // Mensagem informativa.
    }
    printf("\n"); // Adiciona uma linha em branco para melhor separação visual no console.

    return 0; // Indica que o programa foi executado com sucesso.
}
