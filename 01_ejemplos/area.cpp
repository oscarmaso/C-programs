#include <stdio.h>
#include <stdlib.h>

int main(){

    double lado;
    double area;
    double perimetro;

    system("toilet --gay -fpagga CUADRADO");

    /* Entrada de datos */
    printf("lado: ");
    scanf("  %i",&lado);

    /* Calculos  */
    area = lado * lado;
    perimetro = 4 * lado;

    /*Salida de datos */
    printf( "Area_ %i\n"
            "Perimetro: %i\n",
            area, perimetro );

    return EXIT_SUCCESS;
}
