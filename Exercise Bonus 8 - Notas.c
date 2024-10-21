#include <stdio.h>

int main()
{
    int n; // Número de alunos
    scanf("%d", &n);

    int numero_aluno[n]; // Número do aluno na chamada
    float notas[n];      // Notas dos alunos

//Arrays para armazenar os alunos aprovados, em recuperação e reprovados
    int aprovados[n], recuperacao[n], reprovados[n];
    float notas_aprovados[n], notas_recuperacao[n], notas_reprovados[n];
    int count_aprovados = 0, count_recuperacao = 0, count_reprovados = 0;

    //Recebendo os números dos alunos e suas respectivas notas
    for (int i = 0; i < n; i++)
    {
        scanf("%d - %f", &numero_aluno[i], &notas[i]);

        if (notas[i] >= 7.0)
        {
            aprovados[count_aprovados] = numero_aluno[i];
            notas_aprovados[count_aprovados] = notas[i];
            count_aprovados++;
        }
        else if (notas[i] >= 5.0)
        {
            recuperacao[count_recuperacao] = numero_aluno[i];
            notas_recuperacao[count_recuperacao] = notas[i];
            count_recuperacao++;
        }
        else
        {
            reprovados[count_reprovados] = numero_aluno[i];
            notas_reprovados[count_reprovados] = notas[i];
            count_reprovados++;
        }
    }

    // Exibir a lista de aprovados
    printf("Aprovados: ");
    for (int i = 0; i < count_aprovados; i++)
    {
        printf("%d (%.1f)", aprovados[i], notas_aprovados[i]);
        if (i < count_aprovados - 1)
            printf(", ");
    }
    printf("\n");
    printf("Recuperação: ");
    for (int i = 0; i < count_recuperacao; i++)
    {
        printf("%d (%.1f)", recuperacao[i], notas_recuperacao[i]);
        if (i < count_recuperacao - 1)
            printf(", ");
    }
    printf("\n");
    printf("Reprovados: ");
    for (int i = 0; i < count_reprovados; i++)
    {
        printf("%d (%.1f)", reprovados[i], notas_reprovados[i]);
        if (i < count_reprovados - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}