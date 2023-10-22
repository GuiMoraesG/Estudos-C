#include <stdio.h>

int calcularSalario(int horas, int salario)
{
    salario = salario / 2;
    return horas * salario;
}

int descontarImposto(int salarioB)
{
    return salarioB - ((salarioB * 3) / 100);
}

int main(int argc, char const *argv[])
{
    int horas, salario, salarioBruto, salarioFinal;

    printf("Insira o numero de horas trabalhadas: ");
    scanf("%d", &horas);

    printf("Insira o salario minimo: ");
    scanf("%d", &salario);

    salarioBruto = calcularSalario(horas, salario);
    salarioFinal = descontarImposto(salarioBruto);

    printf("Salario Final: %d", salarioFinal);

    return 0;
}
