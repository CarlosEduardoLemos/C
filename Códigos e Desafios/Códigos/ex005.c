#include <stdio.h>

int main(){
    int cont;
    int num = 1;

    printf("Utilizando o for: \n");
    for (cont= 0; cont <= 10; cont++){
        printf("%d\n", cont);
    }

    printf("Utilizando o While:\n");
    while (num <= 5){
        printf("%d\n", num);
        ++num;
    }
    
    return 0;
}