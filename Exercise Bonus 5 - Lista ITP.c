//Somente 8 atletas podem competir ao mesmo tempo
//Variavel para determinar quantas séries serão necessárias
//Só é considerado participante o atleta que tiver o tempo igual ou inferior ao estabelecido
//Entrada para o tempo máximo, quantidade indeterminada de Inscriçoes
//Para ao receber -1
#include <stdio.h>
int main(int argc, char const *argv[])
{
 float maximo, tempo;
 int participante, raia;
 scanf("%d", &participante);
 raia = (participante / 8) + participante % 8;
 if (participante % 8 != 1)
 {
   raia = (participante / 8) + 1;
 }

 printf("%d", raia);
 for (ii = 0; i < count; i++)
 {
   /* code */
   for (size_t i = 0; i < count; i++)
   {
    /* code */
   }
   
  }
  
    return 0;
}
