# PCA
/*Leia uma matriz 3 x 3. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e, ao final escrever a localização (linha e coluna) 
ou uma mensagem de “não encontrado”.*/

#include <stdio.h>
#include <stdlib.h>

void busca_valor(){

    int i, j, x;
    int matriz[3][3], linha, coluna, aux=0;

    printf("\n---------- MONTANDO A MATRIZ ----------\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("\n %do numero da linha {%d}: ",j+1, i+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Termo que voce deseja: ");
    scanf("%d", &x);

    printf("\n---------- MOSTRANDO A MATRIZ ----------\n");

    for(i = 0; i < 3; i++){
        printf("|");
        for(j = 0; j < 3; j++){
            printf("\t [%d]", matriz[i][j]);

            if(matriz[i][j] == x){
                linha = i+1;
                coluna = j+1;
                aux = 1;
            }
        }
        printf("\t |");
        printf("\n");
    }

    if(aux == 0){
        printf("Valor %d nao encontrado", x);
    }
    else{
         printf("Valor (%d) encontrado na posicao [%d , %d] ", x, linha, coluna);
    }
}

int main(){
    busca_valor();
}
