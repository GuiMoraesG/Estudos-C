#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n1, n2, n3;

    printf("Digite as notas do aluno para calcular sua media");
    scanf("%i %i %i", &n1, &n2, &n3);

    float media = (n1 + n2 + n3) / 3;

    if (media >= 7)
    {
        return printf("\nSua media e %.2f. APROVADO", media);
    }

    printf("\nSua media e %.2f. REPROVADO", media);

    return 0;
}