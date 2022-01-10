#include <stdio.h>

int main(){
    int area;
    int base;
    int altura;

    printf("Digite o valor da altura: ");
    scanf("%d", &altura);

    printf("Digite o valor da base: ");
    scanf("%d", &base);

    area = base * altura;
    printf("O valor da área do retangulo é %i \n", area);

    return 0;
}