#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int soma = 0;

    for (int i = 0; i <= 10; i++)
    {
        soma += i;
        printf("%d \n", i);
    }

    printf("%d", soma);

    return 0;
}
