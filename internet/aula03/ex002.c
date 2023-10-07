#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num1;

    printf("Digite um valor: \n");
    scanf("%i", &num1);

    if (num1 % 3 == 0 && num1 % 5 == 0)
        return printf("FIZZBUZZ");

    if (num1 % 5 == 0)
        return printf("BUZZ");

    if (num1 % 3 == 0)
        return printf("FIZZ");

    if (num1 % 3 != 0 && num1 % 5 != 0)
        return printf("%i", num1);

    return 0;
}
