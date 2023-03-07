/*Escreva uma função que imprime os elementos de um vetor de float a partir de um endereço inicial (ponteiro) até um endereço final;
 A função recebe como parâmetros dois ponteiros para float (os endereços inicial e final) e deve utilizar notação de ponteiros não de vetores;
- Deve ser criada uma função main() para testar a função implementada com três vetores de tamanhos e conteúdos diferentes;
- A função main deve imprimir duas partes distintas de cada um dos três vetores, utilizando a função criada.*/

#include <stdio.h>
#include <stdlib.h>

void print_vet(float *start_adress, float *final_adress){

    // printar o vetor
    for (; start_adress <= final_adress; start_adress++)
    {
        printf("%.1f\n", *start_adress);
    }
    
}

int main(){
    float vector1[5] = {1.0, 2.0, 3.0, 4.0, 5.0,};
    float vector2[5] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    float vector3[5] = {1.2, 2.3, 3.4, 4.5};

    // Imprimindo os vetores completos
    print_vet(&vector1[0], &vector1[4]);
    printf("\n--------------\n");
    print_vet(&vector2[0], &vector2[6]);
    printf("\n--------------\n");
    print_vet(&vector3[0], &vector3[3]);
    printf("\n--------------\n");

    //Imprimir o vetor 1 por partes
    print_vet(&vector1[0], &vector1[1]);
    printf("\n--------------\n");

    print_vet(&vector1[2], &vector1[4]);
    printf("\n--------------\n");

    //Imprimir o vetor 2 por partes
    print_vet(&vector2[0], &vector2[3]);
    printf("\n--------------\n");

    print_vet(&vector2[3], &vector2[6]);
    printf("\n--------------\n");

    //Imorimir o vetor 3 por partes
    print_vet(&vector3[0], &vector3[1]);
    printf("\n--------------\n");

    print_vet(&vector3[2], &vector3[3]);

}
