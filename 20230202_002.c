# PCA
/*Implementar uma função que receba uma lista de nomes inseridos pelo usuário  (até 20 nomes com até 120 caracteres). 
O usuário pode inserir desde zero até 20 nomes.  Criar funções para;
a) imprimir a lista de nomes
b) Eliminar um nome da lista.
c) Imprimir os nomes da lista em ordem alfabética.
d) Inserir os nomes da lista em outra lista em ordem alfabética.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 120

void lista_de_nomes(char nomes[21][max], int tamanho_lista){
    int i;

    printf("\n Lista de nomes: ");
    for(i = 0; i < tamanho_lista; i++){
        printf("\n %s", nomes[i]);
    }
}

void elimina_nome(char nomes[21][max], int tamanho_lista){
    int i, j;
    char nome_elimiado[max];

    printf("\n Informe o nome que voce quer eliminar da lista: ");
    scanf(" %[^\n]s", nome_elimiado);
    
    for(i = 0; i < tamanho_lista; i++){

        if(strcmp(nomes[i], nome_elimiado) == 0){
            for(j = strlen(nomes[i]); j >= 0; j--){
                nomes[i][j] = 0;
            }
        }
        printf("\n %s", nomes[i]);
    }
}

void ordem_alfabetica(char nomes[21][max], int tamanho_lista){
    int i, j;
    char aux[max];

    for(i = 0; i < tamanho_lista; i++){
        for(j = 0; j < tamanho_lista; j++){
            if(strcmp(nomes[j - 1], nomes[j]) > 0){
                strcpy(aux, nomes[j - 1]);
                strcpy(nomes[j - 1], nomes[j]);
                strcpy(nomes[j], aux);
            }
        }
    }

    for(i = 0; i < tamanho_lista; i++){
        printf("\n %s", nomes[i]);
    }
}

void main(){
    char nomes[21][max], opcao;
    int tamanho_lista=0, i;

    printf("\nDigite uma lista de ate 20 nomes: ");
    printf("\nOBS: digite parar para fechar.");

    for(i = 0; i < 20; i++){

        printf("\n Nome {%i}: ", i+1);
        scanf(" %[^\n]s", nomes[i]);

        if(strcmp(nomes[i], "parar") == 0){
            break;
        }
        else{
            tamanho_lista++;
        }
    }

    printf("\n Escolha uma das opcoes abaixo: "
    "\n a) imprimir a lista de nomes."
    "\n b) Eliminar um nome da lista."
    "\n c) Imprimir os nomes da lista em ordem alfabetica."
    "\n d) Sair do programa");

    while(opcao != 'd'){
        printf("\n Opcao escolhida: ");
        scanf(" %c", &opcao);

        switch (opcao){
        
        case 'a':
            lista_de_nomes(nomes,tamanho_lista);        
            break;
        
        case 'b':
            elimina_nome(nomes,tamanho_lista);
            break;
        case 'c':
            ordem_alfabetica(nomes, tamanho_lista);
            break;

        case 'd':
            printf("FIM!!");
            break;
            
        default:
            break;
        }
    }
}
