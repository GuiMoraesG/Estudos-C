#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3;

    printf("Digite qualquer valor numerico:\n");
    scanf("%i %i %i", &num1, &num2, &num3);
    printf("Os valores digitados foram %i, %i, %i", num1, num2, num3);

    return 0;
}
