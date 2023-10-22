#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor[9];

    for (int i = 0; i < 9; i++)
    {
        printf("Insira os dados da posicao %d: \n", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("%d e PAR, posicao: %i \n", vetor[i], i);
        }
    }

    return 0;
}
