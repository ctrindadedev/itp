#include <stdio.h>
#include <stdlib.h>
// 1007

int main(int argc, char const argv[])
{
    int A, B, C, D, DIFERENCA;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    DIFERENCA = ((A*B) - (C * D));
    printf("DIFERENCA = %d\n", DIFERENCA);
    return 0;
}
