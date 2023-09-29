#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n1, n2, n3;

    printf("Digite 3 numeros");
    scanf("%i %i %i", &n1, &n2, &n3);
    printf("\n%i, %i, %i", n1, n2, n3);
    int result = n1 * n2 * n3;
    printf("\nA multiplicacao desses 3 valores = %i", result);

    return 0;
}
