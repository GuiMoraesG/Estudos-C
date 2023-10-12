#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 20

int main(int argc, char const *argv[])
{
    char origem[N] = {"ola, mundo"};
    char destino[N];

    printf("Antes da utilização do strcpy \n");
    puts(origem);
    puts(destino);

    strcpy(destino, origem);

    printf("Depois do strcpy: \n");
    puts(origem);
    puts(destino);

    return 0;
}
