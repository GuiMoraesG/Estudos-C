#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 50

int main(int argc, char const *argv[])
{
    char string1[N] = {"Eu estudo"};
    char string2[N] = {" programacao"};

    printf("Antes da utilização do strcat \n");
    puts(string1);
    puts(string2);

    strcat(string1, string2);

    printf("Depois do strcat: \n");
    puts(string1);
    puts(string2);

    return 0;
}
