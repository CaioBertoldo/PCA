/*Escreva uma função que encontra um valor em um vetor de inteiros e retorna um ponteiro para o primeiro endereço onde este valor foi encontrado ou NULL caso o valor
 não esteja no vetor;
- A função recebe como parâmetro dois ponteiros para inteiros (os endereços inicial e final) e deve utilizar notação de ponteiros não de vetores;
- Deve ser criada uma função main() para testar a função implementada. Na função main deve ser declarado um vetor de tamanho 10, com três ocorrências do valor 2;
- A main() deve utilizar a função criada para encontrar  e imprimir os endereços de memória de todas as ocorrências do valor 2, em um laço, até que todo o vetor tenha
 sido pesquisado.
- Defina a constante NULL se necessário.*/

#include <stdio.h>
#include <stdlib.h>

int * vetor_ponteiro(int *arr, int valor, int *fim){
    for(arr; arr <= fim; arr++){
        if(*arr == valor){
            return arr;
        }
    }
    return NULL;
}

int main(){
    int iarray[] = {1, 2, 3, 4, 5, 2, 7, 2, 9, 10};
    int *inteiro;
    int j;

    for(j = 0; j < 10; j++){
        printf("\n Valor: %d no endereco %d", iarray[j], &iarray[j]);
    }

    inteiro = vetor_ponteiro(iarray, 2, &iarray[5]);

    if(inteiro != NULL){
        printf("\n-------------------------------------------");
        printf("\n Valor: %d no endereco %d", *inteiro, inteiro);
    }
    else{
        printf("\n-------------------------------------------");
        printf("\n Valor nao encontrado");
    }
    return 0;
}
