#include <stdio.h>
#include <string.h>

#define N 50

struct pessoas
{
    int idade;
    float peso;
    char nome[N];
};

typedef struct pessoas pessoas;

int main(int argc, char const *argv[])
{
    pessoas pes = {0, 0.0, "teste"};

    printf("%i\n", pes.idade);
    printf("%.2f\n", pes.peso);
    printf("%s\n", pes.nome);

    pes.idade = 23;
    pes.peso = 80.8;
    strcpy(pes.nome, "Guilherme");

    printf("%i\n", pes.idade);
    printf("%.2f\n", pes.peso);
    printf("%s\n", pes.nome);

    printf("Insira alguns valores\n");
    scanf("%i", &pes.idade);
    scanf("%f", &pes.peso);
    fflush(stdin);
    fgets(pes.nome, 50, stdin);

    printf("%i\n", pes.idade);
    printf("%.2f\n", pes.peso);
    puts(pes.nome);

    return 0;
}
