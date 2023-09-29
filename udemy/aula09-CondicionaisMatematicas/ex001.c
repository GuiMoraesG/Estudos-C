#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = 13;

    if (n == 10 || n == 12)
    {
        return printf("entre");
    }
    else if (n < 10)
    {
        return printf("Menor");
    }

    printf("OK");

    return 0;
}
