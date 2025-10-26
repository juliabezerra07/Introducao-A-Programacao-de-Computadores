
#include <stdio.h>
int main () {
    // dados que preciso
    char nome [31];
    float nota1, nota2, nota3, nota4, nota5;
    float media;

    // user insere dados

    printf("nome completo: ");
    fgets(nome, 101, stdin);

    printf("nota de português: ");
    scanf("%f", &nota1);

    printf("nota de matemática: ");
    scanf("%f", &nota2);

    printf("nota de ciências humanas: ");
    scanf("%f", &nota3);

    printf("nota de ciências exatas: ");
    scanf("%f", &nota4);

    printf("nota de ciências da natureza: ");
    scanf("%f", &nota5);

    printf(" \n");

    // resultado

    media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    printf("média de %s é %.1f", nome, media);
    
}
