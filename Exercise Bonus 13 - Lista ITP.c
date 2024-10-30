//Questão Criptografia
#include <stdio.h>
#include <string.h>

#define TAM_S 40

const char S[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                  'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                  'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
                  'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?', ' '};

int findIndex(char ch)
{
    for (int i = 0; i < TAM_S; i++)
    {
        if (S[i] == ch)
        {
            return i;
        }
    }
    return -1;
}

int findKey(char *C, char *KP, int *K)
{
    int lenC = strlen(C);
    int lenKP = strlen(KP);

    for (int i = 0; i <= lenC - lenKP; i++)
    {
        int chave_temp[4] = {0};
        int eh_valida = 1;

        for (int j = 0; j < lenKP; j++)
        {
            int indexC = findIndex(C[i + j]);
            int indexKP = findIndex(KP[j]);
            if (indexC == -1 || indexKP == -1)
            {
                return 0;
            }
            int deslocamento = (indexC - indexKP + TAM_S) % TAM_S;
            if (j < 4)
            {
                chave_temp[j] = deslocamento;
            }
            else
            {
                if (deslocamento != chave_temp[j % 4])
                {
                    eh_valida = 0;
                    break;
                }
            }
        }

        if (eh_valida)
        {
            int inicio = i % 4;
            for (int j = 0; j < 4; j++)
            {
                K[j] = chave_temp[(j + inicio) % 4];
            }
            return 1;
        }
    }
    return 0;
}

void decryptMessage(char *C, int *K, char *decifrada)
{
    int lenC = strlen(C);

    for (int i = 0; i < lenC; i++)
    {
        int indexC = findIndex(C[i]);
        if (indexC == -1)
        {
            decifrada[i] = C[i];
        }
        else
        {
            int deslocamento = (indexC - K[i % 4] + TAM_S) % TAM_S;
            decifrada[i] = S[deslocamento];
        }
    }
    decifrada[lenC] = '\0';
}

int main()
{
    char C[201];
    int K[4];
    char KP[] = "QUE A FORCA ESTEJA COM VOCE";
    char decifrada[201];

    fgets(C, 201, stdin);
    C[strcspn(C, "\n")] = '\0';

    if (findKey(C, KP, K))
    {
        for (int i = 0; i < 4; i++)
        {
            printf("%d", K[i]);
        }
        printf("\n");

        decryptMessage(C, K, decifrada);
        printf("%s\n", decifrada);
    }
    else
    {
        printf("Mensagem nao e da Resistencia!\n");
    }

    return 0;
}