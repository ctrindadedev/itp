#include <stdio.h>

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int quantidade, total;
    float valor, orcamento;
    total = orcamento = 0;
    while (1) // Também pode ser usado a tecnica do Loop infinito com for (for(;;))
    {
        scanf("%d %f", &quantidade, &valor);
        if (quantidade == -1)
        {
            break;
        }
        total += quantidade;
        orcamento += (quantidade * valor);
    }
    if (total > 0)
    {

        printf("%d %.2f\n", total, orcamento);
    }
    else
    {
        printf("Nenhum item foi inserido.\n");
    }
    return 0;
}