#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float notaTrabalho, notaAvaliacao, notaExame, mediaPonderada;

    printf("Digite a nota do Trabalho: ");
    scanf("%f", &notaTrabalho);

    printf("Digite a nota da avaliacao: ");
    scanf("%f", &notaAvaliacao);

    printf("Digite a nota do exame: ");
    scanf("%f", &notaExame);

    mediaPonderada = ((notaTrabalho * 2) + (notaAvaliacao * 3) + (notaExame * 5)) / 10;

    if (mediaPonderada < 5.00)
    {
        return printf("Sua nota foi %.2f logo voce ganhou um \'E\'", mediaPonderada);
    }
    else if (mediaPonderada < 7.00)
    {
        return printf("Sua nota foi %.2f logo voce ganhou um \'D\'", mediaPonderada);
    }
    else if (mediaPonderada < 8.00)
    {
        return printf("Sua nota foi %.2f logo voce ganhou um \'C\'", mediaPonderada);
    }
    else if (mediaPonderada < 9.00)
    {
        return printf("Sua nota foi %.2f logo voce ganhou um \'B\'", mediaPonderada);
    }
    else
    {
        return printf("Sua nota foi %.2f logo voce ganhou um \'A\'", mediaPonderada);
    }

    return 0;
}
