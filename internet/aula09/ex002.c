#include <stdio.h>
#include <stdlib.h>

void imprimi1(int vetor[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", vetor[i]);
    }
}

void imprimi2(int vetor[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", vetor[i]);
    }
}

void imprimi3(int *vetor, int n)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d", vetor[i]);
    }
}

int main(int argc, char const *argv[])
{
    int vetor[5] = {1, 2, 3, 4, 5};

    puts("\nPrimeira funcao: ");
    imprimi1(vetor, 5);

    puts("\nSegundo funcao: ");
    imprimi2(vetor);

    puts("\nTerceira funcao: ");
    imprimi3(vetor, 5);

    return 0;
}
