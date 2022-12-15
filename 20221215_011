# PCA
#include <stdio.h>

int main()
{
    // Variáveis
    float sh, diaria, salbruto, inss, saliq, sind, mes, renda;

    // Entrada
    printf("Quanto voce ganha pro hora ? R$");
    scanf("%f", &sh);
    printf("Quantas horas voce trabalha no dia? ");
    scanf("%f", &diaria);

    // Processamento
    mes = diaria * 30;
    salbruto = mes * sh;
    inss = salbruto * 0.08;
    sind = salbruto * 0.05;
    renda = salbruto * 0.11;
    saliq = salbruto - (inss + sind + renda);

    // Saída
    printf("\n Seu salario bruto foi de R$ %.2f", salbruto);
    printf("\n Voce pagou ao inss %.2f",inss);
    printf("\n Voce pagou ao sindicato R$ %.2f", sind);
    printf("\n Seu salario liquido foi de R$ %.2f", saliq);
    return 0;
}
