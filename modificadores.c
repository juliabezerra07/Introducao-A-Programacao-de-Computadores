
#include <stdio.h>
int main() {
    // signed: padrão; + e -

    // unsigned: apenas + e 0 

    int numSinal = 3000000000;
    unsigned int numSemSinal = 3000000000;

    printf("número com sinal: %d\n", numSinal);
    printf("número sem sinal: %u\n", numSemSinal);

    // long: aumenta capacidade dos tipos de dados primitivos
    // int e double

    int numNormal = 1234567890; // valor máximo do intv (10)
    long int numGrande = 1234567890;

    printf("número normal (int): %d\n", numNormal);
    printf("número grande (long int): %ld\n", numGrande);

    numGrande = 12345678901;  //mais que o máximo do int (11)
    printf("número grande (long int): %ld", numGrande);  // dá erro
    
    //short

    short int numPequeno = 12345; // valor máximo do short int (5)
    printf("número pequeno: %d\n", numPequeno);

    numPequeno = 123456; // número maior q o short int (6)
    printf("número pequeno 2: %d", numPequeno);
}
