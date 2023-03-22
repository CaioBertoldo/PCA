/*Escreva uma função que receba um vetor inteiro v[0..n-1] e os endereços de duas variáveis inteiras, digamos min e max,
 e deposite nessas variáveis o valor do elemento mínimo e o valor do elemento máximo do vetor. Escreva também uma função main que use a função.*/

 #include <stdio.h>
 #include <stdlib.h>

 int vetor(){
    
    //  Declarando o vetor e as variáveis min e max
    int vet[4] = {1, 2, 3, 4};
    int *min;
    int *max;

    // Atribuindo os endereços dos valores min e max
    min = &vet[0];
    max = &vet[3];

    // Mostrando os valores min e max
    printf("\nValor minimo: %d", *min);
    printf("\nValor maximo: %d", *max);
 }

int main(){
    vetor();
}
