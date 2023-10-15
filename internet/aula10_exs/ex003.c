#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int segundos, minutos, hora;

    printf("Quantos segundos se passaram: ");
    scanf("%i", &segundos);

    hora = segundos / 3600;
    segundos = segundos - (3600 * hora);
    minutos = segundos / 60;
    segundos = segundos - (60 * minutos);

    printf("Se passaram %i hora e %i minutos e %i segundos", hora, minutos, segundos);

    return 0;
}
