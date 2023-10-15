#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int opcao, num1, num2;

    printf("Escolha dois valores: ");
    scanf("%i %i", &num1, &num2);

    printf("Agora escolha uma das opcoes abaixo: ");
    printf("1-Somar, 2-Subtrair, 3-Multiplicar, 4-Dividir\n");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
        printf("A soma entre %i e %i = %i", num1, num2, num1 + num2);
        break;
    case 2:
        printf("A soma entre %i e %i = %i", num1, num2, num1 - num2);
        break;
    case 3:
        printf("A soma entre %i e %i = %i", num1, num2, num1 * num2);
        break;
    case 4:
        printf("A soma entre %i e %i = %i", num1, num2, num1 / num2);
        break;
    default:
        printf("Voce escolheu uma opcao errada");
        break;
    }

    return 0;
}
