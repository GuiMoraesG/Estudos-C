#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int opcao, n1, n2;
    printf("Escolha uma das opcoes abaixo: 1-somar, 2-subtrair, 3-multiplicar, 4-dividir");
    scanf("\n%i", &opcao);
    printf("\nEscolha 2 valores");
    scanf("\n%i %i", &n1, &n2);

    switch (opcao)
    {
    case 1:
        printf("somar");
        break;
    case 2:
        printf("subtrair 2");
        break;
    case 3:
        printf("multiplicar 3");
        break;
    case 4:
        printf("dividir 4");
        break;

    default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}
