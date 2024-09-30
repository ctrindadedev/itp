#include <stdio.h>

int main()
{
    int dist;
    float comb, cons;
    scanf("%d %f", &dist, &comb);
    cons = dist / comb;
    printf("%.3f km/l\n", cons);

    return 0;
}