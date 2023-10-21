#include <stdio.h>

int main(int argc, char const *argv[])
{
    int valor1 = 0, valor2 = 1, valorAtual;

    printf("%d ", valor1);
    printf("%d ", valor2);

    for (int i = 0; i < 8; i++)
    {
        valorAtual = valor1 + valor2;
        valor1 = valor2;
        valor2 = valorAtual;
        printf("%d ", valorAtual);
    }

    return 0;
}
