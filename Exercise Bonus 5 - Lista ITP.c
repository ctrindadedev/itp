// Somente 8 atletas podem competir ao mesmo tempo - Variavel para determinar quantas séries serão necessárias
// Só é considerado participante o atleta que tiver o tempo igual ou inferior ao estabelecido
// Entrada para o tempo máximo, quantidade indeterminada de Inscriçoes
// Para ao receber -1
#include <stdio.h>
int main(int argc, char const *argv[])
{
  double maximo, tempo;
  int participante = 0, raia = 0;
  scanf("%lf", &maximo);
  for (;;)
  {
    scanf("%lf", &tempo);
    if (tempo == -1)
    {
      break;
    }
    else if (tempo <= maximo)
    {
      participante++;
    }
  }
  if (participante > 0 && participante != 8)
  {
    raia = (participante / 8) + participante % 8;
    if (participante % 8 != 1)
    {
      raia = (participante / 8) + 1;
    }
    printf("%d %d\n", participante, raia);
  }
  else if (participante == 8)
  {
    raia = 1;
    printf("%d %d\n", participante, raia);
  }
  else
  {
    printf("0 0\n");
  }
  return 0;
}