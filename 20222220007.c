# PCA
// Em uma disciplina com três exercícios, um professor deseja saber qual a maior e a menor nota de cada exercício e qual a maior e 
// a menor média final. Faça um programa para auxiliá-lo nesta tarefa.
// O programa deve receber como entrada três notas de cada aluno em uma linha;
// Deve perguntar ao usuário se deseja inserir as notas de outro aluno, e:
// Caso a resposta seja “sim” deve solicitar os dados do próximo aluno.
// Caso a resposta seja “não” deve mostrar a maior e a menor nota do primeiro, do segundo, e do terceiro exercício e a maior e a 
// menor média.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char resposta[3];
    int i = 0;
    float nota1, maior_nota1 = 0, menor_nota1 = 0, nota2, maior_nota2 = 0, menor_nota2 = 0, nota3, maior_nota3 = 0, menor_nota3 = 0, media, maior_media = 0, menor_media = 0, soma;

    do{ 
        printf("\nInsira as notas do aluno: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        media = (nota1 + nota2 + nota3)/3;
        if(i == 0){
            maior_nota1 += nota1;
            maior_nota2 += nota2;
            maior_nota3 += nota3;
                
            menor_nota1 += nota1;
            menor_nota2 += nota2;
            menor_nota3 += nota3;

            maior_media += media;
            menor_media += media;

            i++;
        }else{
            if(nota1 > maior_nota1){
                maior_nota1 = nota1;
            }else if(nota1 < menor_nota1){
                menor_nota1 = nota1;
            }
                
            if(nota2 > maior_nota2){
                maior_nota2 = nota2;
            }else if(nota2 < menor_nota2){
                menor_nota2 = nota2;
            }
                
            if(nota3 > maior_nota3){
                maior_nota3 = nota3;
            }else if(nota3 < menor_nota3){
                menor_nota3 = nota3;
            }
            
            if(media > maior_media){
                maior_media = media;
            }else if(media < menor_media){
                menor_media = media;
            }
                
        }
        printf("\nDeseja colocar as notas de outro aluno? sim ou nao: ");
        scanf("%s", resposta);
    }while(strcmp(resposta, "sim") == 0);
    
    printf("\nMaior nota do exercicio 1: %f", maior_nota1);
    printf("\nMenor nota do exercicio 1: %f\n", menor_nota1);
    printf("\nMaior nota do exercicio 2: %f", maior_nota2);
    printf("\nMenor nota do exercicio 2: %f\n", menor_nota2);
    printf("\nMaior nota do exercicio 3: %f", maior_nota3);
    printf("\nMenor nota do exercicio 3: %f\n", menor_nota3);
    printf("\nMaior media: %f", maior_media);
    printf("\nMenor media: %f", menor_media);
}
