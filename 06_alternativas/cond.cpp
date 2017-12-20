#include <stdio.h>
#include <stdlib.h>

//Valor 1 = Rojo
//Valor 2 = Azul
//Valor 3 = Amarillo
/*
 |---------------------|
 |Rojo | Azul |Amarillo|
 |---------------------|------------|
 | 1   |  0   |   0  |  -> Rojo     |
 | 1   |  1   |   0  |  -> Morado   |
 | 1   |  1   |   1  |  -> Blanco   |
 | 0   |  0   |   0  |  -> Negro    |
 | 0   |  1   |   1  |  -> Verde    |
 | 0   |  0   |   1  |  -> Amarillo |
 | 0   |  1   |   0  |  -> Azul     |
 | 1   |  0   |   1  |  -> Naranja  |
 |----------------------------------|
*/

int main(){

    int valor1;
    int valor2;
    int valor3;

    printf("¿Contiene Rojo?   ");
    scanf(" %i", &valor1);
    printf("¿Contiene Azul?   ");
    scanf(" %i", &valor2);
    printf("¿Contiene Amarillo?   ");
    scanf(" %i", &valor3);

    if(valor1 ==1 && valor2 ==0 && valor3 ==0){
        printf("Rojo");
    }
    else if(valor1 ==1 && valor2 ==1 && valor3 ==0)
        printf("Morado\n");
    else if(valor1 ==1 && valor2 ==1 && valor3 ==1)
        printf("Blanco\n");
    else if(valor1 ==0 && valor2 ==0 && valor3 ==0)
        printf("Negro\n");
    else if(valor1 ==0 && valor2 ==1 && valor3 ==1)
        printf("Verde\n");
    else if(valor1 ==0 && valor2 ==0 && valor3 ==1)
        printf("Amarillo\n");
    else if(valor1 ==0 && valor2 ==1 && valor3 ==0)
        printf("Azul\n");
    else if(valor1 ==1 && valor2 ==0 && valor3 ==1)
        printf("Naranja\n");

    printf("\n Final del programa \n");



return EXIT_SUCCESS;
}
