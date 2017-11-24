#include <stdio.h>
#include <stdlib.h>

int main(){

    char nombre[16];
    char hexadecimal[10];
    int num, dia, mes;

    printf("Entero: ");
    scanf(" %i", &num);
    scanf(" %s", nombre);
    printf("[%i] => %s. \n", num, nombre);

    printf("Hexadecimal: ");
    scanf(" %[0-9a-fA-F]", hexadecimal);
    printf("0x%sh\n", hexadecimal);

    /*Conjunto de seleccion inverso */
    scanf(" %[^a-f]", hexadecimal);

    scanf(" %[^/n] ", nombre);
    fgets(nombre, 16,stdin);

    scanf("%i/%i/%*i", &dia, &mes);

    /* Caracter de supresion de signo lo que hace es que no guarda el valor*/
    return EXIT_SUCCESS;
}
