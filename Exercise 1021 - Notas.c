#include <stdio.h>

int main()
{
    double valor;
    int conv, notas, moedas;

    scanf("%lf", &valor);

    // Converte o valor para inteiro, multiplicando por 100 para pegar os centavos também
    conv = (int)(valor * 100);

    // Separa notas de moedas
    notas = conv / 100;
    moedas = conv - (notas * 100);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas / 100);
    notas %= 100;
    printf("%d nota(s) de R$ 50.00\n", notas / 50);
    notas %= 50;
    printf("%d nota(s) de R$ 20.00\n", notas / 20);
    notas %= 20;
    printf("%d nota(s) de R$ 10.00\n", notas / 10);
    notas %= 10;
    printf("%d nota(s) de R$ 5.00\n", notas / 5);
    notas %= 5;
    printf("%d nota(s) de R$ 2.00\n", notas / 2);
    notas %= 2;

    notas *= 100;
    notas += moedas;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", notas / 100);
    notas %= 100;
    printf("%d moeda(s) de R$ 0.50\n", notas / 50);
    notas %= 50;
    printf("%d moeda(s) de R$ 0.25\n", notas / 25);
    notas %= 25;
    printf("%d moeda(s) de R$ 0.10\n", notas / 10);
    notas %= 10;
    printf("%d moeda(s) de R$ 0.05\n", notas / 5);
    notas %= 5;
    printf("%d moeda(s) de R$ 0.01\n", notas / 1);
    notas %= 1;

    return 0;
}