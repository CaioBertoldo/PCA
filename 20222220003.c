#include <stdio.h>

int main()
{
    // Variáveis
    int soma=0, cont;

    // Entrada e processamento
    for (cont = 100; cont < 200; cont ++) {
        if (cont % 2 != 0){
            soma = soma + cont;
        }
    }
    
    // Saída
    printf("\n A soma dos numeros impares eh %d", soma);
    return 0;
}
