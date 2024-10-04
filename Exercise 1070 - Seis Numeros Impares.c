#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, count;
    scanf("%d", &count);
if (count%2==0)
{
    count=count+1;
}
    for (i = count; i <= count + 10; i = i + 2)
    {
    
            printf("%d\n", i);
        }
    return 0;
}