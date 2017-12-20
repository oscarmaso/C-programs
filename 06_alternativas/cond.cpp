#include <stdio.h>
#include <stdlib.h>

/*
  |----------------------|
  | Rojo | Azul |Amarillo|
  |--------------------|-|------------|
  |  1   |  0   |   0  |  -> Rojo     |
  |  1   |  1   |   0  |  -> Morado   |
  |  1   |  1   |   1  |  -> Blanco   |
  |  0   |  0   |   0  |  -> Negro    |
  |  0   |  1   |   1  |  -> Verde    |
  |  0   |  0   |   1  |  -> Amarillo |
  |  0   |  1   |   0  |  -> Azul     |
  |  1   |  0   |   1  |  -> Naranja  |
  |------|------|------|--------------|
   */

int main(){

    int valor1; //ROJO
    int valor2; //AZUL
    int valor3; //AMARILLO

    printf("¿Contiene Rojo?   ");
    scanf(" %i", &valor1);
    printf("¿Contiene Azul?   ");
    scanf(" %i", &valor2);
    printf("¿Contiene Amarillo?   ");
    scanf(" %i", &valor3);

    if(valor1 ==1 && valor2 ==0 && valor3 ==0){
        printf("Es rojo");
    }
    else if(valor1 ==1 && valor2 ==1 && valor3 ==0)
        printf("Es morado\n");
    else if(valor1 ==1 && valor2 ==1 && valor3 ==1)
        printf("Es blanco\n");
    else if(valor1 ==0 && valor2 ==0 && valor3 ==0)
        printf("Es negro\n");
    else if(valor1 ==0 && valor2 ==1 && valor3 ==1)
        printf("Es verde\n");
    else if(valor1 ==0 && valor2 ==0 && valor3 ==1)
        printf("Es amarillo\n");
    else if(valor1 ==0 && valor2 ==1 && valor3 ==0)
        printf("Es azul\n");
    else if(valor1 ==1 && valor2 ==0 && valor3 ==1)
        printf("Es naranja\n");

    printf("\n Final del programa \n");



    return EXIT_SUCCESS;
}
