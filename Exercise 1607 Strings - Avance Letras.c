#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
   //Escanear a quantidade de vezes para repetir o processo
   int i, count;
   scanf("%d", &count);
   // Limpar o newline após o número de casos de teste (Limpando o enter do usuário para que o fgets não leia uma linha vazia)
   getchar(); 
 // Defininindo o tamanho das strings
   char linha[201];
   char A[101], B[101];
   for (i = 0; i < count; i++)
   {
    //Escanear as 2 strings a serem comparadase
    fgets(linha, sizeof(linha), stdin);
    // sscanf( *str (string de onde os dados serão lidos), *format (Tipo do dado), Ponteiros para onde os dados serão armazenados);
    sscanf(linha, "%s %s", A, B); // lê dados formatados de uma string, diferente do scanf que lê diretamente do teclado

   int totalPassos = 0;
   // Percorrer cada caractere das strings A e B
   for (int i = 0; i < strlen(A); i++)

   // O valor de cada letra não é associado explicitamente no código. Em C, a associação entre letras e seus valores numéricos é feita automaticamente usando o valor ASCII dos caracteres.
   // O valor ASCII de 'a' é 97, 'b' é 98, e assim por diante até 'z' que é 122.
   {
       // Calcular quantos "avanços" são necessários para transformar A[i] em B[i]
       int passos = (B[i] - A[i] + 26) % 26;
       totalPassos += passos;
    }

  // Imprimir o número total de operações necessárias para o caso atual
        printf("%d\n",totalPassos);
   }
   
    return 0;
}
