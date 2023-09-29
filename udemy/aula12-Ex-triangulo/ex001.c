#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n1, n2, n3;
    printf("Digite 3 valores para serem comparados\n");
    scanf("%i %i %i", &n1, &n2, &n3);

    if (n1 == n2 && n2 == n3)
    {
        int media = (n1 + n2 + n3) / 3;
        printf("Os 3 lados possuem o valor %im.Ou seja um triangulo equilatero", media);
    }
    else
    {
        printf("Infelizmente como os 3 nao sao iguais");
    }

    return 0;
}
