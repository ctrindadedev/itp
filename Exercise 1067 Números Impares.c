#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, count;
    count = 0;
    scanf("%d", &count);

    for (i = 1; i <= count; i=i+2)
    {
    
        printf("%d\n", i);
    }

    return 0;
}