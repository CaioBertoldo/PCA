# PCA
/*Leia uma cadeia de caracteres no formato “DD/MM/AAAA” e copie o dia, mês e ano para 3 variáveis inteiras. 
Antes disso, verifique se as barras estão no lugar certo, e se DD, MM e AAAA são numéricos.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char data[11];
    int dia, mes, ano;

    printf("\nInforme uma data no formato DD/MM/AAAA: ");
    scanf("%s", data);

    if(strlen(data) != 10 || data[2] != '/' || data[5] != '/' || !isdigit(data[0]) || !isdigit(data[1]) || !isdigit(data[3]) || !isdigit(data[4]) || !isdigit(data[7]) 
            || !isdigit(data[8]) || !isdigit(data[9])){
        printf("\nO formato digitado esta errado\n");
    }

    dia = (data[0] - '0') * 10 + (data[1] - '0');
    mes = (data[3] - '0') * 10 + (data[4] - '0');
    ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + (data[8] - '0') * 10 + (data[9] - '0');

    if(mes == 2){
        if(dia < 0 || dia > 28){
            printf("\nData inexistente\n");
        }
        else{
            printf("\nDia: %i \nMes: %i \nAno: %i", dia, mes, ano);
        }
    }

    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        if(dia < 0 || dia > 31){
            printf("\nData inexistente");
        }
        else{
            printf("\nDia: %i  \nMes: %i \nAno: %i", dia, mes, ano);
        }
    }

    if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if(dia < 0 || dia > 30){
            printf("\nData inexistente");
        }
        else{
            printf("\nDia: %i \nMes: %i \nAno: %i", dia, mes, ano);
        }
    }
}
