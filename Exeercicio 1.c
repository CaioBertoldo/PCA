#include <stdio.h>

int main()
{
    // Variáveis
    float area,base,altura;

    // Entrada
    printf("\n Informe a base do triangulo: ");
    scanf("%f",&base);
    printf("\n Informe a altura do triangulo: ");
    scanf("%f",&altura);

    // Processamento
    area = (base * altura)/2;

    // Saída
    printf("\n Area do triangulo = %.1f\n",area);
    return 0;
}
