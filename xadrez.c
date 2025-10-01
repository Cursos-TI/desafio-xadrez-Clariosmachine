#include <stdio.h>

// Desafio de Xadrez - MateCheck

// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
// Constantes movidas para cima, assim elas podem ser usadas pelas funcoes
const int CASAS_TORRE = 5;
const int CASAS_BISPO_DIREITA = 5;
const int CASAS_BISPO_CIMA = 5;
const int CASAS_RAINHA = 8;
//Desafio nível aventureiro
const int CASAS_CAVALO_DIREITA = 1;
const int CASAS_CAVALO_CIMA = 2;

void movimentaTorre(int casasTorre){  // o parâmetro será compreendido com o argumento passado a ele. Nesse caso, uma constante na chamada da funcao
    if (casasTorre > 0)  // Quando a condicao nao corresponder, a funcao sera finalizada
    {
        movimentaTorre(casasTorre -1);  // Executando a funcao com decremento antes, assim a ultima chamada dela sera executada primeiro
        printf("Torre deu %d passos para a direita.\n", casasTorre);
        if (casasTorre == CASAS_TORRE)
        {
            printf("A Torre finalizou o movimento de %d casas para a direita. \n\n", casasTorre);
        }
    } 
}

void movimentaRainha(int casasRainha){
    if (casasRainha > 0)
    {
        movimentaRainha(casasRainha -1);
        printf("A Rainha foi movida %d casas para a esquerda. \n", casasRainha);
    }
    if (casasRainha == CASAS_RAINHA){
        printf("A Rainda finalizou o movimento de %d casas para a esquerda. \n\n", casasRainha);
    }
    
}

void movimentaBispo(int bispoDireita, int bispoCima){
    if (bispoDireita > 0)
    {
        movimentaBispo(bispoDireita -1, bispoDireita);
        printf("O Bispo foi movido %d casas para a direita.\n", bispoDireita);
        if (bispoDireita == CASAS_BISPO_DIREITA)  // A recursividade só executa o for no último passo do movimento orizontal
        {
            for (int contador = 1; contador <= CASAS_BISPO_CIMA; contador++)
            // Um for dentro da recursividade, que também é um tipo de loop
            {
                printf("O Bispo foi movido %d casas para cima.\n", contador);
            }
            printf("Fim do movimento do Bispo.\n\n");
        }
        
    }
    
}

int main() {

    // MOVIMENTO TORRE
    /* // Como era antes das funções recursivas:
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
    */
    // MOVIMENTO TORRE COM FUNÇAO RECURSIVA
    movimentaTorre(CASAS_TORRE);

    // MOVIMENTO BISPO
    // Antes da recursiva:
    /*
    int contagem = 1;
    do{
        printf("Bispo deu um passo para a direita e um pra cima. \n");
        printf("Total de %d passos pra direita e %d passos pra cima\n", contagem, contagem);
        contagem++;
    } while(contagem <= CASAS_BISPO_CIMA);
    contagem--;  // Pra deixar o valor igual a quantidade de casas movidas
    printf("Bispo completou o movimento de %d passos pra direita %d passos pra cima. \n\n", contagem, contagem);
    */
    // Bispo com recursividade:
    movimentaBispo(CASAS_BISPO_DIREITA, CASAS_BISPO_CIMA);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    /* // Como era antes da recursividade:
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
    */
    // MOVIMENTO RAINHA COM RECURSIVIDADE:
    movimentaRainha(CASAS_RAINHA);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    //const int CASAS_CAVALO_ESQUERDA = 1;
    //const int CASAS_CAVALO_BAIXO = 2;
    /* // Movimento do cavalo antes do loop complexo:
    
    for (int movimento_baixo = 0; movimento_baixo <= CASAS_CAVALO_BAIXO; movimento_baixo++)
    {
        
        while (movimento_baixo < CASAS_CAVALO_BAIXO) 
        {
            movimento_baixo++;
            printf("O cavalo se movimentou um passo para baixo.\n");
            printf("%d passo dado.\n", movimento_baixo);
            //printf("Dentro do While \n");

        }

        if (movimento_baixo == 2)
        {
            printf("O cavalo se movimentou %d passo para a esquerda.\n", CASAS_CAVALO_ESQUERDA);
        } else {
            printf("Não movimenta esquerda. \n");
        }

        printf("Fim do loop do cavalo. \n");
    }
    */
    // Movimento do cavalo com loop complexo
    for(int cima = 1, direita = 1; cima <= CASAS_CAVALO_CIMA; cima++){
        printf("O cavalo deu %d passo para cima. \n", cima);
        if (cima == 2)
        {
            printf("O cavalo deu %d passo para a direita. \n", direita);
            printf("Fim do movimento do cavalo.\n");
        }
        
    }


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
