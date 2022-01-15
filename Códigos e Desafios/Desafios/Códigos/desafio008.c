#include <stdio.h>

int main(void){
    int num;
    printf("\nDe qual número você gostaria de saber: ");
    scanf("%i", &num);

    printf("\nTabuada do %i\n", num);

    for (int i = 0; i <= 10; i++){
        printf("%i X %i = %i\n", num, i, num*i);
    }
    
    printf("\n");
    return 0;
}