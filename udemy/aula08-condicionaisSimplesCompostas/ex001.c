#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 23;

    if (a == 5)
    {
        return printf("true");
    }

    if (a % 2 != 0)
    {
        return printf("IMPAR");
    }
    else
    {
        return printf("PAR");
    }

    return 0;
}
