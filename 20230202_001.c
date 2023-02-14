# PCA
/*Na turma existem 5 equipes, cada equipe está integrada por 4 alunos definidos pelo nome e sobrenome do aluno.  
Crie um programa que permita armazenar os integrantes das equipes e incorpore a funcionalidade que dado um nome retorne em a equipe do aluno.*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define max 100

void procurar(char equipe[5][4][max]){
    char nome[max];
    int i, j;

    printf("\n Informe o nome e sobrenome de um dos membros da equipe: ");
    scanf(" %[^\n]s", &nome);

    for(i = 0; i < 5; i++){
        for(j = 0; j < 4; j++){
            if(strcmp(equipe[i][j], nome == 0)){
                printf("\n Equipe {%i}: ", i+1);
            }
        }
    }
}

void main(){
    char equipe[5][4][max];
    int i, j;

    printf("\n Digite o nome e sobrenome de cada integrante das equipes: ");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 4; j++){
            printf("\n Membro {%i} da equipe {%i}: ", j+1, i+1);
            scanf(" %99[^\n]s", &equipe[i][j]);
        }
    }
    procurar(equipe);
}
