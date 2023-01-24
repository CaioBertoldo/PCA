# PCA
/*Criar um programa que  dada uma sequência de n números a imprima na ordem inversa à da leitura. 
(o comprimento máximo da sequência é 100 pelo que n tem que ser um número menor que 100)*/


#include <stdio.h>

int main(){

    int vetor[5];
    int i;

    for(i = 0; i < 5; i++){
        printf("Entre com um numero inteiro: ");
        scanf("%d", &vetor[i]);
    }
    for(i = 4; i >= 0; i--){
        printf("Vetor invertido[%d] = %d\n",i, vetor[i]);
    }
}
