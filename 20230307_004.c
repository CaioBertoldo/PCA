/*Crie um programa que contenha um array de inteiros contendo 8 elementos. Utilizando apenas aritmética de ponteiros, 
leia esse array do teclado e imprima o dobro de cada valor lido.
a Imprimir o endereço das posições contendo valores pares*/

#include <stdio.h>

int main(){
    int array[8];
    int i;

    // Lendo os elementos do array
    for (i = 0; i < 8; i++)
    {
        printf("\nElemento %d do array: ", i+1);
        scanf("%d", array + i);
    }

    // Imprimindo o dobro de cada elemento do array
    for(i = 0; i < 8; i++){
        printf("\nDobro do elemeto %d: %d", i+1, (array[i] * 2));
    }

    // Imprimindo o endereço das posições contendo valores pares
    for (i = 0; i < 8; i++)
    {
        if (*(array + 1) % 2 == 0)
        {
            printf("\nElemento %d do array eh %d e seu endereco eh %d", i+1, *(array + i), array+i);
        }
    }
}
