#include <stdio.h>

// Função para calcular o ValorGolpe do primeiro concorrente (ataque+defesa)/2 + Bonus( dado para pokemon com valor de level par )
int valor_golpe1(int bonus, int ataque, int defesa, int level)
{
    if (level % 2 == 0)
    {
        int valorgolpe = ((ataque + defesa) / 2) + bonus;
        return valorgolpe;
    }
    else
    {
        int valorgolpe = ((ataque + defesa) / 2);
        return valorgolpe;
    }
} 
// Função para calcular o ValorGolpe do segundo concorrente (ataque+defesa)/2 + Bonus
int valor_golpe2(int bonus, int ataque, int defesa, int level)
{
    if (level % 2 == 0)
    {
        int valorgolpe = ((ataque + defesa) / 2) + bonus;
        return valorgolpe;
    }
    else
    {
        int valorgolpe = ((ataque + defesa) / 2);
        return valorgolpe;
    }
}
int main(int argc, char const *argv[])
{
    int instancia, bonus, ataque, defesa, level, ataqueg, defesag, levelg;
    int valor_Dabriel, valor_Guarte;
    int i, resultados[100]; //Array de inteiros
    scanf("%d", &instancia);
    for (i = 0; i < instancia; i++)
    {
        scanf("%d ", &bonus);
        scanf("%d %d %d", &ataque, &defesa, &level);
        scanf("%d %d %d", &ataqueg, &defesag, &levelg);
        valor_Dabriel = valor_golpe1(bonus, ataque, defesa, level);
        valor_Guarte = valor_golpe2(bonus, ataqueg, defesag, levelg);
        // Determinação do vencedor ou empate
        if (valor_Dabriel > valor_Guarte)
        {
            resultados[i] = 1;
        }
        else if (valor_Dabriel < valor_Guarte)
        {
            resultados[i] = 2;
        }
        else
        {
            resultados[i] = 0; // Empate
        }
    }
    // Imprime todos os resultados ao final
    for (int i = 0; i < instancia; i++)
    {
        if (resultados[i] == 1)
        {
            printf("Dabriel\n");
        }
        else if (resultados[i] == 2)
        {
            printf("Guarte\n");
        }
        else
        {
            printf("Empate\n");
        }
    }
    return 0;
}
