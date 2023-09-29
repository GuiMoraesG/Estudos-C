#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    bool a = true, b = false;

    if (a)
    {
        return printf("Verdadeiro");
    }

    printf("Falso");

    return 0;
}
