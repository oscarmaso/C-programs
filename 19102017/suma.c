 #include <stdio.h>
 #include <stdlib.h>

 int main ()
{
	int a, b, c, d;
	printf ("Primer numero: ");
	scanf("%d", &a);
	
	printf ("Segundo numero: ");
	scanf("%d", &b);
	
	c = a + b;
	d = a * b;

	printf ("La suma es: %d\n", c);
	printf ("la multiplacion es: %d\n", d);
	
	system("pause");
	return 0;
}

