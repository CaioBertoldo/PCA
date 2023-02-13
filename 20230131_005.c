# PCA
/*O código de Cesar é  uma das mais simples e conhecidas técnicas de criptografia. É um tipo de substituição na qual cada letra do texto é substituída por outra, 
que se apresenta no alfabeto abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, 
e assim por diante.
Implemente um programa que faça uso desse Código de Cesar (3 posições), entre com uma string e retorne a string codificada. Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100


void cifra_de_cesar(char mensagem[max], int tamanho){

    int pular1 = 3, pular2 = 23;
    int i;

    for(i=0; i < tamanho; i++){

        if(mensagem[i] >= 'a' && mensagem[i] <= 'w'){
            mensagem[i] += pular1;
        }

        if(mensagem[i] == 'x' || mensagem[i] == 'y' || mensagem[i] == 'z'){
            mensagem[i] -= pular2;
        }

        if(mensagem[i] >= 'A' &&mensagem[i] <= 'W'){
            mensagem[i] += pular1;
        }

        if(mensagem[i] == 'X' || mensagem[i] == 'Y' || mensagem[i] == 'Z'){
            mensagem[i] -= pular2;
        }
    }
}

int main(){

    char mensagem[max];
    int tamanho;

    printf("Escreva a mensagem a ser criptografada: ");
    scanf("%[^\n]s", mensagem);

    tamanho = strlen(mensagem);

    cifra_de_cesar(mensagem, tamanho);

    printf("A mensgem codificada eh: \n %s", mensagem);
}
