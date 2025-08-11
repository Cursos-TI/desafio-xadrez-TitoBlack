#include <stdio.h>

    void moverTorre(int casas){
        if (casas > 0){
            printf("Direita \n");
            moverTorre(casas - 1);
        }
    }

    void moverBispo(int casas){
        if (casas > 0){
            printf("Cima,Direita \n");
            moverBispo(casas - 1);
        }
    }

    void moverRainha(int casas){
        if (casas > 0){
            printf("Esquerda \n");
            moverRainha(casas - 1);
        }
    }


int main() {

    printf("Você moveu a torre 5 casas para a direita: \n");
    moverTorre(5);
    printf("\n");

    printf("O outro jogador moveu o bispo 5 casas na diagonal direita: \n");
    moverBispo(5);
    printf("\n");

    printf("Você moveu a rainha 8 casas para a esquerda: \n");
    moverRainha(8);
    printf("\n");
   

    printf("O outro jogador moveu o cavalo em L pra direita: \n");

    //movimentação do cavalo realizando um L pra cima e para direita.
    for (int i = 0; i < 1; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            printf("Para Cima\n");
        }

        printf("E Para Direita\n");
    }

    return 0;
}