# PCA
/*Dizemos que uma matriz quadrada inteira é um quadrado mágico (1) se a soma dos elementos de cada linha, a soma dos elementos de cada coluna e a 
soma dos elementos das diagonais principal e secundária são todas iguais.

Dada uma matriz quadrada A5x5 , verificar se A é um quadrado mágico.*/

#include <stdio.h>
#include <stdlib.h>

void quadrado_magico(){
    
    int soma_linha=0;
    int soma_coluna=0;
    int soma_principal=0;
    int soma_secundaria=0;
    int i, j, matriz[5][5];

    printf("\n---------- MONTANDO A MATRIZ ----------\n");

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

    printf("\n---------- SOMA DIAGONAL PRINCIPAL ----------\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i == j){
                soma_principal += matriz[i][j];
            }
        }
    }
    printf("\n A soma da diagonal principal vale {%d}\n", soma_principal);

    printf("\n---------- SOMA DA DIAGONAL SECUNDARIA ----------\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if((j + 1) + (i + 1) == 6){
                soma_secundaria += matriz[i][j];
            }
        }
    }
    printf("\n A soma da diagonal secundaria vale {%d}", soma_secundaria);

    printf("\n---------- SOMA DAS LINHAS ----------\n");

    for(i = 0; i < 5; i++){
        soma_linha = 0;
        for(j = 0; j < 5; j++){
            if(soma_linha ==  soma_linha){
                soma_linha += matriz[i][j];
            }
        }
    }
    printf("\n A soma de cada linha vale {%d}\n", soma_linha);

    printf("\n---------- SOMA DAS COLUNAS ----------\n");

    for(i = 0; i < 5; i++){
        soma_coluna = 0;
        for(j = 0; j < 5; j++){
            if(soma_coluna == soma_coluna){
                soma_coluna += matriz[i][j];
            }
        }
    }
    printf("\n A soma de cada coluna vale {%d}\n", soma_coluna);

    if(soma_coluna == soma_linha && soma_principal == soma_secundaria && soma_coluna == soma_principal && soma_linha == soma_secundaria){
        printf("\n A matriz e um quadrado magico\n");
    }
    else{
        printf("\nA matriz nao e um quadrado magico\n");
    }
}

int main(){
    quadrado_magico();
}
