#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz[3][3], valor, encontrado, lin, col;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Insira o dado da posicao %d X %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite um valor a ser buscado: ");
    scanf("%d", &valor);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (valor == matriz[i][j])
            {
                encontrado = 1;
                lin = i;
                col = j;
                break;
            }
        }
    }

    if (encontrado == 1)
    {
        return printf("Valor %d na posicao %d X %d", valor, lin + 1, col + 1);
    }
    else
    {
        printf("Valor nao encontrado");
    }

    return 0;
}
