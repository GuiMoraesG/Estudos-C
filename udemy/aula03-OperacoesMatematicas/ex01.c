#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n1 = 6, n2 = 2;

    printf("A soma de N1=%i e N2=%i eh: %i \n", n1, n2, n1 + n2);

    printf("A subtracao de N1=%i e N2=%i eh: %i\n", n1, n2, n1 - n2);

    printf("A multiplicacao de N1=%i e N2=%i eh: %i\n", n1, n2, n1 * n2);

    printf("A divisao de N1=%i e N2=%i eh: %i\n", n1, n2, n1 / n2);

    printf("O resto de N1=%i e N2=%i eh: %i\n", n1, n2, n1 % n2);

    return 0;
}
