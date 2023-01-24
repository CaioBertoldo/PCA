# PCA
/*Criar e utilizar num programa uma função que receba uma sequência de n números e a imprima na ordem inversa.
 (o comprimento máximo da sequência é 100 pelo que n tem que ser um número menor que 100)*/

#include <stdio.h>
#include <stdlib.h>

int ordem_inversa(){

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

int main(){
    ordem_inversa();
}
