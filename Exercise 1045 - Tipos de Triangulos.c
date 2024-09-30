#include <stdio.h>
int main(int argc, char const *argv[])
{
    double a, b, c, temp;
    // É necessário a variavel temporária,
    // para que não aconteça das variavéis ficarem com um unico valor
    scanf("%lf %lf %lf", &c, &b, &a);
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if (a >= (b + c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if ((a * a) == ((b * b) + (c * c)))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if ((a * a) > ((b * b) + (c * c)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if ((a * a) < ((b * b) + (c * c)))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && b == c && a == c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}