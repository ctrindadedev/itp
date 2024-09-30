// Pontos de um plano
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int x1, x2, y1, y2, y3, x3;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);
    if (x1 <= x3 && x3 <= x2 && y1 <= y3 && y3 <= y2)
    {
        printf("Dentro!\n");
    }
    else
    {
        printf("Fora!\n");
    }

    return 0;
}
