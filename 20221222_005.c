# PCA
/*Faça um programa em C que calcula e escreve a seguinte
soma: soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50*/

#include<stdio.h>

int main(void)
{
int numerador,denominador;
float soma;

numerador=1;
soma=0;

for(denominador=1; denominador<=50; denominador++){
soma=soma+ (float)numerador/denominador; 
numerador=numerador+2;
}
printf("%f",soma);
getchar();
getchar();
}
