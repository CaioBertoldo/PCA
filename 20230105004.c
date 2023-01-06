#include <stdio.h>

int fatorial(){

    int fat, n;
    printf("Digite um valor: ");
    scanf("%i", &n);

    for (fat = 1; n > 1; n = n - 1){
        fat = fat * n;
    }

    printf("Fatorial de %i eh %i",n, fat);
    return 0;
}

int main(){
    fatorial();
}
