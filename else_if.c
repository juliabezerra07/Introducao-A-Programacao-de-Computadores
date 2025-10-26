#include <stdio.h>
int main() {
    int idade;

    printf("digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 12)
    {
        printf("criança ainda. sabe nada da vida!");
    }
    else if (idade >= 12 && idade < 18)
    {
        printf("aborrecente!");
    }
    else if (idade >= 18 && idade < 40)
    {
        printf("és um jovem adulto!");
    }
    else if (idade >= 40 && idade < 60)
    {
        printf("crise da meida idade");
    }
    else
    {
        printf("vai morrer já");
    }
}
