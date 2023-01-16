# PCA
/*Dado um número n inteiro e positivo, dizemos que n é perfeito
se n for igual à soma de seus divisores positivos diferentes de n. Construa um
programa em C que verifique se um dado número é perfeito. Ex: 6 é perfeito,
pois 1+2+3 = 6.*/

#include <stdio.h>

int main(){
    int n=0, cont=0, soma_divisores=0;

    printf("Input a number: ");
    scanf("%d", &n);

    for(cont=1; cont < n; cont++){
        if(n % cont == 0){
            soma_divisores = soma_divisores + cont;
        }
    }
    if(soma_divisores == n){
        printf("The number [%d] is perfect",n);
    }
    else{
        printf("The number [%d] is not perfect",n);
    }
    return 0; 
}
