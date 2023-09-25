#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("Hello, World !\n");

    int a = 0;

    printf("\n%i", a);
    printf("\ntext and variable: %i\n", a);
    scanf("\n%i", &a);
    printf("\nnew valor of A = %i", a);

    float b = 5.4;

    printf("\n%f", b);
    printf("\ntext and variable: %f\n", b);
    scanf("\n%f", &b);
    printf("\nnew valor of B = %f", b);

    char text = 's';

    printf("\n%c", text);
    printf("\ntext and variable: %c\n", text);
    fflush(stdin);
    scanf("\n%c", &text);
    printf("\nnew valor of C = %c", text);

    return 0;
}
