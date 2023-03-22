/*Escreva uma função chamada troca que troca os valores dos parâmetros recebidos. Sua assinatura deve ser: void troca(float *a, float *b);*/

#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b){
    float c;

    // Efetuando a troca
    c = *a;
    *a = *b;
    *b = c;
}

int main(){

    float n1 = 5.5;
    float n2 = 6.6;

    // Mostrando os valores antes da troca
    printf("\n Primeiro numero: %.1f", n1);
    printf("\n Segundo numero: %.1f", n2);

    // Usando a função troca para trocar n1 por n2
    troca(&n1, &n2);

    // Mostrando n1 e n2 trocados
    printf("\n------- TROCANDO -------\n");
    printf("\n Primeiro numero: %.1f", n1);
    printf("\n Segundo numero: %.1f", n2);

    return 0;
}
