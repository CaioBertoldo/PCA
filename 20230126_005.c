# PCA
/*Dada uma matriz 5x5, elabore um algoritmo que imprima:
A diagonal principal
A diagonal secundária
A soma da linha 4
A soma da coluna 2
Tudo, exceto a diagonal principal*/

#include <stdio.h>
#include <stdlib.h>

void m5x5(){

    int i, j, matriz[5][5];
    int soma_linha=0, soma_coluna=0;

    printf("\n----------  CONSTRUINDO A MATRIZ ----------\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("\n %do numero da linha {%d}: ", j+1, i+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n---------- MOSTRANDO A MATRIZ ----------\n");

    for(i = 0; i < 5; i++){
        printf("|");
        for(j = 0; j < 5; j++){
            printf("\t [%d]", matriz[i][j]);
        }
        printf("\t |");
        printf("\n");
    }

    printf("\n---------- DIAGONAL PRINCIPAL ----------\n");

    for(i = 0; i < 5; i++){
        printf("|");
        for(j = 0; j < 5; j++){
            if(i == j){
                printf("\t [%d]", matriz[i][j]);
            }
        }
        printf("\t |");
        printf("\n");
    }

    printf("\n---------- DIAGONAL SECUNDARIA ----------\n");

    for(i = 0; i < 5; i++){
        printf("|");
        for(j = 0; j < 5; j++){
            if((i+1) + (j+1) == 6){
                printf("\t [%d]", matriz[i][j]);
            }
        }
        printf("\t |");
        printf("\n");
    }

    printf("\n---------- SOMA DA LINHA 4 ----------\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if((i+1) == 4){
                soma_linha += matriz[i][j];
            }
        }
    }
    printf("\n A soma da linha 4 vale {%d}\n", soma_linha);

    printf("\n---------- SOMA DA COLUNA 2 ----------\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if((j+1) == 2){
                soma_coluna += matriz[i][j];
            }
        }
    }
    printf("\n A soma da coluna 2 vale {%d}\n", soma_coluna);

    printf("\n---------- TUDO EXCETO A DIAGONAL PRINCIPAL ----------\n");

    for(i = 0; i < 5; i++){
        printf("|");
        for(j = 0; j < 5; j++){
            if(i != j){
                printf("\t [%d]", matriz[i][j]);
            }
        }
        printf("\t |");
        printf("\n");
    }
}

int main(){

    m5x5();
}
