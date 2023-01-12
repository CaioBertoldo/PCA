# PCA
/*Faça um programa que leia vários inteiros positivos e mostre,
no final, a soma dos números pares e a soma dos números ímpares. O
programa para quando entrar um número maior que 1000.*/

#include <stdio.h>

int main(){
    int valor=0, par, impar, soma_par=0, somar_impar=0;

    while(valor < 1000){
        printf("Input an integer: ");
        scanf("%i", &valor);

        if(valor%2 == 0){
            par = valor;
            soma_par = (soma_par + valor);
        }
        else{
            impar = valor;
            somar_impar = somar_impar + valor;
        }
    }
    printf("\n Soma dos pares: %i",soma_par);
    printf("\n Soma dos impares: %i",somar_impar);
}
