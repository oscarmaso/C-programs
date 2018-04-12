#include <stdio.h>
#include <stdlib.h>

#define N 4

void Prueba1 () {
 int i=0;
 do
 {
 printf("%i \n",i++);
 } while(i <=N);
     printf("Fin del programa \n");
}

void Prueba (){
 int z;
    printf("4 = * = 0 \n di:");
    for(int a=0; a<N; a++){
        printf("Dime un numero \n");
        scanf(" %i",&z);
        if(z==4)
            printf("* \n");
        else
            printf("0 \n");
    }
}
int main(){
 Prueba();
 Prueba1();
 int ch;
 printf("Enter 4 to exit \n");

 while((ch=getchar())!=4)
 {
     switch(ch)
     {
          case 1:
             printf("Dentro de la caja 1 \n");
             break;
          case 2:
             printf("Dentro de la caja 2 \n");
             break;
          case 3:
             printf("Dentro de la caja 3 \n");
             break;
          default:
             printf("Tu entraste algo estraño en \n");
     }
     printf("Enter 4 to exit \n");
 }
 printf("Estas fuera del loop \n");
    return EXIT_SUCCESS;
}
