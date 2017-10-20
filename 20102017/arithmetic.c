 #include <stdio.h>
 #include <stdlib.h>

 int main ()
{
	int a, b, c, d, e, f;
	
	printf ("First number: ");
	scanf("%d", &a);
	
	printf ("Second number: ");
	scanf("%d", &b);
	
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;
	

	printf ("The sum is: %d\n", c);
	printf ("The subtraction is: %d\n", d);
	printf ("The multiplication is: %d\n", e);
	printf ("The division is: %d\n", f);

	
	system("pause");
	return 0;
}

