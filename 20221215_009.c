# PCA
#include <stdio.h>

int main()
{
    // Variáveis
    int n1, n2;
    float n3;
    float c1, c2, c3;

    // Entrada
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &n2);
    printf("Digite um numero real: ");
    scanf("%f", &n3);

    // Processamento
    c1 = (n1 * 2) * (n2 / 2);
    c2 = (n1 * 3) + n3;
    c3 = n3 * n3 * n3;

    // Saída 
    printf("\n Primeiro calculo: %.1f\n", c1);
    printf("\n Segundo calculo: %.1f\n", c2);
    printf("\n Terceiro calculo: %1.f\n", c3);
    return 0;
}
