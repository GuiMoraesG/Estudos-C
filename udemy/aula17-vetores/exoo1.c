#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int vetor[3];

    vetor[0] = 3;
    vetor[1] = 4;
    vetor[2] = 1;

    printf("\nIndice 0 - %d", vetor[0]);
    printf("\nIndece 1 - %d", vetor[1]);
    printf("\nIndece 2 - %d", vetor[2]);

    for (int i = 0; i < 3; i++)
    {
        printf("\n%d", vetor[i]);
    }

    return 0;
}
