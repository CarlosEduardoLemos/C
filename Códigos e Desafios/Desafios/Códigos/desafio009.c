#include <stdio.h>

int main(void){
    float real;
    
    printf("Quantos reais quer comprar em dolar? R$");
    scanf("%f", &real);

    float cota = real / 5.53;
    printf("Com R$ %.2f você compra U$D %.2f !!\n", real, cota);

    return 0;
}