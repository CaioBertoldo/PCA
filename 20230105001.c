# PCA
// Faça um programa que leia dois valores inteiros x e y entre 0 e 1000. Encontre o maior entre eles e imprima:
// O percentual do menor em relação ao maior
// O módulo da diferença entre o maior e o menor
// O programa deve utilizar três funções:
// a) scanIntIntervalo: Função para ler inteiros do teclado garantido que eles estejam dentro de um intervalo pré-determinado;
// b) percentual: Função para calcular o percentual:  100*valor/total
// c) absdif: Função que retorna o valor absoluto da diferença entre dois números reais. 

#include <stdio.h>

int x = 0;
int y = 0;
int cont = 0;
float maior, menor;

// Letra A
int scanIntIntervalo(){
    
    printf("Informe um valor entre 0 e 1000: \n");
    scanf("%i", &x);

    printf("Informe outro valor entre 0 e 1000: \n");
    scanf("%i", &y);

    return 0;
}

// Letra B
float percentual(){
    float perc;
    if (x > y){

        maior = x;
        menor = y;
    }
    else{

        maior = y;
        menor = x;
    }

    perc = 100 * menor / maior;
    return perc;

    printf("O percentual eh %.1f", perc);
}

// Letra C
int absdif(){
    int dif;
    dif = maior - menor;
    return dif;

    printf("A diferenca eh %i", dif);
}

int main(){

    scanIntIntervalo();
    percentual();
    absdif(); 
}
