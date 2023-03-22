# PCA
/*Crie uma função para somar dois arrays. Esta função deve receber dois arrays e retornar a soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja
 diferente então a função retornará ZERO (0). 
Caso a função seja concluída com sucesso a mesma deve retornar o valor UM (1). Utilize aritmética de ponteiros para manipulação do array.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // Criando os vaetores e os ponteiros
    int vet1[3]={1, 2, 3}, vet2[3]={1, 2, 3}, vet3[3], *p1, *p2, *p3, i;

    // Mostrando para onde os ponteiros apontam
    p1 = vet1;
    p2 = vet2;
    p3 = vet3;

    // Somando o vetor 1 com o vetor 2
    for (i=0; i<3; i++) {
       *p3 = *p1 + *p2;
       p1++;
       p2++;
       p3++;
    }

    // Imprimindo o vetor 3 (soma do vetor 1 com o vetor 2)
    for(i=0; i<3;i++){
        printf("\tvet3[%d] = %d", i, vet3[i]);
    }

    if(vet1 > vet2 || vet2 > vet1){
        return 0;
    }

}
