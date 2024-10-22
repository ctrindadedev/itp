#include <stdio.h>
// Identificar se três valores formam um triângulo, se sim verificar o tipo

// Função para validar se pode formar triângulo
int validar_triangulo(int lado1, int lado2, int lado3)
{
    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1))
    {
        return 1;
    }
    return 0;
}

// Funçao para identificar o tipo do triângulo
int identificador_triangulo(int lado1, int lado2, int lado3)
{
    if (lado1 == lado2 && lado2 == lado3 && lado1 == lado3)
    {
        int identificador = 1; // Equilatero
        return identificador;
    }
    else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
    {
        int identificador = 2; // Isosceles
        return identificador;
    }
    else if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3)
    {
        int identificador = 3; // Escaleno
        return identificador;
    }
}
// Função para identificar se é retângulo
int identificador_retangulo(int lado1, int lado2, int lado3)
{
    if ((lado1 * lado1) == ((lado2 * lado2) + (lado3 * lado3)))
    {
        return 1;
    }
    return 0;
}
// Função principal
int main(int argc, char const *argv[])
{
    int lado1, lado2, lado3, validar, identificar, identificar_r;
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    validar = validar_triangulo(lado1, lado2, lado3);
    identificar = identificador_triangulo(lado1, lado2, lado3);
    identificar_r = identificador_retangulo(lado1, lado2, lado3);
    if (validar == 1)
    {
        switch (identificar)
        {
        case 1:
            printf("Valido-Equilatero\n");
            break;
        case 2:
            printf("Valido-Isoceles\n");
            break;
        case 3:
            printf("Valido-Escaleno\n");
            break;
        }
        if (identificar_r == 1)
        {
            char retangulo = 'S';
            printf("Retangulo: %c\n", retangulo);
        }
        else
        {
            char retangulo = 'N';
            printf("Retangulo: %c\n", retangulo);
        }
    }
    else
    {
        printf("Invalido\n");
    }
    return 0;
}