# PCA
#include <stdio.h>

int main()
{
    // Variáveis
    float C, F;

    // Entrada
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &C);

    // Processamento
    F = (C * 9/5) + 32;

    // Saída
    printf("\n A temperatura %.1f C e igual a %.1f F",C, F);
    return 0;
}
