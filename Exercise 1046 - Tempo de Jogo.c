#include <stdio.h>
#include <stdlib.h>

main(int argc, char const *argv[])
{
    // 1046
    int inicio, fim, duracao;
    scanf("%d %d", &inicio, &fim);
    if (inicio > fim)
    {
        duracao = 24 - (inicio - fim);
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }
    if (fim > inicio)
    {
        duracao = fim - inicio;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }
    if (fim == inicio)
    {
        duracao = 24;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }
    return 0;
}