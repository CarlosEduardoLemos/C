#include <stdio.h>
int main(void){
    int kmper, dias;
    printf("Quantos dias o carro foi alugado? ");
    scanf("%i", &dias);
    printf("Quantos km o carro percorreu? ");
    scanf("%i", &kmper);
    
    int vdia = 60 * dias;
    float vkm = 0.15 * kmper;

    printf("O valor do aluguel é de R$%.2f !\n", vdia+vkm);

    return 0;
}