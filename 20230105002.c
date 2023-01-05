#include <stdio.h>

float peso;
int semanas;

float PesoSemanas(){

    printf("Informe o peso do feto em gramas: \n");
    scanf("%f", &peso);

    printf("Informe a quantidade de semans da gestacao: \n");
    scanf("%i", &semanas);

    return 0;
}

float parto(){
    if (peso < 100 || semanas < 28){

        printf("Parto nao devera ser realizado, reavaliar clinicamente");
    }
    else{
        if(peso > 2500 && semanas > 28){

            printf("Parto normal");
        }
        else{
            if(peso > 2500 && semanas < 28){

                printf("Parto Cesariana");
            }
            else{
                if(2500 < peso < 1500 && semanas > 36){

                    printf("Parto normal");
                }
                else{
                    printf("Parto Cesariana");
                }
            }
        }
    }
    
    return 0;
}

int main(){

    PesoSemanas();
    parto();
}
