// Faça uma função que dados um inteiro n e um inteiro d, 0 < d < 9, devolve quantas vezes o dígito d aparece em n. (dica: utilizar o operador % na solução )

#include <stdio.h>

int main(){
    int n, d;
    int dig;
    int cont=0;

    printf("Digite n(n > 0): ");
    scanf("%d", &n);

    printf("Digite d(0 < d < 9): ");
    scanf("%d", &d);

    while (n > 0)
    {
        dig = n % 10;
        n = n / 10;

        if (dig == d)
        {
            cont = cont + 1;
        }
        
    }
    printf("O digito %d ocorre %d",d, cont);

}
