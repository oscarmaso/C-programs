#include <stdio.h>
#include <stdlib.h>

int main(){

    int opcion;

    do {
        system("clear");
        printf("Dime un numero que sera tu opcion \n");
        scanf(" %i", &opcion);
    }
    while (opcion < 1 || opcion > 5);
	return EXIT_SUCCESS;
}
