# PCA
/*Criar e utilizar num programa uma função que receba uma sequência de n números e mude a sequência para o fatorial de cada uns dos números da sequência
(o comprimento máximo da sequência é 100 pelo que n tem que ser um número menor que 100). Exemplo: sequência inicial {2,5,7}  
sequência final {2, 120, 5040}*/

#include <stdio.h>
#include <stdlib.h>


int main(){

    int vetor[101];
    int i, factorial[101];

    printf("Insiras a quantidade de numeros que vc quer: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){

        printf("Input a integer: ");
        scanf("%d", &vetor[i]);
    }
    
    for(i=0; i < n; i++){
        for (factorial[i] = 1; vetor[i] > 1; vetor[i]--) {
            
            factorial[i] *= vetor[i];
        }
    }

    for(i=0; i < n; i++){
        printf("{%d}\n", factorial[i]);
    }
}
