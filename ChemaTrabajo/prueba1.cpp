#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100

int main(){

    char cad[N];
    char *lugar= NULL;
    int longitud;

    printf("Dime tu nombre:");
    scanf(" %s",cad);
    printf("Tu nombre es: %s\n",cad);
    /*
    longitud =sizeof(lugar-1);
    Esto es para decir el tamaño maximo del array (No pedido)
    */
    longitud = strlen(cad);
    printf("%i",longitud);
    lugar = (char*)malloc(longitud +1);
    strncpy(cad, lugar, longitud+1);
    free(lugar);
    return EXIT_SUCCESS;
}
