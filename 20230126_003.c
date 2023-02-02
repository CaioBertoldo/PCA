# PCA
/*Faça um programa que multiplica uma matriz 3 x 3 de inteiros por um escalar k e imprima o resultado na tela. O usuário deve fornecer os valores da matriz e de k.*/

#include <stdio.h>
#include <stdlib.h>

void produto_por_escalar(){
    
    int i, j, k;
    int matriz[3][3];

    printf("Escalar k: ");
    scanf("%d", &k);

    printf("MONTANDO A MATRIZ");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("\n %do numero da linha {%d}: ", j+1, i+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n---------- MOSTRANDO A MATRIZ ----------\n");

    for(i = 0; i < 3; i++){
        printf("|");
        for(j = 0; j < 3; j++){
            printf("\t [%d]", matriz[i][j]);
        }
        printf("\t |");
        printf("\n");
    }

    printf("\n---------- MULTIPLICANDO POR %d ----------\n", k);

    for(i = 0; i < 3; i++){
        printf("|");
        for(j = 0; j < 3; j++){
            printf("\t [%d]", k * matriz[i][j]);
        }
        printf("\t |");
        printf("\n");
    }
}

int main(){
    produto_por_escalar();
}
