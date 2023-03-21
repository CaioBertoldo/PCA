/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char.
 Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. 
 Imprima os valores das variáveis antes e após a modificação.*/

 #include <stdio.h>
 #include <stdlib.h>

 int main(){
    // Separando as variáveis inteiro, char e real
    int inteiro = 7;
    char str = 'c';
    float real = 0.5;

    // Associsndo as variáveis aos ponteiros
    int *integer = &inteiro;
    char *string = &str;
    float *virgula = &real;

    // Imprimindo os valores antes da modificação 
    printf("\nInteiro: %d", *integer);
    printf("\nChar: %c", *string);
    printf("\nReal: %f", *virgula);

    // Modificando os valores de cada variável
    *integer = 9;
    *string = 'a';
    *virgula = 0.76;

    // Imprimindo os valores após a modificação
    printf("\n--------------------------------\n");
    printf("\nInteiro: %d", *integer);
    printf("\nChar: %c", *string);
    printf("\nReal: %f", *virgula);
 }
 
