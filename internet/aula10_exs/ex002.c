#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int salario, porcentagem, aumento, novoSalario;

    printf("Digite o salario do funcionario: ");
    scanf("%i", &salario);

    printf("Digite o quantos porcento o funcionario ira receber: ");
    scanf("%i", &porcentagem);

    aumento = (salario * porcentagem) / 100;
    novoSalario = salario + aumento;

    printf("O seu salario atual e %i, voce ganhou um aumento de %i", salario, porcentagem);
    printf("O seu novo salario e %i", novoSalario);

    return 0;
}
