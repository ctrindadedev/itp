#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 2057
    int s, t, f;
    scanf("%d %d %d", &s, &t, &f);
    int horario = s + t + f;
    if (horario >= 24)
    {
        horario = horario - 24;
    }
    else if (horario < 0)
    {
        horario = horario + 24;
    }
    printf("%d\n", horario);
    return 0;
}
