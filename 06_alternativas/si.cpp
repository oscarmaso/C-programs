#include <stdio.h>
#include <stdlib.h>

int main(){

  int numero;

  printf("Numero: ");
  scanf(" %i", &numero);

  if(numero % 2 == 0) {
      printf("El numero %i es par. \n",numero);
      printf("Y los pares me gustan \n");
  } else
      printf("Es un numero impar \n");
  printf("Final del Programa \n");
	return EXIT_SUCCESS;
}
