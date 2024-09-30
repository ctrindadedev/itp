#include <stdio.h>

int main()
{
    float A, B, MEDIA, nota1, nota2, nota3;
    scanf("%f %f", &A, &B);
    nota1 = A * 3.5;
    nota2 = B * 7.5;
    nota3 = nota1 + nota2;
    MEDIA = nota3 / 11;
    printf("MEDIA = %.5f\n", MEDIA);
    return 0;
}