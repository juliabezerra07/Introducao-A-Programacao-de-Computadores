#include <stdio.h>
int main() {
    // if else
    int a = 1;
    int b = 2;
    int c = 0;

    // && - E lógico (and): tudo V
    // || - OU lógico (ou): pelo menos 1 V
    // ! - NÃO lógico (not): inverte


    if (a > 0 && b < 0 || c == 0)
    {
        printf("é verdade!\n");
    }
    else
    {
        printf("é mentira!\n");
    }

    // a > 0 = verdadeiro
    // b < 0 = falso
    // verdadeiro && falso = falso
    // c == 0 = verdadeiro
    // falso || verdadeiro = verdadeiro

    int idade;
    float altura;

    printf("qual a sua idade? ");
    scanf("%d", &idade);

    printf("qual a sua altura? ");
    scanf("%f", &altura);

    if (idade >= 18 && idade < 60)
    {
        if (altura >= 1.50)
        {
            printf("vc tem direito ao desconto!");
        }
        else
        {
            printf("vc não tem direito ao desconto por ser baixinho");
        }
    }
    else
    {
        printf("vc não tem idade ainda");
    }

    // else if
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
