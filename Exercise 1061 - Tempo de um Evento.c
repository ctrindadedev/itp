#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int dia, hora, minuto, segundo, diaf, horaf, minutof, segundof, duracaodia, duracaoh, duracaom, duracaos;
    scanf("Dia %d", &dia);
    scanf("%d : %d : %d\n", &hora, &minuto, &segundo);
    scanf("Dia %d ", &diaf);
    scanf("%d : %d : %d", &horaf, &minutof, &segundof);
    duracaos = segundof - segundo;
    duracaoh = horaf - hora;
    duracaom = minutof - minuto;
    duracaodia = diaf - dia;
    // Caso esse cálculo seja negativo, ou seja, o tempo final ser menor que o inicial, iremos acrescentar um valor de um ciclo e descontar do ciclo seguinte para compensar.
    if (duracaos < 0)
    {
        duracaos = duracaos + 60;
        duracaom = duracaom - 1;
    }
    if (duracaom < 0)
    {
        duracaom = duracaom + 60;
        duracaoh = duracaoh - 1;
    }
    if (duracaoh < 0)
    {
        duracaoh = duracaoh + 24;
        duracaodia = duracaodia - 1;
    }
    printf("%d dia(s)\n", duracaodia);
    printf("%d hora(s)\n", duracaoh);
    printf("%d minuto(s)\n", duracaom);
    printf("%d segundo(s)\n", duracaos);

    return 0;
}
