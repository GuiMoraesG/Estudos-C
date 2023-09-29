#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = 1;

    switch (n)
    {
    case 1:
        printf("w 1");
        break;
    case 2:
        printf("q 2");
        break;
    case 3:
        printf("e 3");
        break;
    case 4:
        printf("r 4");
        break;
    case 5:
        printf("t 5");
        break;

    default:
        break;
    }

    return 0;
}
