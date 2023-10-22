#include <stdio.h>

int calcularKw(int salarioMin, int kwgasto)
{
    int valorDoKw = salarioMin / 1000;
    int valorCobrado = valorDoKw * kwgasto;
    int desconto = valorCobrado - ((valorCobrado * 15) / 100);

    printf("Valor dos KW: R$ %d \n", valorDoKw);
    printf("Valor a ser pago: R$ %d \n", valorCobrado);
    printf("Valor do desconto em 15 porcento: R$ %d\n", desconto);
}

int main(int argc, char const *argv[])
{
    int salarioMin, kwGastos, valorDoKw, valorCobrado;

    printf("Insira o salario minimo: ");
    scanf("%d", &salarioMin);

    printf("Insira a quantidade de Kw gastos: ");
    scanf("%d", &kwGastos);

    calcularKw(salarioMin, kwGastos);

    return 0;
}
