#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n1, n2, media;

    printf("Digite o primeiro valor: ");
    scanf("%i", &n1);

    printf("Digite o Segundo valor: ");
    scanf("%i", &n2);

    media = (n1 + n2) / 2;

    printf("A media dos valores %i e %i = %i", n1, n2, media);

    return 0;
}
