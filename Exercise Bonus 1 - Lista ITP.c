#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int combo, valor;
    scanf("%d %d", &combo, &valor);
    switch (combo)
    {
    case 1: // 12
        if (valor == 12)
        {
            printf("Deu Certim!");
        }
        else if (valor > 12)
        {
            int troco;
            troco = valor - 12;
            printf("Troco = %d reais", troco);
        }
        else if (valor < 12)
        {
            int faltam;
            faltam = 12 - valor;
            printf("Saldo insuficiente, falta %d reais", faltam);
        }
        break;
    case 2: // 23
        if (valor == 23)
        {
            printf("Deu Certim!");
        }
        else if (valor > 23)
        {
            int troco;
            troco = valor - 23;
            printf("Troco = %d reais", troco);
        }
        else if (valor < 23)
        {
            int faltam;
            faltam = 23 - valor;
            printf("Saldo insuficiente, falta %d reais", faltam);
        }
        break;
    case 3: // 31
        if (valor == 31)
        {
            printf("Deu Certim!");
        }
        else if (valor > 31)
        {
            int troco;
            troco = valor - 31;
            printf("Troco = %d reais", troco);
        }
        else if (valor < 31)
        {
            int faltam;
            faltam = 31 - valor;
            printf("Saldo insuficiente, falta %d reais", faltam);
        }
        break;
    case 4: // 28
        if (valor == 28)
        {
            printf("Deu Certim!");
        }
        else if (valor > 28)
        {
            int troco;
            troco = valor - 28;
            printf("Troco = %d reais", troco);
        }
        else if (valor < 28)
        {
            int faltam;
            faltam = 28 - valor;
            printf("Saldo insuficiente, falta %d reais", faltam);
        }
        break;
    case 5: // 15
        if (valor == 15)
        {
            printf("Deu Certim!");
        }
        else if (valor > 15)
        {
            int troco;
            troco = valor - 15;
            printf("Troco = %d reais", troco);
        }
        else if (valor < 15)
        {
            int faltam;
            faltam = 15 - valor;
            printf("Saldo insuficiente, falta %d reais", faltam);
        }
        break;
    default:
        break;
    }
    return 0;
}