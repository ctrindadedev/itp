// Programa que dado um inteiro ele imprima no formato de um X
// Na quantidade de linhas -1 do inteiro, com a letra selecionada.
#include <stdio.h>
int main(int argc, char const *argv[])
{

    int n;
    char letra;
    scanf("%d", &n);
    scanf(" %c", &letra); // O espaço antes de %c é para consumir o caractere de nova linha
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (j == i || j == (n - 2 - i))
            {
                printf("%c", letra);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}