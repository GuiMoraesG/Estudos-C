#include <stdio.h>
#include <stdlib.h>

void interarMatriz(int matriz[][4], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\n", matriz[i][j]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int matriz[3][4] = {{1, 2, 3, 4}, {10, 20, 30, 40}, {100, 200, 300, 400}};
    interarMatriz(matriz, 3);

    return 0;
}
