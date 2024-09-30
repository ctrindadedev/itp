#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    double n1, n2, n3, n4, media, notas;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    notas = (n1 * 2) + (n2 * 3) + (n3 * 4) + (n4);
    media = notas / 10;
    if (media >= 7)
    {
        printf("Media: %.1lf\n", media);
        printf("Aluno aprovado.\n");
    }
    else if (media < 5)
    {
        printf("Media: %.1lf\n", media);
        printf("Aluno reprovado.\n");
    }
    else if (media >= 5 && media < 6.9)
    {
        printf("Media: %.1lf\n", media);
        printf("Aluno em exame.\n");
        double notanova, novamedia;
        scanf("%lf", &notanova);
        printf("Nota do exame: %.1lf\n", notanova);
        novamedia = (media + notanova) / 2;
        if (novamedia >= 5)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", novamedia);
        }
        if (novamedia <= 4.9)
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", novamedia);
        }
    }
    return 0;
}