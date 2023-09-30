#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    for (int i = 10; i > 0; i--)
    {
        printf("FOR %i\n", i);
    }

    int i = 10;

    while (i > 0)
    {
        printf("WHILE %i\n", i);
        i--;
    }

    int i2 = 10;

    do
    {
        printf("DO While%i\n", i2);
        i2--;
    } while (i2 > 0);

    return 0;
}
