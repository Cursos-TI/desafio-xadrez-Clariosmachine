#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO_DIREITA = 5;
    const int CASAS_BISPO_CIMA = 5;
    const int CASAS_RAINHA = 8;

    // MOVIMENTO TORRE
    for (int passo = 1; passo <= CASAS_TORRE; passo++) {
        printf("A torre se movimentou 1 passo para a direita. \n");
        
        // printf("%d Passo dado \n", passo);
        if(passo == 1){
            printf("%d Passo dado \n", passo);
        }
        else {
            printf("%d Passos dados \n", passo);
        }
    }
    printf("Torre completou o movimento de %d passos para a direita. \n\n", CASAS_TORRE);

    // MOVIMENTO BISPO
    int contagem = 1;
    do{
        printf("Bispo deu um passo para a direita e um pra cima. \n");
        printf("Total de %d passos pra direita e %d passos pra cima\n", contagem, contagem);
        contagem++;
    } while(contagem <= CASAS_BISPO_CIMA);
    contagem--;  // Pra deixar o valor igual a quantidade de casas movidas
    printf("Bispo completou o movimento de %d passos pra direita %d passos pra cima. \n\n", contagem, contagem);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    int passos_rainha = 1;
    while(passos_rainha <= CASAS_RAINHA) {
        printf("Rainha deu um passo pra esquerda. \n");
        if(passos_rainha == 1){
            printf("%d Passo dado \n", passos_rainha);
        }
        else {
            printf("%d Passos dados \n", passos_rainha);
        }
        passos_rainha++;
    }
    passos_rainha--;
    printf("Rainda completou o movimento de %d passos pra esquerda. \n\n", passos_rainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
