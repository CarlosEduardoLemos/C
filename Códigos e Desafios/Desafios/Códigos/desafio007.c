#include <stdio.h>

int main (void){
    int metros;
    printf("Digite a metragem: ");
    scanf("%d", &metros);

    int cm = metros*100;
    int mm = metros*1000;

    printf("%dm tem %dcm e %dm tem %dmm \n", metros, cm, metros, mm);

    return 0;
}