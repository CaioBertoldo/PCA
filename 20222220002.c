#include <stdio.h>

int main()
{
    // Variáveis
    int soma=0, cont, numeros;

    // Entrada e processamento
    while (cont < 50) {
        printf("Informe um numero: ");
        scanf("%d", &numeros);
        cont++;
        if (numeros % 2 == 1){
            soma = soma + numeros;
        }
    }
    
    // Saída
    printf("\n A soma dos numeros impares eh %d", soma);
    return 0;
}
