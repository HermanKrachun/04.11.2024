#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a, b;
	printf ("Enter number a: ");
	scanf ("%d", &a);
	printf ("Enter number b: ");
	scanf ("%d", &b);
	
	while (a != 0 && b != 0) {
		if (a > b) {
			a %= b;
		} else {
			b %= a;
		}
	}
	
	printf ("NOD: %d\n", a + b);
	
	printf ("\nProgram end\n");
	system ("pause");
	
	return 0;
}