#include <stdio.h>
#include <stdlib.h>
#define texto "\"Texto teste\""

int main(int argc, char const *argv[])
{
    int variavelNumerica = 10;
    float variavelFlutuante = 10.55;
    char variavelChar = 'd';

    printf("Variavel Numerica: %i \n", variavelNumerica);
    printf("Variavel Flutuante: %.2f \n", variavelFlutuante);
    printf("Variavel Char: %c \n", variavelChar);
    printf("Variavel Constante/string: %s \n", texto);

    // Redeclarando váriaveis
    variavelNumerica = 12;
    variavelFlutuante = 12.12;
    variavelChar = 's';

    printf("Variavel Numerica: %i \n", variavelNumerica);
    printf("Variavel Flutuante: %.2f \n", variavelFlutuante);
    printf("Variavel Char: %c \n", variavelChar);

    return 0;
}
