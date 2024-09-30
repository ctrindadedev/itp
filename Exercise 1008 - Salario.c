#include <stdio.h>

int main()
{

    int funcionario, horas;
    float valor, salario;
    scanf("%d %d %f", &funcionario, &horas, &valor);
    salario = horas * valor;
    printf("NUMBER = %d\n", funcionario);
    printf("SALARY = U$ %.2f\n", salario);
    return 0;
}