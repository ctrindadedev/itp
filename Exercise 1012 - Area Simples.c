#include <stdio.h>

int main()
{
    double a, b, c, triang, circulo, trap, quad, ret;
    float pi = 3.14159;
    scanf("%lf %lf %lf", &a, &b, &c);
    triang = (a * c) / 2;
    circulo = (c * c) * pi;
    trap = ((a + b) * c) / 2;
    quad = b * b;
    ret = a * b;
    printf("TRIANGULO: %.3lf\n", triang);
    printf("CIRCULO: %.3lf\n", circulo);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3lf\n", ret);
    return 0;
}