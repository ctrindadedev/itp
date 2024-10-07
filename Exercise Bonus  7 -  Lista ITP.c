#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n1, resto, reverse = 0, original = 0;
    scanf("%d", &n1);
    original = n1;
    while (n1 != 0)
    {
        resto = n1 % 10;
        reverse = reverse * 10 + resto;
        n1 /= 10;
    }
    if (reverse == original && reverse % 2 == 0)
    {
        printf("%d é Palíndromo e par.\n", reverse);
    }
    if (reverse == original && reverse % 2 != 0)
    {
        printf("%d é Palíndromo e impar.\n", reverse);
    }
    if (reverse != original && original % 2 == 0)
    {
        printf("%d não é Palíndromo e par.\n", original);
    }
    if (reverse != original && original % 2 != 0)
    {
        printf("%d não é Palíndromo e impar.\n", original);
    }

    return 0;
}