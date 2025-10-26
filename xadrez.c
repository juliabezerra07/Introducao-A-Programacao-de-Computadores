
#include <stdio.h>

// rainha: 8 casas, esquerda
void rainha (int casasR)
{
    if (casasR > 0)
    {
        printf("Esquerda.\n");
        rainha(casasR - 1);
    }
}

// torre: 5 casas, direita
void torre(int casasT) {
    if (casasT > 0) {
        printf("Direita.\n");
        torre(casasT - 1);
    }
}

// bispo - 5 casas, cima e direita
void bispo (int casasB)
{
    if (casasB > 0)
    {
        printf("Cima.\n");

        for (int i = 0; i < 1; i++)  // criar variáveis diferentes pra cada loop
        {
           printf("Direita.\n");
        }

        bispo(casasB - 1);
         
       }
    }

// cavalo - 2 casas, cima; 1 casa, direita (L)
void cavalo (int casasC)
{
    if (casasC > 0)
    {
       printf("Cima.\n");
       cavalo(casasC - 1);

        if (casasC < 2)
        {
            printf("Direita.\n");
        }
        
         }
    }

int main()
{
    printf("-- RAINHA --\n");
    rainha(8);
    printf("\n");

    printf("-- TORRE --\n");
    torre(5);
    printf("\n");

    printf("-- BISPO --\n");
    bispo(5);
    printf("\n");

    printf("-- CAVALO --\n");
    cavalo(2);
    
    return 0;
}
