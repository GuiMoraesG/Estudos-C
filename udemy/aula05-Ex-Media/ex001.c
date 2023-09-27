#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n1 = 4, n2 = 3;
    int result = (n1 + n2) / 2;

    printf("A media dos seguintes valores %i e %i = %i \n", n1, n2, result);

    int num1, num2;

    scanf("%i", &num1);
    scanf("%i", &num2);

    printf("Os valores digitados sao %i e %i e sua soma eh = %i ", num1, num2, (num1 + num2) / 2);

    return 0;
}
