#include <stdio.h>

int main()
{
    double M[12][12];
    int linha;
    char operacao;

    // Ler o número da linha (L) e o tipo de operação (S ou M)
    scanf("%d %c", &linha, &operacao);

    // Ler todos os elementos da matriz M[12][12]
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }

    double soma = 0.0;

    // Calcular a soma dos elementos da linha especificada
    for (int j = 0; j < 12; j++)
    {
        soma += M[linha][j];
    }

    // Realizar a operação com base no caractere recebido
    if (operacao == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else if (operacao == 'M')
    {
        printf("%.1lf\n", soma / 12.0); 
    }

    return 0;
}