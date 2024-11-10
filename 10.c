#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	printf("Odd numbers from 1 to 17 is:\n");
	
	for (int i = 1; i <= 17; i += 2) {
		printf("%d\n", i);
	}
	
	printf ("\nProgram end\n");
	system ("pause");
	
	return 0;
}