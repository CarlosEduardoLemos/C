#include <stdio.h>

int main(){
    int area;
    int base;
    int altura;

    printf("Digite o valor da altura: ");
    scanf("%i", &altura);

    printf("Digite o valor da base: ");
    scanf("%i", &base);

    area = base * altura;
    printf("O valor da área do retangulo é %i \n", area);

    return 0;
}