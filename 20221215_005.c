// PCA
#include <stdio.h>

int main()
{
    // Variáveis 
    float lado, area, dobro;

    // Entrada
    printf("Informe o lado do quadrado: ");
    scanf("%f", &lado);

    // Processamento
    area = lado * lado; 
    dobro = area * 2;

    // Saída
    printf("\n A area do quadrado e igual a %.1f e seu dobro e %.1f\n", area, dobro);
    return 0;
}
