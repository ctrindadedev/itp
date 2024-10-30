#include <stdio.h>
#include <string.h>

void buscarPadrao(char *texto, char *padrao)
{
    int lenTexto = strlen(texto);
    int lenPadrao = strlen(padrao);
    int encontrou = 0;

    for (int i = 0; i <= lenTexto - lenPadrao;)
    {
        int correspondenciaCompleta = 1;
        int salto = 1; //Numero de posições que i deve avançar caso o padrão não corresponda na posição atual.

        for (int j = 0; j < lenPadrao; j++)
        {
            printf("%c ", texto[i + j]);
            if (texto[i + j] != padrao[j])
            {
                correspondenciaCompleta = 0;

                int found_in_pattern = 0;
                for (int k = 0; k < lenPadrao; k++)
                {
                    if (texto[i + j] == padrao[k])
                    {
                        found_in_pattern = 1;
                        break;
                    }
                }

                if (!found_in_pattern)
                {
                    salto = j + 1;
                }
                break;
            }
        }
        if (correspondenciaCompleta)
        {
        // Se encontrar o padrão (Mostrar a parte do texto seguido de um sim, e uma mensagem final informando o índice onde foi iniciado o padrão)
            printf("sim\n");
            printf("Achei o padrão no índice %d\n", i);
            encontrou = 1;
            break;
        }
        // Se encontrar diferença (Mostrar qual parte do texto foi comparado, e a letra que está fora do padrão, ambos seguidos por um não), recomeçar o padrão a partir da letra encontrada fora do padrão

        else
        {
            printf("não\n");
        }
        i += salto;
    }

    if (!encontrou)
    {
        printf("Não achei o padrão\n");
    }
}

int main()
{
    char texto[51], padrao[51];
    scanf("%s", texto);
    scanf("%s", padrao);

    buscarPadrao(texto, padrao);
    return 0;
}