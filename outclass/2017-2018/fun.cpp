#include <stdio.h>
#include <stdlib.h>


int numeros(int *a, int *b){
  printf("Numero a: \n");
    scanf(" %i",a);
  printf("Numero b: \n");
    scanf(" %i",b);
}
int suma(){
    int a, b;
    numeros(&a,&b);
    int c;
    c =a+b;
    printf("La suma es= %i",c);
}
int main(){
    suma();
    return EXIT_SUCCESS;
}
