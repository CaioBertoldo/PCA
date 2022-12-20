# PCA
#include <stdio.h>

int main()
{
    // Variáveis
    float altura, peso;

    // Entrada
    printf("Informe a sua altura: ");
    scanf("%f", &altura);

    // Processamento 
    peso = (72.7 * altura) - 58;

    // Saída 
    printf("\n Seu peso ideal e %.2f", peso);
    return 0;
}
