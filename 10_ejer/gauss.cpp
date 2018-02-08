#include <stdio.h>
#include <stdlib.h>

int main(){
  int lado=3;

    for(int fila=0; fila<lado; fila++){
        if(fila=0)
            printf(" ");
        else
            printf("*");
      for(int columna=0; columna>fila; columna++)
          printf("*");
      printf("\n");
  }
      return EXIT_SUCCESS;
}
