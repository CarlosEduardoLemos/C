#include <stdio.h>

int main(void){
    float alt;
    float base;

    printf("Qual é a altura da parede? ");
    scanf("%f", &alt);
    printf("Qual a largura da parede? ");
    scanf("%f", &base);

    float area = base*alt;
    float tinta = area/2;

    printf("A área da sua parede %.2fx%.2f é de %.2f. A quantidade de tinta para pintala é de %.2f litros.", base, alt, area, tinta);

    return 0;

}