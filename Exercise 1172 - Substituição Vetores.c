// Programa que lê um vetor com 10 entradas e identifica os números negativos para substituir por 1
#include <stdio.h>
// Função Principal
int main(int argc, char const *argv[])
{
    int i, vetor[10], senegativo;
    for (i = 0; i < 10; i++)
    {
        scanf("%d ", &vetor[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (vetor[i] <= 0)
        {
           vetor[i] = 1;
        }
        printf("X[%d] = %d\n", i, vetor[i]);
    }
    
    return 0;
}
