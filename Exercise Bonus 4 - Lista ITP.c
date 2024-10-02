//Recebe descrição de quantidade e valor, respectivamente 
// Recebe informações até o valor -1 ser inserido
//Saída deve apresentar a quantidade total de elementos
//Em seguida, o valor total de orçamento
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int valor, quantidade, total, orcamento;
    total = orcamento = 0;
    do
    {
        scanf("%d %d", &quantidade, &valor);
        total = quantidade++;
        orcamento = valor++;
    }
    while (quantidade != -1);
    printf("%d %d", total, orcamento);
    return 0;
}
