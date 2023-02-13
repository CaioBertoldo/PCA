# PCA
/*Faça um programa que contenha um menu com as seguintes opções:
(a) Ler uma string S1 (tamanho máximo 20 caracteres); ´
(b) Imprimir o tamanho da string S1;
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparação;
(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação;
(e) Imprimir a string S1 de forma reversa;
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuário;
(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serão lidos pelo usuário;
(h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo usuário;
(i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de qual posição deve ser criada a substring e qual é o tamanho da substring*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 20

void opcao_a(){
    char S1[max];

    printf("\n Digite a string S1: \n");
    scanf("%s", &S1);
    printf("\n");

    scanf("%c");
}

void opcao_b(){
    char S1[max];
    int tamanhoS1;

    printf("\n Digite a string S1: \n");
    scanf("%s", &S1);

    tamanhoS1 = strlen(S1);

    printf("\n O tamanho da string S1 vale {%i}\n", tamanhoS1);

    
}

void opcao_c(){
    char S1[max];
    char S2[max];
    int tamanhoS2, comparacao;

    printf("\n Digite a string S1: \n");
    scanf("%s", &S1);

    printf("\n Digite a string S2: \n");
    scanf("%s", &S2);

    tamanhoS2 = strlen(S2);

    comparacao = strcmp(S1,S2);

    if(comparacao == 0){
        printf("\n S1 e S2 sao iguais\n");
    }
    else{
        printf("\n S1 e S2 nao sao iguais\n");
    }

    scanf("%c");
}

void opcao_d(){
    char S1[max];
    char S2[max], concatenar[max];

    printf("\n Insira a string S1: \n");
    scanf("%s", &S1);

    printf("\n Insira uma nova string: \n");
    scanf("%s", &S2);

    strcpy(concatenar,S1);

    strcat(concatenar,S2);

    printf("%s", concatenar);

    scanf("%c");
}

void opcao_e(){
    char S1[max];
    int tamanhoS1, i;

    printf("\n Insisra a string S1: \n");
    scanf("%s", &S1);

    tamanhoS1 = strlen(S1);

    for(i = tamanhoS1 - 1; i >= 0; i--){
        printf("%c", S1[i]);
    }

    scanf("%c");
}

int opcao_f(){
    char S1[max], caractere[2];
    int cont=0, i;

    printf("\n Insira a string S1: \n");
    scanf("%s", &S1);

    printf("\n Insira o caractere a ser contado: \n");
    scanf("%s", &caractere);

    for(i = 0; S1[i] != '\0'; i++){
        if(S1[i] == caractere[0]){
            cont = cont + 1;
        }
    }

    if(cont == 0){
        printf("\n Caractere nao encontrado\n");
    }
    else{
        printf("\nO caractere aparece {%i} vezes\n", cont);
    }
    scanf("%c");
    return cont;
}

void opcao_g(){
    char S1[max], C1[2], C2[2];
    int i, tamanhoS1;; 

    printf("\n Insira a string S1: ");
    scanf("%s", &S1);

    tamanhoS1 = strlen(S1);

    printf("\n Digite o termo C1: ");
    scanf("%s", &C1);

    printf("\n Insira o termo C2: ");
    scanf("%s", &C2);

    printf("\n Resultado: ");
    for(i = 0; i < tamanhoS1; i++){
        if(S1[i] == C1[0]){
            S1[i] = C2[0];
        }
        printf("%c", S1[i]);
    }
    scanf("%c");
}

void opcao_h(){
    char S1[max], S2[max];
    int tamanhoS1, i;
    char * verificar;

    printf("\n Digite a string S1: ");
    scanf("%s", &S1);

    tamanhoS1 = strlen(S1);

    printf("\n Digite a string S2: ");
    scanf("%s", &S2);

    verificar = strstr(S1,S2);

    if(verificar != NULL){
        printf("\nS2 eh substring de S1");
    }
    else{
        printf("\nS2 nao eh substring de S1");
    }
    scanf("%c");
}

void opcao_i(){
    char S1[max];
    int posicao=0, tamanhoS1, i, tamanho_substring = -1, aux;
    printf("\n Digite a string S1: ");
    scanf("%s", &S1);

    tamanhoS1 = strlen(S1);

 while (posicao <= 0 || posicao > tamanhoS1){
        printf("\nDigite a posicao que a substring comeca: ");
        scanf("%d", &posicao);
        if(posicao <= 0 || posicao > tamanhoS1){
            printf("\nULTRAPASSOU O LIMITE");
        }
    }

    aux = tamanhoS1 - posicao + 1;

    while(tamanho_substring <= 0 || tamanho_substring > aux){
        printf("\nDigite o tamanho da substring: ");
        scanf("%d", &tamanho_substring);
        if(tamanhoS1 <= 0 || tamanho_substring > aux){
            printf("\nULTRAPASSOU O LIMITE");
        }
        
    }
    
    printf("\nResultado: ");
    for (i = posicao - 1; i < posicao + tamanho_substring - 1; i++){
        printf("%c",S1[i]);
    }
    scanf("%c");
}

int main(){
    char opcao;
    
    printf("\n Escolha a opcao do menu: "
        "\n(a) Ler uma string S1 (tamanho maximo 20 caracteres)," 
        "\n(b) Imprimir o tamanho da string S1," 
        "\n(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o resultado da comparacao," 
        "\n(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenacao,"
        "\n(e) Imprimir a string S1 de forma reversa"
        "\n(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuario,"
        "\n(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serao lidos pelo usuario,"
        "\n(h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo usuario,"
        "\n(i) Retornar uma substring da string S1. Para isso o usuario deve informar a partir de qual posicao deve ser criada a substring e qual eh o tamanho da substring,"
        "\n(s) Sair.\nOpcao escolhida: "
        );

    while (opcao != 's'){
        
        scanf("%c", &opcao);

        switch (opcao)
        {
        case 'a':
            opcao_a();
            break;

        case 'b': 
            opcao_b();
            break;

        case 'c':
            opcao_c();
            break;

        case 'd':
            opcao_d();
            break;

        case 'e':
            opcao_e();
            break;

        case 'f':
            opcao_f();
            break;
        
        case 'g':
            opcao_g();
            break;

        case 'h':
            opcao_h();
            break;

        case 'i':
            opcao_i();
            break;

        default:
            break;
        }

        printf("\n Escolha outra opcao: ");
    }
}
