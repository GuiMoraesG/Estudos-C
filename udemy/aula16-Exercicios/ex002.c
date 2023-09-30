#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            printf("PAR %i\n", i);
        }
        else
        {
            printf("IMPAR %i\n", i);
        }
    }

    return 0;
}
