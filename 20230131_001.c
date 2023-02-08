# PCA
/*Faça funções que:
- Receba uma palavra e a imprima de trás-para-frente. ´
- Receba do usuário uma string e imprime a string sem vogais.
- Transforma todos os caracteres de uma string em maiúsculos.
- Função que recebe uma string e um caractere, e retorne o número de vezes que esse caractere aparece na string.
- Função que recebe uma string e um caractere, e apague todas as ocorrências desse caractere na string
*/

#include <stdio.h>
#include <stdlib.h>
#define n 100

void tras_pra_frente(char palavra[n], int tamanho){

    int i;

    printf("\n Palavra digitada de tras para frente: ");
    
    for(i = tamanho - 1; i >= 0; i--){
        printf("%c", palavra[i]);
    }
}

void sem_vogais(char palavra[n], int tamanho){

    int i;
    char vogais[n];

    printf("\n Palavra digitada sem vogais: ");

    for(i = 0; i < tamanho; i++){
        vogais[i] = palavra[i];
        if(palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U'){
            vogais[i] = 32;
        }
        else{
            if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
                vogais[i] = 32;
            }
        }
        printf("%c", vogais[i]);
    }
}

void maiusculo(char palavra[n], int tamanho){

    int i;
    char mai[n];

    printf("\nPalavra digitada em maiuscula: ");

    for(i = 0; i < tamanho; i++){
        mai[i]= palavra[i];

        if(palavra[i] >= 'a' && palavra[i] <= 'z'){
            mai[i] -= 32;
        }
        printf("%c", mai[i]);
    }
}

int retorna_caractere(char palavra[n]){

    int i, cont=0;
    char caractere[1];

    printf("\n Insira um caractere: ");
    scanf("%s", caractere);

    for(i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] == caractere[0]){
            cont ++;
        }
    }

    if(cont == 0){
        printf("Caractere nao encontrado");
    }
    else{
        printf("Caractere aparece {%d} vezes", cont);
    }
    return cont;
}

void apaga_caractere(char palavra[n]){
    int i;
    char caracter[1];

    printf("\n Insira o caractere que sera apagado: ");
    scanf("%s", &caracter);

    for(i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] == caracter[0]){
            palavra[i] = 32;
        }
        printf("%c", palavra[i]);
    }
}

void main(){

    char palavra[n], caractere;
    int i, tamanho, ocorrente;

    printf("\n Digite uma palavra: ");
    scanf("%s", &palavra);

    for(i = 0; i <= sizeof(palavra); i ++){
        if(palavra[i] == '\0'){
            tamanho = i;
            break;
        }
    }
    
    tras_pra_frente(palavra, tamanho);
    sem_vogais(palavra, tamanho);
    maiusculo(palavra, tamanho);
    retorna_caractere(palavra);
    apaga_caractere(palavra);
}
