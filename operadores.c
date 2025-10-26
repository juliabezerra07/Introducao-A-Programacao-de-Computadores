#include <stdio.h>

int main ()
{
    // operadores
    int numero1, numero2, resultado;
    int soma, subtracao, multiplicacao, divisao;

    printf("escolha um número: ");
    scanf("%d", &numero1);

    printf("escolha outro número: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    printf("a soma disso é: %d\n", soma);
    printf("a subtração disso é: %d\n", subtracao);
    printf("a multiplicação disso é: %d\n", multiplicacao);
    printf("a divisão disso é: %d", divisao);

    // conversão implícta

    int x = 5;
    float y = 2.5;
    float resultado = x + y;

    printf("resultado: %.1f", resultado);
    

    // conversão explícita
    // a vira float
    int x = 10;
    int y = 3;
    float quociente = (float) x / y;

    printf("quociente: %.2f", quociente);

    // b vira int
    int a = 100;
    float b = 10.100;
    int soma;

    soma = a + (int) b;
    printf("a + b = %d", soma);

    // operadores de atribuição
    int numero1 = 10, numero2, resultado;

    resultado = 10;
    printf("resultado: %d\n", resultado);

    resultado += 20;
    printf("resultado: %d\n", resultado);

    resultado -= numero1;
    printf("resultado: %d\n", resultado);

    resultado *= 5;
    printf("resultado: %d\n", resultado);

    resultado /= 2;
    printf("resultado: %d", resultado);

    // operadores relacionais
    int num1 = 10;
    float num2 = 20;

    printf("10 > 20: %d\n", num1 > num2);
    printf("10 < 20: %d\n", num1 < num2);
    printf("10 >= 20: %d\n", num1 >= num2);
    printf("10 <= 20: %d\n", num1 <= num2);
    printf("10 == 20: %d\n", num1 == num2);
    printf("10 != 20: %d", num1 != num2); 
    
} 
