#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n1, n2;

    printf("Digite a primeira nota: ");
    scanf("%i", &n1);

    printf("\nDigite a segunda nota: ");
    scanf("%i", &n2);

    printf("O valor absoluto das das diferenças entre as notas %i e %i = Valor Absoluto(%i)", n1, n2, abs(n1 - n2));

    return 0;
}
