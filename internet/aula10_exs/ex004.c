#include <stdio.h>
#include <stdlib.h>

int retornaMaior(int n1, int n2)
{
    if (n1 > n2)
    {
        return n1;
    }

    return n2;
}

int main(int argc, char const *argv[])
{
    int num1, num2, maior;
    printf("Digite dois valores para saber qual deles e o maior: ");
    scanf("%i %i", &num1, &num2);

    if (num1 == num2)
    {
        return printf("Os numeros %i %i sao iguais", num1, num2);
    }

    maior = retornaMaior(num1, num2);

    printf("O maior valor e %i", maior);

    return 0;
}
