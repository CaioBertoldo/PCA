# PCA
/*Faça um programa que, dada uma string, diga se ela e um palíndromo ou não. Lembrando que um palíndromo e uma palavra que tenha a propriedade de poder ser
 lida tanto da direita para a esquerda como da esquerda para a direita. 
Exemplo: ovo, arara, Anotaram a data da maratona.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra[100];
    int i, tamanho, diferentes=0;

    printf("\n Digite uma palavra: ");
    scanf("%s", &palavra);

    tamanho = strlen(palavra);
    tamanho--;
    i = 0;

    while(tamanho >= i){
        if(palavra[i] != palavra[tamanho]){
            diferentes++;
        }
        i++;
        tamanho--;
    }

    if(diferentes == 0){
        printf("\n A palavra eh palindroma");
    }
    else{
        printf("\n A palavra nao eh palindroma");
    }
}
