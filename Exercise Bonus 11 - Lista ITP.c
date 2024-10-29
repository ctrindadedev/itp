#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i, quantidepre = 0, quantidadesu = 0;
    char prefixos[10][11]; // até 10 prefixos com 10 caracteres
    char sufixos[10][11];  // até 10 sufixos com 10 caracteres
    char palavra[101];

    // Identificar a quantidade de prefixos à serem escaneados
    scanf("%d", &quantidepre);
    for (i = 0; i < quantidepre; i++)
    {
        scanf("%s", prefixos[i]);
    }

    // Identificar a quantidade de sufixos à serem escaneados
    scanf("%d", &quantidadesu);
    for (i = 0; i < quantidadesu; i++)
    {
        scanf("%s", sufixos[i]);
    }

    // Receber palavras até o usuário digitar -1
    while (1) //Looping Infinito
    {
        scanf("%s", palavra);
        if (strcmp(palavra, "-1") == 0)
        {
            break;
        }

        // Remover prefixo
        for (int i = 0; i < quantidepre; i++)
        {
            int prefix_len = strlen(prefixos[i]);
            if (strncmp(palavra, prefixos[i], prefix_len) == 0)
            { // Verifica se o prefixo está no início da palavra
                memmove(palavra, palavra + prefix_len, strlen(palavra) - prefix_len + 1);
                break; // Para remover apenas o primeiro prefixo encontrado
            }
        }

        // Remover sufixo
        for (int i = 0; i < quantidadesu; i++)
        {
            int suffix_len = strlen(sufixos[i]);
            int word_len = strlen(palavra);
            if (word_len >= suffix_len && strcmp(palavra + word_len - suffix_len, sufixos[i]) == 0)
            { // Verifica se o sufixo está no final da palavra
                palavra[word_len - suffix_len] = '\0';
                break; // Para remover apenas o primeiro sufixo encontrado
            }
        }

        // Exibir a palavra resultante, se não estiver vazia
        if (strlen(palavra) > 0)
        {
            printf("%s\n", palavra);
        }
    }
    return 0;
}
