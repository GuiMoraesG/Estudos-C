#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 10; i++)
    {
        if (i == 3)
        {
            continue;
        }

        if (i == 7)
        {
            break;
        }

        printf("%i \n", i);
    }

    return 0;
}
