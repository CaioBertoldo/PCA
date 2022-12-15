# PCA
#include <stdio.h>

int main()
{
    // Variáveis
    float conta;
    double garcom;

    // Entrada
    printf("Informe o valor da conta: R$");
    scanf("%f", &conta);

    // Processamento
    garcom = conta * 0.10;

    // Saída
    printf("\n A porcentagem do garçom será de R$ %.2f\n", garcom);
    return 0; 

}

