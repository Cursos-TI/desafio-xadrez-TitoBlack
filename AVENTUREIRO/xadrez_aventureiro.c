#include <stdio.h>

int main() {

    printf("Você moveu a torre...\n");

    //movimentação da torre andando 5 casas para a direita.
    for (int i = 1; i <= 5; i++)
    {
        printf("Uma casa pra direita.\n");
    }
    
    printf("\n");
    printf("O outro jogador moveu o bispo...\n");

    //movimentação do bispo andando 5 casas na diagonal (cima, direita).
    for (int i = 1; i <= 5; i++) 
    {
        printf("Uma casa na diagonal (cima, direita).\n");
    }

    printf("\n");
    printf("Você moveu a rainha...\n");

    //movimentação da rainha andando 8 casas para a esquerda.
    for (int i = 1; i <= 8; i++)
    {
        printf("Uma casa pra esquerda.\n");
    }

    printf("\n");
    printf("O outro jogador moveu o cavalo...\n");

    //movimentação do cavalo realizando um L pra baixo e pra esquerda.
    for (int i = 0; i < 1; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            printf("Para Baixo\n");
        }

        printf("E Para Esquerda\n");
    }

    return 0;
}