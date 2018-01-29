#include <stdio.h>
#include <stdlib.h>
  /*Normalizo la fila N
   *  (Div fila N / Columna N)
   *  Apunta el Coeficiente
   *  Busco los 0 en las columnas N de todas las filas inf.
   *    En la fila i le resto Ain a la fila N
   *
   *  Normalizo la fila 1
   *    (Dif fila N+1 / Coolumna N+1)
   *  Apunta el Coeficiente
   *  Busca 0 en las filas inferiores en la col 1
   *  En la fila resto f 1 mul x Ain
   */
#define N 3
int main(){

    double a[N][N] = {
        {2, 3, 4},
        {4, 7, 1},
        {6, 2, 3}
    };

    /*
    for (int columna=0; columna<N; columna++){
        for (int fila=0; fila<N; fila++)
            printf("%.2lf ", a[fila%N][(columna+fila)%N]);
        printf("\n");
        } */
    return EXIT_SUCCESS;
}
