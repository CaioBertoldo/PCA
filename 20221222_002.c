# PCA
/*Escreva um programa em C que lê 15 valores reais, encontra
o maior e o menor deles e mostra o resultado.*/

#include <stdio.h>

int main(){

    float cont, maior, menor, valor;

    for(cont=1; cont <= 5; cont++){
        printf("\nInput a value: ");
        scanf("%f", &valor);

        if(cont == 1){
            maior = valor;
            menor = valor;
        }
        else{
            if(valor > maior){
                maior = valor;
            }
            else{
                if(valor < menor){
                    menor = valor;
                }
            }
        }
    }
    printf("\nThe highest value is %.1f and the smallest is %.1f ",maior, menor);
}
