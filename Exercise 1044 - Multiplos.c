#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a % b == 0)
    {
        printf("Sao Multiplos\n");
    }
    else if (b % a == 0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
    return 0;
}