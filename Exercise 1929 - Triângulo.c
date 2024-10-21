#include <stdio.h>

// Função para verificar se três lados podem formar um triângulo
int formatriangulo(int a, int b, int c)
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// Função para identificar se é possivel formar um triangulo com algum dos lados
int verificarTriangulo(int lado1, int lado2, int lado3, int lado4)
{
    if (formatriangulo(lado1, lado2, lado3) ||
        formatriangulo(lado1, lado2, lado4) ||
        formatriangulo(lado1, lado3, lado4) ||
        formatriangulo(lado2, lado3, lado4))
    {
        return 1; //  possível formar um triângulo
    }
    else
    {
        return 0; //não é possível formar um triângulo)
    }
}

int main(int argc, char const *argv[])
{
    int lado1, lado2, lado3, lado4;
    scanf("%d %d %d %d", &lado1, &lado2, &lado3, &lado4);

    // Verificar se é possível formar um triângulo
    if (verificarTriangulo(lado1, lado2, lado3, lado4))
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}