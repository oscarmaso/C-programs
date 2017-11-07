#include <stdio.h>
#include <stdlib.h>


int main ( )
{
	char nombre[30];
	char password[30];
	char correo[30];

	printf ("\n Escriba su nombre: ");
	scanf ("%s", nombre);
	printf ("\n Escribe tu correo electronico:");
	scanf ("%s",correo);
	printf ("\n Escriba la contraseña de %s: ", nombre);
	scanf ("%s", password);
	printf("\n");

	printf ("Su nombre es: %s ", nombre);
	printf("\n");
	
	printf("Su correo es: %s ",correo);
	printf("\n");
	
	printf ("Tu contraseña es: %s ", password);
	printf ("\n");

	system("pause");
	return 0;
}
