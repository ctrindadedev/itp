#include <stdio.h>

int main()
{
    double A, B, C, MEDIA, nota1, nota2, nota3, nota4;
    scanf("%lf %lf %lf", &A, &B, &C);
    nota1 = A * 2;
    nota2 = B * 3;
    nota3 = C * 5;
    nota4 = nota1 + nota2 + nota3;
    MEDIA = nota4 / 10;
    printf("MEDIA = %.1lf\n", MEDIA);
    return 0;
}