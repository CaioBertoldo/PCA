# PCA#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float *notas, int numero, float *media, float *desvio);
float quadrado(float n);
int main(){
    int n, i;
    float *notas;
    float media, desvio;
    printf("Insira a quantidade de alunos: ");
    scanf("%i", &n);

    notas = (float*) malloc(n * sizeof(float));
    if(notas == NULL){ 
        printf("Nao foi possivel alocar memoria.\n");
        return 0;
    }
    for(i = 0; i < n; i++){
        printf("Insira a nota do aluno: ");
        scanf("%f", (notas + i));
    }
    mediaDesvio(notas, n, &media, &desvio);
    printf("A media das notas da turma e %.2f, enquanto o desvio e %.2f", media, desvio);
    free(notas);
    return 1;
}

void mediaDesvio(float *notas, int numero, float *media, float *desvio){
    float amedia = 0;
    float adesvio = 0;
    int i;
    for(i = 0; i < numero; i++){
        amedia += *(notas + i);
    }
    *media = amedia/numero;
    for(i = 0; i < numero; i++){
        adesvio += quadrado(*(notas + i) - *media);
    }
    *desvio = sqrt(adesvio/numero);
    return;

}

float quadrado(float n){
    return n*n;
}
