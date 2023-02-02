# PCA
/*Construa um algoritmo que efetue e apresente o resultado da soma entre duas matrizes 3 x 5. Inicialize a matriz com valores quaisquer e imprima o resultado na tela.*/

#include <stdio.h>
#include <stdlib.h>

void soma_matriz(){

    int i, j, matriz1[3][5];
    int matriz2[3][5];

    printf("Montando a primeira matriz\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("\n %do numero da linha {%d}: ", j+1, i+1);
            scanf("%d", &matriz1[i][j]);
        }    
    }

    printf("Montando a segunda Matriz: ");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("\n %do numero da linha {%d}: ", i+1, j+1);
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("------------ MATRIZ 1 -------------\n");

    for(i = 0; i < 3; i++){
        printf("|");
        for(j = 0; j < 5; j++){
            printf("\t [%d]", matriz1[i][j]);
        }
        printf("\t |");
        printf("\n");
    }   

    printf("------------ MATRIZ 2 -------------\n");

    for(i = 0; i < 3; i++){
        printf("|");
        for(j = 0; j < 5; j++){
            printf("\t [%d]", matriz2[i][j]);
        }
        printf("\t |");
        printf("\n");
    }

    printf("------------ SOMA DAS MATRIZES -------------\n");

    for(i = 0; i < 3; i++){
        printf("|");
        for(j = 0; j < 5; j++){
            printf("\t [%d]", matriz1[i][j] + matriz2[i][j]);
        }
        printf("\t |");
        printf("\n");
    }
}

int main(){
    soma_matriz();
}
