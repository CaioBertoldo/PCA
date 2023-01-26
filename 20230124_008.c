# PCA
/*Dados dois vetores x e y, ambos com n elementos, determinar o produto escalar desses vetores.
  a)Crie uma função para determinar o produto escalar de dois vetores com n elementos.
O produto escalar de dois vetores A=(a1, a2,..,an) e B=(b1, b2, ..., bn) é ∑aibi  onde 1 ≤ i ≤ n
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(){

    int n, i;
    float produto_escalar, x[MAX], y[MAX];

    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &n);

    printf("Informe os componentes do vetor X: ");
    for(i = 0; i < n; i++){
        scanf("%f", &x[i]);
    }
    
    printf("Informe os compenentes do vetor Y: ");
    for(i = 0; i < n; i++){
        scanf("%f", &y[i]);
    }

    produto_escalar = 0;

    for(i = 0; i < n; i++){
        produto_escalar = produto_escalar + x[i] * y[i];
    }

    printf("O produto escalar entre os vetores X e Y eh igual a [%.1f] \n", produto_escalar);
    return 0;
}
