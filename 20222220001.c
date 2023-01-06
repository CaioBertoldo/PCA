#include <stdio.h>

int main()
{
    // Variáveis
    int numeros, soma=0, cont;

    // Entrada e processamento
    while (cont < 5) {
        printf("Informe um numero: ");
        scanf("%d", &numeros);
        cont++;
        soma = soma + numeros;
    }

    // Saída
    printf("\n A soma dos 5 numeros eh %d",soma);
    return 0;
}
