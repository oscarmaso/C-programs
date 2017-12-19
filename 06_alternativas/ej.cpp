#include <stdio.h>
#include <stdlib.h>

int main(){

    int bit1;
    int bit2;

    printf("Cual es el bit1:  \n");
    scanf(" %i", &bit1);
    printf("Cual es el bit2:  \n");
    scanf(" %i", &bit2);

    if(bit1 == 1 && bit2 == 0){
        printf("El resultado es 1");
  }
    else if(bit1 == 0 && bit2 == 1)
        printf("EL resultado es 2 \n");
    else if(bit1 == 1 && bit2 == 1)
        printf("El resultado es 3 \n");
    else if(bit1 == 0 && bit2 == 0)
        printf("El resultado es 0 \n");
    else if(bit1 >=1 && bit2 >=1)
        printf("Volver a ejecutar\n");
    printf("Terminar el programa \n");
	return EXIT_SUCCESS;
}
