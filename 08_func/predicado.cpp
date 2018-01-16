#include <stdio.h>
#include <stdlib.h>

int es_par(int op1){
    return !(op1 % 2);
}

int main()
    if(es_par(2))
    printf("Es par. \n");
	return EXIT_SUCCESS;
}
