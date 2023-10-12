#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char string[10];
    printf("Digite algo (Leitura usando o gets) \n");
    gets(string);
    fflush(stdin);

    puts("Resultado:");
    puts(string);
    puts("");

    printf("Digite algo (Leitura usando o fgets) \n");
    fgets(string, 10, stdin);
    fflush(stdin);

    puts("Resultado:");
    puts(string);
    puts("");

    return 0;
}
