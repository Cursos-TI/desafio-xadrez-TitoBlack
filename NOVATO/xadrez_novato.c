#include <stdio.h>

int main() {

    printf("Você moveu a torre...\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("Uma casa pra direita.\n");
    }

    printf("O outro jogador moveu o bispo...\n");
    for (int i = 1; i <= 5; i++) 
    {
        printf("Uma casa na diagonal (cima, direita).\n");
    }

    printf("Você moveu a rainha...\n");

    for (int i = 1; i <= 8; i++)
    {
        printf("Uma casa pra esquerda.\n");
    }

    return 0;
}