#include <stdio.h>

    // Função que retorna o preço do produto com base no código
    float preco(int codigo)
{
    switch (codigo)
    {
    case 1001:
        return 1.50;
    case 1002:
        return 2.50;
    case 1003:
        return 3.50;
    case 1004:
        return 4.50;
    case 1005:
        return 5.50;
    }
}

// Função que calcula o total de um produto (preço * quantidade)
float calculototal(int codigo, int quantidade)
{
    return preco(codigo) * quantidade;
}

// Função principal 

int main(int argc, char const *argv[])

{
    int numprodutos, codigo, quantidade;
    float total = 0.0;

    // Lê a quantidade de produtos comprados
    scanf("%d", &numprodutos);

    // Para cada produto, lê o código e a quantidade e acumula o total
    for (int i = 0; i < numprodutos; i++)
    {
        scanf("%d %d", &codigo, &quantidade);
        total += calculototal(codigo, quantidade);
    }

    // Imprime o valor total com duas casas decimais
    printf("%.2f\n", total);

    return 0;
}
