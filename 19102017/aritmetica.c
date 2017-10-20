 #include <stdio.h>
 #include <stdlib.h>

 int main ()
{
	int a, b, c, d, e, f;
	
	printf ("Primer numero: ");
	scanf("%d", &a);
	
	printf ("Segundo numero: ");
	scanf("%d", &b);
	
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;
	

	printf ("La suma es: %d\n", c);
	printf ("La resta es: %d\n", d);
	printf ("La multiplacion es: %d\n", e);
	printf ("La division es: %d\n", f);

	
	system("pause");
	return 0;
}

