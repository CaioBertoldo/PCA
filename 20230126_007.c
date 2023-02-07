# PCA
/*Os elementos aij de uma matriz inteira Anxn representam os custos de transporte da cidade i para a cidade j. Dados n itinerários, cada um com k cidades, 
calcular o custo total para cada itinerário.

Exemplo:
4    1    2    3
5    2    1    400
2    1    3    8
7    1    2    5

O custo do itinerário 0 3 1 3 3 2 1 0 é

a03 + a31 + a13 + a33 + a32 + a21 + a10 = 3 + 1 + 400 + 5 + 2 + 1 + 5 = 417*/

#include <stdio.h>
#include <stdlib.h>
#define n 100

void itinerario(){

    int i, j;
    int custo=0, matriz[n][n], origem, destino, cidade, nCidades;

    printf("\n Informe o numero de cidades: ");
    scanf("%d", &cidade);

    for(i = 0; i < cidade; i++){
        for(j = 0; j < cidade; j++){
            printf("\n Itinerario cidade {%d} a cidade {%d} ", j + 1, i + 1);
            scanf("%d", matriz[i][j]);
        }
    }

    printf("\n Digite o numero de cidades a serem percorridas: ");
    scanf("%d", &nCidades);

    printf("\n Informe a ordem dos itinerarios a serem percorridos: ");
    for(i = 1; i < nCidades; i++){
        if( i == 1){
            printf("\n Cidade de origem: ");
            scanf("%d", &origem);
        }
        printf("\n Cidade de destino {%d}: ", i);
        scanf("%d", &destino);

        custo += matriz[origem][destino];

        origem = destino;
    }

    printf("\n O custo do itinerario vale {%d}", custo);
}

int main(){
    itinerario();
}
