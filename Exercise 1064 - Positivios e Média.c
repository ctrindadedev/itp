#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, positivo = 0;
    float numero, media, contador;
    for (i = 1; i < 7; i++)
    {
        scanf("%f", &numero);
        if (numero > 0)
        {
            positivo++;
            contador += numero; // "+=" Serve como uma função de somatório.
        }
    }
    media = contador/positivo;
    printf("%d valores positivos\n", positivo);
    printf("%.1f\n", media);
    return 0;
}
