#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int opcao;

    while (opcao < 1 || opcao > 3)
    {
        printf("Escolha uma das opcoes abaixo:\n");
        printf("Opcoes 1\n");
        printf("Opcoes 2\n");
        printf("Opcoes 3\n");
        scanf("%i", &opcao);

        switch (opcao)
        {
        case 1:
            printf("A sua escolha foi opcao 1");
            break;
        case 2:
            printf("A sua escolha foi opcao 2");
            break;
        case 3:
            printf("A sua escolha foi opcao 3");
            break;

        default:
            printf("A sua escolha foi invalida");
            break;
        }

        return 0;
    }

    system("pause");
}
