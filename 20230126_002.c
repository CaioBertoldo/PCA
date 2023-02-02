# PCA
/*Criar uma função que efetue e apresente o resultado da soma entre duas matrizes nxn.*/

#include <stdio.h>
#include <stdlib.h>
#define n 5

void soma_matriz(){

    int i, j, ordem;
    int matriz_1[n][n], matriz_2[n][n];

    printf("Ordem da matriz: ");
    scanf("%d", &ordem);

    printf("Montando a primeira matriz");
    
    for(i = 0; i < ordem; i++){
        for(j = 0; j < ordem; j++){
            printf("\n %do numero da linha {%d}: ", j+1, i+1);
            scanf("%d", &matriz_1[i][j]);
        }
    }

     printf("Montando a segunda matriz");
    
    for(i = 0; i < ordem; i++){
        for(j = 0; j < ordem; j++){
            printf("\n %do numero da linha {%d}: ", j+1, i+1);
            scanf("%d", &matriz_2[i][j]);
        }
    }

    printf("\n------------ MATRIZ 1 -------------\n");

    for(i = 0; i < ordem; i++){
        printf("|");
        for(j = 0; j < ordem; j++){
            printf("\t [%d]", matriz_1[i][j]);
        }
        printf("\t |");
        printf("\n");
    }

    printf("\n------------ MATRIZ 2 -------------\n");

    for(i = 0; i < ordem; i++){
        printf("|");
        for(j = 0; j < ordem; j++){
            printf("\t [%d]", matriz_2[i][j]);
        }
        printf("\t |");
        printf("\n");
    }

    printf("\n------------ SOMA DAS MATRIZES -------------\n");

    for(i = 0; i < ordem; i++){
        printf("|");
        for(j = 0; j < ordem; j++){
            printf("\t [%d]", matriz_1[i][j] + matriz_2[i][j]);
        }
        printf("\t |");
        printf("\n");
    }
}

int main(){
    soma_matriz();
}
