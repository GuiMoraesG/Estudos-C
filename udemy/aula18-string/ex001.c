#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char nome[255];

    printf("Digite um nome: \n");
    setbuf(stdin, 0);
    fgets(nome, 255, stdin);
    nome[strlen(nome) - 1] = '\0';

    printf("%s", nome);

    return 0;
}
