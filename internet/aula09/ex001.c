#include <stdio.h>
#include <stdlib.h>

float maior(float n1, float n2)
{
    if (n1 > n2)
    {
        return n1;
    }

    return n2;
}

int main(int argc, char const *argv[])
{
    float num1, num2, m;

    printf("Digite um numero: \n");
    scanf("%f", &num1);

    printf("Digite outro numero: \n");
    scanf("%f", &num2);

    m = maior(num1, num2);

    printf("Esse e o maior valor %.2f", m);

    return 0;
}
