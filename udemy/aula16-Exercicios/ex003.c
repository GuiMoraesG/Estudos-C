#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int valor, aux;

    printf("Digite um valor para saber se ele eh primo: \n");
    scanf("%i", &valor);

    for (int i = 1; i <= valor; i++)
    {
        if (valor % i == 0)
        {
            aux++;
        }

        if (aux == 2)
        {
            printf("%i eh PRIMO \n", valor);
        }
        else
        {
            printf("%i nao eh PRIMO \n", valor);
        }
    }

    return 0;
}
