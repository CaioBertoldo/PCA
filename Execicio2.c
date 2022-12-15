# PCA
#include <stdio.h>

int main()
{
    // Variáveis
    float salario, ajuste;

    // Entrada
    printf("\n Informe o salario: R$ ");
    scanf("%f",&salario);

    // Processamento
    ajuste = salario + (salario * 10/100);

    // Saída
    printf("\n O salário do trabalhador vai para R$ %.2f\n",ajuste);
    return 0;
}
