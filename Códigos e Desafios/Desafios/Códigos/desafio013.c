#include <stdio.h>

int main(void){
    int temp;

    printf("Qual a temperatura em °C: ");
    scanf("%i", &temp);

    float ntemp = (temp*9/5)+32;

    printf("A temperatura %i°C em °F é %.2f \n", temp, ntemp);

    return 0;
}