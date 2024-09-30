#include <stdio.h>

int main()
{

    int tempo, veloc;
    float litros, dist;
    scanf("%d %d", &tempo, &veloc);
    dist = tempo * veloc;
    litros = dist / 12;
    printf("%.3f\n", litros);

    return 0;
}