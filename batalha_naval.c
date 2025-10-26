
#include <stdio.h>

int main() {
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10]  = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tabuleiro[10][10]; // por isso dava erro

    // tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // posição dos navios
    // horizontal
    int linha_h = 1;   // linha 2
    int coluna_h = 2;  // coluna c
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_h][coluna_h + i] = 3;
    }

    // vertical
    int linha_v = 4;   // linha 5
    int coluna_v = 5;  // coluna F
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_v + i][coluna_v] = 3; // esta posiçao tem parte dum navio
    }

    // diagonal 1
    int linha1 = 3;
    int coluna1 = 0; 
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha1 + i][coluna1 + i] = 3; // ambas aumenta pq coluna: -> e linha: ⭣
    }

    // diagonal 2
    int linha2 = 0;
    int coluna2 = 9;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha2 + i][coluna2 - i] = 3; // linha aumenta pq: ⭣ e coluna diminui pq: <-
    }

    // coluna
    printf("     ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", coluna[i]);
    }
    printf("\n");

    // linhas
    for (int i = 0; i < 10; i++) {
        printf("%2d | ", linha[i]);  // %2d de 2 casas pros numeros
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
