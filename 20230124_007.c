# PCA
/*Tentando descobrir se um dado era viciado, um dono de cassino o lançou n vezes. Dados os n resultados dos lançamentos, 
determinar o número de ocorrências de cada face.*/

#include <stdio.h>
#include <stdlib.h>
    
int main(void)
{
    int dado[6], n, i, face;

    printf("Quantas vezes o dado sera lancado? ");
    scanf("%d", &n);
    
    for (i = 0; i < 6; i = i + 1){
        dado[i] = 0;
    }   

    for (i = 1; i <= n; i = i + 1){
        
        printf("Face mostrada: ");
        scanf("%d", &face);
        face = face - 1;
        dado[face] = dado[face] + 1;
    }

    for (i = 0; i < 6; i = i + 1){
        printf("A face [%d] apareceu {%d}\n", i + 1, dado[i]);
    }
}
