# PCA
/*Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de entrada e retorne eles ordenados, ou seja, 
o menor valor na primeira variável, o segundo menor valor na variável do meio, e o maior valor na última variável.
A função deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na tela.*/

#include <stdio.h>
#include <stdlib.h>

int ordenar(int n1, int n2, int n3){

    //Caso o n1 seja menor que o n2 e o n2 seja menor que o n3
    if(n1 <= n2 && n2 <= n3){
        printf("\nValores ordenados: %d %d %d", n1, n2, n3);
    }

    //Caso o n1 seja menor que o n3 e o n3 seja menor que o n2
    if(n1 <= n3 && n3 <= n2){
        printf("\nValores ordenados: %d %d %d", n1, n3, n2);
    }

    //Caso o n2 seja menor que o n1 e o n1 seja menor que o n3
    if(n2 <= n1 && n1 <= n3){
        printf("\nValores ordenados: %d %d %d", n2, n1, n3);
    }

    //Caso o n2 seja menor que o n3 e o n3 seja menor que o n1
    if(n2 <= n3 && n3 <= n1){
        printf("\nValores ordenados: %d %d %d", n2, n3, n1);
    }

    // Caso o n3 seja menor que o n1 e o n1 seja menor que o n2
    if(n3 <= n1 && n1 <= n2){
        printf("\nValores ordenados: %d %d %d", n3, n1, n2);
    }

    // Caso o n3 seja menor que o n2 e o n2 seja menor que o n1
    if(n3 <= n2 && n2 <= n1){
        printf("\nValores ordenados: %d %d %d", n3, n2, n1);
    }

    // Caso os valores sejam iguais
    if(n1 == n2 && n2 == n3){
        return 1;
    }
}

int main(int n1, int n2, int n3){
    

    // Dando um valor às variáveis
    printf("\n Informe o primeiro valor: ");
    scanf("%d", &n1);

    printf("\n Informe o segundo valor: ");
    scanf("%d", &n2);

    printf("\n Informe o terceiro valor: ");
    scanf("%d", &n3);

    ordenar(n1, n2, n3);

}
