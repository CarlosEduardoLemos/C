#include <stdio.h>

int main(void){
    float num;
    printf("Digite qualquer valor: ");
    scanf("%f", &num);
    int num1 = num;
    printf("O número %.3f tem a parte inteira %i !!\n", num, num1);

    return 0;
}