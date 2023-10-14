#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 3

struct pessoas
{
    int idade;
    float peso;
    char nome[50];
};

typedef struct pessoas pessoas;

int main(int argc, char const *argv[])
{
    pessoas vetor[N];

    printf("Insira os dados\n");

    for (int i = 0; i < N; i++)
    {
        puts("Nome: ");
        fgets(vetor[i].nome, 50, stdin);
        fflush(stdin);

        puts("Idade:");
        scanf("%i", &vetor[i].idade);
        fflush(stdin);

        puts("Peso:");
        scanf("%f", &vetor[i].peso);
        fflush(stdin);
    }
    system("cls");

    for (int i = 0; i < N; i++)
    {
        printf("Aqui estao seus dados\n");
        printf("\tNome: %s\n", vetor[i].nome);
        printf("\tIdade: %i\n", vetor[i].idade);
        printf("\tPeso: %.2f\n", vetor[i].peso);
    }

    return 0;
}
