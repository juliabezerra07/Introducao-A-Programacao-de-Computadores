
#include <stdio.h>
int main () {
    int vetor [5] = {1, 2, 3, 4, 5} ;
    int soma = 0;

    // Calculando a soma dos elementos do vetor

    for (int i = 0; i < 5; i++) {
    soma += vetor[i];

    // soma = 0 + i = 1
    // 0 + 1 = 1
    // 1 + 2 = 3
    // 3 + 3 = 6
    // 6 + 4 = 10
    //10 + 5 = 15

    printf("%d\n", soma);
    }
    printf("\n");
    printf("total: %d", soma);  // total
}
