#include <stdio.h>

int num = 0;

int par(){

    printf("Digite um numero: ");
    scanf("%i", &num);

    while (num % 2 != 0){

        printf("Erro, digite um numero par \n");
        printf("Digite um numero: ");
        scanf("%i", &num);
    }
    
    return 0;
}

int perfeito(){
    int i, soma = 0;

    for(i = 1; i <= num/2; i++){
        if(num % i == 0){
            soma += i;
        }
    }

    if (soma == num){
        printf("O numero %i eh perfeito", num); //caso seja perfeito
    }
    else{
        printf("O numero %i nao eh perfeito", num); // caso não seja perfeito
    }
}

int main(){

    par();
    perfeito();
}
