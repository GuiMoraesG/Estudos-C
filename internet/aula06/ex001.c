#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char string[10];
    printf("Digite algo scanf(padrao) \n");
    scanf("%s", string);
    fflush(stdin);

    printf("Resultado: %s \n\n", string);

    printf("Digite algo scanf(aprimorado) \n");
    scanf("%9[^\n]s", string);
    fflush(stdin);

    printf("Resultado: %s \n\n", string);

    return 0;
}
