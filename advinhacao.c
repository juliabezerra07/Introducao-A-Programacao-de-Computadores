#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num_jogador, num_pc;
    char opcao_jogador;

    srand(time(0));
    num_pc = rand() % 100 + 1;

    printf("escolha um número, de 1 a 100: ");
    scanf("%d", &num_jogador);
    printf("\n");

    printf("você acha que o número do máquina, em comparação ao seu, será:\n");
    printf("M. maior\n");
    printf("N. menor\n");
    printf("I. igual\n");
    printf("resposta: ");
    scanf(" %c", &opcao_jogador);

    switch (opcao_jogador) {
    case 'M':
    case 'm':
        printf("número do jogador: %d\n", num_jogador);
        printf("númeor do computador: %d\n", num_pc);
        if (num_pc > num_jogador) {
            printf("você ganhou!");
        } else {
            printf("você perdeu!");
        }
        break;
    case 'N':
    case 'n':
        printf("número do jogador: %d\n", num_jogador);
        printf("númeor do computador: %d\n", num_pc);
        if (num_pc < num_jogador) {
            printf("você ganhou!");
        } else {
            printf("você perdeu!");
        }
        break;
    case 'I':
    case 'i':
        printf("número do jogador: %d\n", num_jogador);
        printf("númeor do computador: %d\n", num_pc);
        if (num_pc == num_jogador) {
            printf("você ganhou!");
        } else {
            printf("você perdeu!");
        }
        break;
    default:
        printf("inválido");
        break;
    }
    
}
