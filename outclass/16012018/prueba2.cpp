#include <stdio.h>
#include <stdlib.h>

int numero(int n1=55){
    return n1;
}

int main(){
    int n1;
    numero(n1);
    printf(" numero:%d \n",n1);

  return EXIT_SUCCESS;
}
