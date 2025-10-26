
#include <stdio.h>
int main() {
    int idade;

    printf("qual é a sua idade? ");
    scanf("%d", &idade);

    idade >= 18 ? printf("vc já pode entrar em cana") : printf("de menor ainda");
}
