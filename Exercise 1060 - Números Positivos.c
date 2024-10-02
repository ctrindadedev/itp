int main(int argc, char const *argv[])
{
    int i, positivo=0;
    float numero;
    for (i = 1; i < 7; i++)
    {
        scanf("%f", &numero);
        if (numero > 0)
        {
            positivo++;
        }
        
    }
    printf("%d valores positivos\n", positivo);
    return 0;
}
