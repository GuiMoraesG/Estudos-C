#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int soma = 0, media;
    int vetor[3];

    printf("Digite alguns valores: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        soma += vetor[i];
        printf("\n%d", vetor[i]);
    }

    media = soma / 3;
    printf("\n%i", media);

    return 0;
}
