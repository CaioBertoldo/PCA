// Usando a função programada em 1 crie outra função que recebe dos números inteiros positivos e verifica se o primeiro é uma 
// permutação de b (para a ser uma permutação tem que ter de cada número entre 0 e 9 a mesma quantidade)

#include <stdio.h>

int conta_digitos(int n, int d){

    int dig;
    int cont=0;

    while (n > 0)
    {
        dig = n % 10;
        n = n / 10;

        if (dig == d)
        {
            cont = cont + 1;
        }
        
    }
}

int main(){
    
    int a,b,d;
    int perm; 

    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);
    perm = 1;

    for(d = 0; d <= 9; d++){
        if(conta_digitos(a,d) != conta_digitos(b,d)){
            perm = 0;
        }
    }

    if(perm ==1){
        printf("%d is permutation of %d\n",a,b);
    }
    else{
        printf("%d is not permutation of %d\n",a,b);
    }
    return 0;
}
