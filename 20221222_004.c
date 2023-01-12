# PCA
/*Dado um número identificar se é um número primo. (Um
número primo é aquele que é dividido apenas por um e por ele mesmo.)*/

#include <stdio.h>

int main(){
    int num, cont, result=0;

    printf("Input a number: ");
    scanf("%i", &num);

    for(cont=2; cont <= num / 2; cont++){
        if(num % cont == 0){
            result++;
            break;
        }
    }
    if(result == 0){
        printf("Is odd");
    }
    else{
        printf("Not is odd");
    }
    return 0;
}
