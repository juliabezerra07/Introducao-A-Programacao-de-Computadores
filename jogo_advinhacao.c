
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao, numeroSecreto, palpite;

    printf("--- menu principal ---\n");
    printf("1. iniciar jogo\n");
    printf("2. regras\n");
    printf("3. sair\n");

    printf("escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: 
            srand (time(0));
            numeroSecreto = rand() % 10;
            printf("digite um número de 0 a 9: ");
            scanf("%d", &palpite);
            if (numeroSecreto == palpite) {
                printf("número secreto: %d\n", numeroSecreto);
                printf("vc acertou :D");
            } else {
                printf("número secreto: %d\n", numeroSecreto);
                printf("vc errou :(");
            }
            break;
        case 2:
            printf("regras do jogo:\n");
            printf("regra 1, 2, 3, ...");
            break;
        case 3:
            printf("xauuuu...");
            break;
        default:
            printf("não tem essa opção, burro");
    }
}
