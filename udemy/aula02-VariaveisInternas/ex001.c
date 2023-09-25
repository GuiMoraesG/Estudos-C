#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 5, b;
    printf("O valor de A = %i \n", a);

    a = 10;
    printf("O valor de A = %i \n", a);

    scanf("%i", &b);
    printf("O valor de B = %i \n", b);

    return 0;
}