#include <stdio.h>

int main(int argc, char const *argv[])
{
int i, num, par = 0;
for (i = 0; i < 5; i++)
{
    scanf("%d", &num);
    if (num%2 == 0)
    {
        par++;
    }
}
printf("%d valores pares\n", par);
    return 0;

}