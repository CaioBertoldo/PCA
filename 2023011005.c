//Faça uma função que transforme um número binário (expressado como um inteiro) num número decimal. A transformação entre essas bases pode ser feita com a forma 
//polinomial a seguir:
// Número binário: 1101   ==>  1×2³ + 1×2² + 0x2¹ + 1×2^0 = 8 + 4 + 0 + 1 = 13

#include <stdio.h>

int binary;

int binary_decimal(){

    int decimal = 0;
    int i = 0;
    int resto;

    while(binary != 0){
        resto = binary % 10;
        binary /= 10;
        decimal += resto * pow(2, i);
        ++i;
    }
    printf("The numberin decimal is %d", decimal);
    return decimal;
}

int main(){

    printf("Input a binary number: ");
    scanf("%d", &binary);

    binary_decimal();
}
