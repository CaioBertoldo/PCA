# PCA
#include <stdio.h>

int main()
{
    // Variáveis 
    float raio, area;

    // Entrada
    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);

    // Processamento
    area = 3.14 * (raio * raio);

    // Saída
    printf("\n A area do circulo de raio %.1f e igual a %.1f", raio, area);
    return 0; 
}
