#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numeros[8], aux = 10;

    for (int i = 0; i < 8; i++)
    {
        numeros[i] = aux;
        printf("%d \n", numeros[i]);
        aux--;
    }

    printf("%d", numeros[3]);

    return 0;
}
