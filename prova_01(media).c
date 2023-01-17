/*Faça um programa que leia as notas finais de vários alunos de uma turma e mostre a maior
nota, a menor nota e a média aritmética simples das notas da turma. O programa pára
quando encontrar uma nota negativa. sem break*/

#include <stdio.h>

int main(){

    float nota, media, maior, menor,soma=0;
    int cont=0;

    do{
        printf("Input the notes: ");
        scanf("%f", &nota);
        if(nota >= 0){
            cont += 1;
            soma += nota;

            if(cont == 1){
                maior = nota;
                menor = nota;
            }
            else{
                if(nota > maior){
                    maior = nota;
                }
                else{
                    if(nota < menor && nota > 0){
                        menor = nota;
                    }
                }
            }
        }    
            media = soma / cont;
    } while (nota > 0);
    
    printf("The biggest note is [%.1f] and the smallest is [%.1f]\n",maior, menor);
    printf("The average of class is [%.1f]", media);
    return 0;
}

