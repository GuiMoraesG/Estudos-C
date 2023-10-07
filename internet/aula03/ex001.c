#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num1, num2, media;

    printf("Digite o primeiro valor: \n");
    scanf("%i", &num1);

    printf("Digite o segundo valor: \n");
    scanf("%i", &num2);

    media = (num1 + num2) / 2;

    printf("A media entre %i eh %i = %i\n", num1, num2, media);

    if (media >= 7)
    {
        return printf("O media %i eh maior que 7. Aprovado", media);
    }
    else
    {
        return printf("O media %i eh menor que 7. Reprovado", media);
    }

    return 0;
}
