#include <stdio.h>

int main(void){
    float sal;

    printf("Qual o valor do seu salário? ");
    scanf("%f", &sal);

    printf("O salário com 15%% de aumento é de R$%.2f !!\n", sal+(sal*15/100));

    return 0;
}