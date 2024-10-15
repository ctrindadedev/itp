#include <stdio.h>

// Definindo a função
void reajuste_salario(double salario, double porcentagem)
{
    printf("Novo salario: %.2lf\n", salario + salario * porcentagem);
    printf("Reajuste ganho: %.2lf\n", salario * porcentagem);
    printf("Em percentual %.0lf %%\n", porcentagem * 100);
}

int main(void)
{
    double salario;
    scanf("%lf", &salario);
    if (salario >= 0.00 && salario <= 400.00)
    {
        reajuste_salario(salario, 0.15);
    }
    else if (salario >= 400.01 && salario <= 800.00)
    {
        reajuste_salario(salario, 0.12);
    }
    else if (salario >= 800.01 && salario <= 1200.00)
    {
        reajuste_salario(salario, 0.10);
    }
    else if (salario >= 1200.01 && salario <= 2000.00)
    {
        reajuste_salario(salario, 0.07);
    }
    else
    {
        reajuste_salario(salario, 0.04);
    }
    return 0;
}