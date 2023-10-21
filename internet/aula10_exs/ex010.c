#include <stdio.h>

int valorImposto(int preco)
{
    return ((preco * 30)) / 100;
}

int valorLucro(int preco, int lucro)
{
    return ((preco * lucro) / 100);
}

int valorFinalF(int imposto, int precoF, int lucro)
{
    return precoF + imposto + lucro;
}

int main(int argc, char const *argv[])
{
    int precoF, lucro, valorLucroPorcentual, valorImpostoM, valorFinal;

    printf("Insira o preco de fabrica: \n");
    scanf("%d", &precoF);

    printf("Insira o lucro : \n");
    scanf("%d", &lucro);

    valorImpostoM = valorImposto(precoF);
    valorLucroPorcentual = valorLucro(precoF, lucro);
    valorFinal = valorFinalF(precoF, valorImpostoM, valorLucroPorcentual);

    printf("Preco de fabrica: %d \n", precoF);
    printf("Valor do imposto: %d \n", valorImpostoM);
    printf("Valor final: %d  \n", valorFinal);

    return 0;
}
