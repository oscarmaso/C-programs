
#include <stdio.h>
#include <stdlib.h>


#define ROJO "\x1B[31m"
#define NORM "\x1B[39m"

int main(){
    printf("%c%c%c", 49, 50, 10);
    printf("%c%c%c", 0x31, 0x32, 0xA);
    printf("%c%c%c", '1', '2','\n');
    printf(ROJO "12\n" NORM);
    return EXIT_SUCCESS;
}
