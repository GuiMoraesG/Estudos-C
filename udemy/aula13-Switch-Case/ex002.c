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
        printf("somar\n");
        printf("A soma de %i e %i = %i", n1, n2, n1 + n2);
        break;
    case 2:
        printf("subtrair\n");
        printf("A subtracao de %i e %i = %i", n1, n2, n1 - n2);
        break;
    case 3:
        printf("multiplicar\n");
        printf("A multiplicacao de %i e %i = %i", n1, n2, n1 * n2);
        break;
    case 4:
        printf("dividir\n");
        printf("A divisao de %i e %i = %i", n1, n2, n1 / n2);
        break;

    default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}
