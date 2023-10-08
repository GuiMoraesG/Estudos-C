#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numeros[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite um valor: \n");
        scanf("%d", &numeros[i]);
    }

    printf("Os seguintes valores que fpram digitados: \n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d \n", numeros[i]);
    }

    return 0;
}
