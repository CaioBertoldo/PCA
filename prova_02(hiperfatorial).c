# PCA
#include <stdio.h>
#include <math.h>

int num;

int inteiro_positivo(){
    printf("Input a integer: ");
    scanf("%i", &num);
    return 0;
}

int hiperfatorial(){
    int hf = 1;
    int cont = 0;
    
    printf("The hiperfactorial of the number [%i] is \n", num);
    for(cont=0; cont <= num; cont++){
        hf = pow(cont,cont) * hf;
    }
    printf("[%i]", hf);
    return hiperfatorial;
}

int main(){
    inteiro_positivo();
    hiperfatorial();
}
