#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));
    int aleatorio = rand() % 10;

    printf("%d", aleatorio);

    return 0;
}
