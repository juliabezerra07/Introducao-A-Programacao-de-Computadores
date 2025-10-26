
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador1, jogador2;
    srand(time(0));

    printf("--- jokenpô ---\n");
    printf("1. pedra\n");
    printf("2. papel\n");
    printf("3. tesoura\n");
    printf("escolha uma opção: ");
    scanf("%d", &jogador1);
    printf("\n");

    jogador2 = rand() % 3 + 1;
    
    switch (jogador1) {
    case 1:
        printf("jogador 1 (vc): pedra\n");
        break;
    case 2:
        printf("jogador 1 (vc): papel\n");
        break;
    case 3:
        printf("jogador 1 (vc): tesoura\n");
        break;
    default:
        printf("não tem\n");
        break;
    }

    switch (jogador2) {
    case 1:
        printf("jogador 2 (pc): pedra\n");
        break;
    case 2:
        printf("jogador 2 (pc): papel\n");
        break;
    case 3:
        printf("jogador 2 (pc): tesoura\n");
        break;
    }
    printf("\n");

    if (jogador1 == jogador2) {
        printf("### empate ###");
    } else if ((jogador1 == 1) && (jogador2 == 3)
            || (jogador1 == 2) && (jogador2 == 1)
            || (jogador1 == 3) && (jogador2 == 2)) {
        printf("### jogador 1 (vc) venceu! ###");

    } else {
        printf("### jogador 2 (pc) venceu! ###");
    }

}
