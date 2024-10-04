// Recebe descrição de quantidade e valor, respectivamente
//  Recebe informações até o valor -1 ser inserido
// Saída deve apresentar a quantidade total de elementos
// Em seguida, o valor total de orçamento
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int valor, quantidade, total, orcamento;
    total = orcamento = 0;
    while (1) //Também pode ser usado a tecnica do Loop infinito com for (for(;;))
    {
    scanf("%d %d", &quantidade, &valor);
    if (quantidade == -1)
    {break;}
    total += quantidade;
    orcamento += (quantidade * valor);
    }
    if (total>0)
    {

        printf("%d %d\n", total, orcamento / total);
    }
    else
    {
    printf("Nenhum item foi inserido.\n");
    }
    printf("%d %d", total, orcamento / total);
    return 0;
}
