#include <stdio.h>
#include <stdlib.h>

#define N 50

int main(int argc, char const *argv[])
{
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;

    printf("Imprimir a primeira linha: \n");
    for (i = 0; i < 3; i++)
    {
        printf("%d", matriz[0][i]);
    }

    printf("\n \n Imprimir a matriz inteira ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", matriz[i][j]);
        }
    }

    return 0;
}
