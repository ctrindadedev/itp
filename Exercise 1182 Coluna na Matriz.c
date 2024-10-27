#include <stdio.h>
int main(int argc, char const *argv[])
{
    double m[12][12];
    int coluna, i, j;
    char operacao;
    scanf("%d %c", &coluna, &operacao);
    // Escaneando todos elementos da matriz
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }
    double soma = 0.0;
    for (i = 0; i < 12; i++)
    {
        soma += m[i][coluna];
    }
    if (operacao == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else
        printf("%.1lf\n", soma / 12.0);

    return 0;
}
