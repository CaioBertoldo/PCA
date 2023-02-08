# PCA
/*Faça um programa que preencha uma matriz de string com os modelos de cinco carros (exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, 
preencha um vetor com o consumo desses carros, isto e, quantos quilômetros cada um deles faz com um litro de combustível. Calcule e mostre:
(a) O modelo de carro mais econômico;
(b) Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distância de 1.000 quilômetros.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

void carro(){

    char carro[5][max];
    int i, economico, maior;
    float km[max], custo;

    for(i = 0; i < 5; i++){
        printf("\n Informe um carro: ");
        scanf("%s", &carro[i]);
    }

    for(i = 0; i < 5; i++){
        printf("|");
        printf("%s", carro[i]);
        printf("\t |");
        printf("\n");
    }

    for(i = 0; i < 5; i++){
        printf("\n Informe quantos km por litro o carro %s faz: ", carro[i]);
        scanf("%f", &km[i]);

        if(i == 0){
        maior = km[i];
        economico = i;
        }
        else{
            if(km[i] > maior){
                maior = km[i];
                economico = i;
            }
        }
    }


    printf("\n O carro mais economico eh o %s\n", carro[economico]);

    for(i = 0; i < 5; i++){
        custo = 1000 / km[i];
        printf("\n O carro %s gasta %.1f litros de combustivel\n ", carro[i], custo);
    }
}

void main(){
    carro();
}
