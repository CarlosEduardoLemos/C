#include <stdio.h>

int main(){
    int num1;
    int num2;
    int soma;

    printf("Digite um número inteiro: ");
    scanf("%d", &num1);

    printf("Digite outro número inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("O resultado da soma entre os números %d e %d é de %d.\n", num1, num2, soma);

    return 0;
}