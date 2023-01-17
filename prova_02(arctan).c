# PCA
/*Faça um programa em C com três funções:
- Função para solicitar do usuário um número real positivo no range [0,1].
- Função arctan que recebe o número real x [0,1] e devolve uma aproximação do arco
tangente de x (em radianos) através da série.

incluindo todos os termos da série até

- Função que imprima na tela uma mensagem com o número real e o arco tangente do
número em radianos.
Utilizar as funções num programa. Nas funções e no programa deverão ser tratados todos
os possíveis erros de entrada de dados.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float real_positivo(){
    float n;
    printf("Input a real number in range [0,1]: ");
    scanf("%f", &n);
    while(n < 0 || n > 1){
        printf("Only numbers in range 0 and 1, try again: ");
        scanf("%f", &n);
    }
    return n;
}

float arctan(float n){
    float arct=0, cont=1, rad;
    int cont_2 = 1;
    arct = arct + n;

    while((pow(n,cont)/cont) >= 0.0001){
        cont = cont + 2;
        cont_2 = cont_2 +1;

        if(cont_2 % 2 == 0){
            arct -= (pow(n,cont)/cont);
        }
        else{
            arct += (pow(n,cont)/cont);
        }
    }
    rad = (arct*3.14159)/180;
    return rad;
}

void imprime_radianos(float n, float rad){
    printf("The number [%.2f] in radians is [%f]",n,rad);
}

int main(){
    float s, arc;

    s = real_positivo();
    arc = arctan(s);
    imprime_radianos(s, arc);
}
