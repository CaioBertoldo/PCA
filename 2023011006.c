// Faça uma função que transforme um numero decimal em binário. (procura em internet como é feita essa transformação)

#include <stdio.h>

void decimal_binary(int dec);
int main(){
    int dec;

    printf("Input a int number: ");
    scanf("%d", &dec);

    printf("Result: ");
    decimal_binary(dec);
    return 0;
}

void decimal_binary(int dec){
    int n;

    if (dec/2 != 0){
        n = dec / 2;
        decimal_binary(n);
        printf("%d", dec%2);
    }
    else{
        printf("&d", dec%2);
    }
}
