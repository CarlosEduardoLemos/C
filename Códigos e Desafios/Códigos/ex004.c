#include <stdio.h>

int main(){
    int inteiro = 10;
    float decimal = 5.5;
    char caracter = '!';

    float resultado = inteiro + decimal;

    printf("A soma de %d e %f é %f%c\n", inteiro, decimal, resultado, caracter);

    return 0;
}