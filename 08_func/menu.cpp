#include <stdio.h>
#include <stdlib.h>
void menu (void){
    int *opcion;
    printf(
            "Elige una opcion \n"
            "\n"
            "\t1. Sistema.\n"
            "\t2. Hardware.\n"
            "\t3. Software.\n"
            "\n"
            );
}

int main(){
    menu(&opcion);
  

  printf("La opcion: \n ");
  scanf(" %i", opcion);
  printf("Opcion= %i",opcion);

return EXIT_SUCCESS;
}
