// Programa utilizando vetores que recebe uma lista de nomes de tubarões, recebe n valores (Definido pelo usuário) e idesntifica o tipo de acordo com a entrada.
#include <stdio.h>

const char *nomes_tubaroes[15] = 
{
    "", 
    "Tubarao Branco",
    "Tubarao Touro",
    "Tubarao Cabeca-chata",
    "Tubarao Martelo",
    "Tubarao Azul",
    "Tubarao Galha-preta",
    "Tubarao Cinzento",
    "Tubarao Tigre",
    "Tubarão Baleia",
    "Tubarao Serra",
    "Tubarao Lixa",
    "Tubarao Mako",
    "Tubarao Frade",
    "Tubarao Limão"
    };

// Função para verificar se uma espécie já foi contada
int ja_foi_contada(int especie, int contagem[])
{
    return contagem[especie];
}

int main()
{
    int n; // Número de fotos
    scanf("%d", &n);

    int fotos[n];            // Array para armazenar os tipos de tubarão das fotos
    int contagem[15] = {0}; //Inicialmente a posição de todos está em 0 
    int especies_diferentes = 0; // Contador de espécies diferentes

    // Ler a sequência de fotos
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &fotos[i]);

        // Verificar se a espécie já foi contada
        if (ja_foi_contada(fotos[i], contagem) == 0)
        {
            contagem[fotos[i]] = 1;
            especies_diferentes++;
        }
    }

    // Exibir o número de espécies diferentes
    printf("%d espécies diferentes.\n", especies_diferentes);

    // Exibir o nome das espécies que apareceram nas fotos
    for (int i = 1; i <= 14; i++)
    {
        if (contagem[i] == 1)
        {
            printf("%s\n", nomes_tubaroes[i]);
        }
    }

    return 0;
}