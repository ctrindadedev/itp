//Programa que recebe 20 valores e a saída inverte a ordem do que foi inserido
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, vetor[20];
    int j = 0;
    for ( i = 0; i < 20; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for ( i = 19; i >= 0; i--)
    {
        printf("N[%d] = %d\n", j, vetor[i]);
            j++;
    }
    return 0;
}
