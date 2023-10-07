#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num1, num2, soma, subt, mult, div;

    printf("Digite o primeiro numero: \n", num1);
    scanf("%i", &num1);

    printf("Digite o segundo numero: \n", num2);
    scanf("%i", &num2);

    soma = num1 + num2;
    subt = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("Os numeros digitados foram %i e %i. A soma deles eh: %i \n", num1, num2, soma);
    printf("Os numeros digitados foram %i e %i. A subtracao deles eh: %i \n", num1, num2, subt);
    printf("Os numeros digitados foram %i e %i. A multiplicacao deles eh: %i \n", num1, num2, mult);
    printf("Os numeros digitados foram %i e %i. A divisao deles eh: %i \n", num1, num2, div);

    return 0;
}
