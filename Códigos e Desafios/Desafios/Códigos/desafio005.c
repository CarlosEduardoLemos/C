#include <stdio.h>

int main(){
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    printf("O número digitado foi %.2f, o seu dobro é %.2f, o seu triplo é %.2f e a metade é %.2f !!\n", num, num*2, num*3, num/2);

    return 0;
}