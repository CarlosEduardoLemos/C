#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i;
      
    printf("Gerando 10 valores aleatorios:\n\n");
  
    for (i = 0; i < 1; i++){
        /* gerando valores aleatórios entre zero e 100*/
        printf("%d \n", rand() % 4);
    }
    
    return 0;
}