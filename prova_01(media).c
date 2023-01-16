# PCA
#include <stdio.h>

int main(){

    float media, aritmetica, maior, menor;
    int soma=0, cont=0;

    while(media > 0){
        printf("Informe a media dos alunos: ");
        scanf("%f", &media);
        cont = cont + 1;
        soma = soma + media;

        if(media < 0){
            aritmetica = soma / cont;
            break;
        }
        if(cont == 1){
            maior = media;
            menor = media;
        }
        else{
            if(media > maior){
                maior = media;
            }
            else{
                if(media < menor && media > 0){
                    menor = media;
                }
            }
        }
    }
    printf("\n A maior media eh %.1f e a menor eh %.1f",maior, menor);
    printf("\n A media aritmetica das medias eh: %.1f", aritmetica);
}
