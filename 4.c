#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n;
	
	do {
		printf ("Enter Number in [1 ... 56]: ");
		scanf ("%d", &n);
		
		if (n < 1 || n > 56) {
			printf ("Invalid Number. Please reset.\n");
		}
	} while (n < 1 || n > 56);
	
	printf ("Enter Valid Number: %d\n", n);
	
	printf ("\nProgram end\n");
	system ("pause");
	
	return 0;
}