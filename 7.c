#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	for (int i = 0; i < 1000; i++) {
		if (i % 10 == 7) {
			printf("%d ", i);
		}
	}
	
	printf ("\nProgram end\n");
	system ("pause");
	
	return 0;
}