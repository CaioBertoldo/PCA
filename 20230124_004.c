# PCA
/*Criar e utilizar num programa uma função que receba uma sequência de n números e retorne outra sequência só com os números par
(o comprimento máximo da sequência é 100 pelo que n tem que ser um número menor que 100)*/

#include <stdio.h>
#include <stdlib.h>
#define n 100

int main(){

    int vetor[n];
    int i;

    for(i = 0; i < n; i++){
        printf("Entre com um numero inteiro: ");
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < n; i++){
        if(vetor[i] % 2 == 0){
            printf("Vetor par[%d] = {%d}\n", i, vetor[i]);
        }
    }
}
