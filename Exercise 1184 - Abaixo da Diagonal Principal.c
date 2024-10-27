#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Ler operação
    char operacao;
    scanf("%c", &operacao);
    // Definindo a matriz e seus elementos
    double m[12][12];
    int j, i;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }
    // Somando somente os elementos acima da diagonal principal
    double soma = 0.0;
    double elementos = 0.0;
    for (j = 0; j < 12; j++)
    {
        for (i = j+1; i < 12; i++)
        {
            soma += m[i][j];
            elementos++;
        }
    }
    if (operacao == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else
        printf("%.1lf\n", soma / elementos);
    return 0;
}