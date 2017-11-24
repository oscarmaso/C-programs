#include <stdio.h>
#include <stdlib.h>

#define N 0x100

int main(){

    const char *p =  "The World is"; //COnstante de tipo cadena
    /*
    char const *p // Puntero a una constante. Forma coherente de decir que el char es const.
    char * const *p; // Puntero constante (FIJO)
    char * const * const p; // Puntero fijo a una constante.
    char frase[N] =  "a vampire. \n"; // Inicialización
    Puntero es una variable que contiene una direccion de memoria. */

    char frase[N] =  "a vampire.\n"; // Inicialización
    char *d = frase;

    d = &frase[2];

    frase[2] == 'v'; // Notacion de matrices
    *d =='v'; //notacion de punteros
    *(d+2) == 'm'; //El 2 esta en aritmetica de punteros
    *d + 2 == 'x';

    printf("d ocupa %lu bytes. \n", sizeof(d));
    return EXIT_SUCCESS;
}
