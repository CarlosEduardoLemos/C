#include <stdio.h>

int main(void){
    float preco;

    printf("Qual o valor do produto? ");
    scanf("%f", &preco);

    printf("%.2f\n", preco - (preco*5/100));

    return 0;
}