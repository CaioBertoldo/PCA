#include <stdio.h>

int main(){

    int cont=0, maior=0, menor=0, n ;

    while(cont <= 20){

        printf("Digite um numero: \n");
        scanf("%i",&n);
        cont = cont + 1;

        if(n < 0){
            printf("Erro!!!, digite somente numeros positivos\n");
        }
        if(cont == 1){
            maior = n;
            menor = n;
        }
        else{
            if(n > maior){
                maior = n;
            }
            else{
                if(n < menor){
                    menor = n;
                }
            }
        }
    }
    printf("\n O maior valor eh %i e o menor eh %i",maior, menor);
}
