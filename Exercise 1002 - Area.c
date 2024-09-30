#include <stdio.h>
#include <stdlib.h>
// 1002
int main(int argc, char const argv[])
{
    double raio, area1, area;
    double pi = 3.14159;
    scanf("%lf", &raio);
    area1 = raio*raio;
    area = area1 * pi;
    printf("A=%.4lf\n", area);
    return 0;
}
