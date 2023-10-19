#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int mult, res;
    printf("Digite um valor para saber sua tabuada \n");
    scanf("%d", &mult);

    for (int i = 0; i <= 10; i++)
    {
        res = mult * i;
        printf("\n%d X %d = %d", mult, i, res);
    }

    return 0;
}
