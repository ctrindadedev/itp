// Ler um vetor A[100], mostrar
#include <stdio.h>
//  todas as posições do vetor que amazenam um valor menor ou igual a 10, e o valor armazenado
int main(int argc, char const *argv[])
{
    double vetor[100];
    int i;
    for (i = 0; i < 100; i++)
    {
        scanf("%lf", &vetor[i]);
    }
    for (i = 0; i < 100; i++)
        {
            if (vetor[i] <= 10)
            {
                printf("A[%d] = %.1lf\n", i, vetor[i]);
            }
        }
    return 0;
}

