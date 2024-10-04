#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, count;
    scanf("%d", &count);
    if (count % 2 != 0)
    {
        count = count -1;
    }
    for (i = 2; i <= count ; i = i + 2)
    {

        printf("%d^2 = %d\n", i, i*i);
    }
    return 0;
}