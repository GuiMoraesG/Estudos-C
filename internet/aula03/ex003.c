#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int date;

    printf("Digite um mes para saber seu signo: \n");
    scanf("%i", &date);

    switch (date)
    {
    case 1:
        printf("Aries");
        break;
    case 2:
        printf("Touro");
        break;
    case 3:
        printf("Leao");
        break;
    case 4:
        printf("Virgem");
        break;
    case 5:
        printf("Libra");
        break;

    default:
        printf("Valor Inválido ");
        break;
    }

    return 0;
}
