# PCA
#include <stdio.h>

int main()
{
    // Variáveis
    float C, F;

    // Entrada
    printf("Informe a temperatura em Farenheit: ");
    scanf("%f", &F);

    // Processamento
    C = (5 * (F - 32) / 9);

    // Saída
    printf("\n A temperatura %.1f F e igual a %.1f C",F, C);
    return 0;
}
