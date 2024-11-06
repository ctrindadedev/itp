#include <stdio.h>
#include <string.h>
int main()
{
  int i, count;
  int totalPassos;
  int passoss[100]; // Array para armazenar o total de passos de cada caso
  char linha[201];
  char A[101], B[101];

  scanf("%d", &count);
  getchar(); // Limpar o newline após o número de casos de teste (Limpando o enter do usuário para que o fgets não leia uma linha vazia)

  for (i = 0; i < count; i++)
  {
    // Ler as strings A e B
    fgets(linha, sizeof(linha), stdin);
    // sscanf( *str (string de onde os dados serão lidos), *format (Tipo do dado), Ponteiros para onde os dados serão armazenados);
    sscanf(linha, "%s %s", A, B); // lê dados formatados de uma string, diferente do scanf que lê diretamente do teclado

    totalPassos = 0; // Reiniciar o total para cada caso

    // O valor de cada letra não é associado explicitamente no código. Em C, a associação entre letras e seus valores numéricos é feita automaticamente usando o valor ASCII dos caracteres.
    // O valor ASCII de 'a' é 97, 'b' é 98, e assim por diante até 'z' que é 122.
    {
      // Calcular quantos "avanços" são necessários para transformar A[i] em B[i]
      for (int j = 0; j < strlen(A); j++) // Percorrer cada caractere das strings A e B
      {
        int passos = (B[j] - A[j] + 26) % 26;
        totalPassos += passos;
      }

      // Armazenar o total de passos para este caso
      passoss[i] = totalPassos;
    }

  // Imprimir o número total de operações para cada caso
  for (i = 0; i < count; i++)
  {
    printf("%d\n", passoss[i]);
  }

  return 0;
}
}
