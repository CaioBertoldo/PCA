#include <stdio.h>

int fib(int n){
    int i;
    int fib1 = 1;
    int fib2 = 2;
    int soma;

    for (i = 3; i <= n; i = i + 1){

        soma = fib1 + fib2;
        fib1 = fib2;
        fib2 = soma;
    }
    return fib2;
}

int main(){
    int n;
    scanf("%i", &n);
    printf("%i\n", fib(n));
    return 0;
}
