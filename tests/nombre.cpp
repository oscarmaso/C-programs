#include <stdio.h>
#include <stdlib.h>

int main(){

    char nombre[256];
    char apellidos[256];

    printf("\n Ponga su nombre(SOLO NAME):");
    scanf(" %s", nombre);
    printf("\n Ponga su apellido(SOLO SUBNAME):");
    scanf(" %s", apellidos);

    printf("\n Su nombre y apellidos es: %s  %s ", nombre, apellidos);
    printf("\n");

    return EXIT_SUCCESS;
}
