//Faça uma função que dados dois inteiros positivos x e y verifica se y corresponde aos últimos dígitos de x. Ex. x= 567890, y=890 R/corresponde; x= 2457, 
// y= 245 R/não corresponde; x= 457, y= 2457 R/não corresponde

#include <stdio.h>

int int_Positvo(int x, int y){
    int resto1, resto2, aux = 1;

    while(y != 0){
        resto1 = x % 10;
        x = x / 10;
        resto2 = y % 10;
        y = y / 10;
        if(resto1 != resto2){
            aux = 0;
            break;
        }   
    }
    return aux;
}

int main(){
    int x = -1, y = -1, funcao;

    while(x < 0 && y < 0){
        printf("\nDigite dois numeros inteiros positivos: ");
        scanf("%d %d", &x, &y);
    }

    funcao = int_Positvo(x, y);

    if(funcao == 1){
        printf("\nCorresponde");
    }else{
        printf("\nNao corresponde");
    }
    
}
