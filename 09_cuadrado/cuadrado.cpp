#include <stdio.h>
#include <stdlib.h>

#define S 3

bool square(int f, int c)
{
    if ((f/S)%2 == 0 && (c/S)%2 == 0)
          return 1;
    else if ((f/S)%2 != 0 && (c/S)%2 != 0)
          return 1;
    return 0;
}
int main(){

   int cuadrados;

    printf("¿Cuantos cuadrados quieres? ");
    scanf(" %i", &cuadrados);
    int size = cuadrados * S;

    for (int f=0; f<size; f++) {
      for (int c=0; c<size; c++)
      {
        if (square(f,c))
            printf("*");
        else
      {
      printf(" ");
      }
      }
      printf("\n");
      }
  return EXIT_SUCCESS;
}
