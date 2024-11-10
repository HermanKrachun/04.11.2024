#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a, b;
	
	printf("Enter number of a (biggest of 0): ");
	scanf("%d", &a);
	printf("Enter number of b (biggest of a): ");
	scanf("%d", &b);
	
	if (a <= 0 || b <= a) {
		printf("Invalid number of a and b.\n");
		
		printf ("\nProgram end\n");
		system ("pause");
	
		return 1;
	}
	
	printf("Number, finished of 3 in an interval [%d, %d] is: \n", a, b);
	
	for (int i = a; i <= b; i++) {
		if (i % 10 == 3) {
			printf("%d\n", i);
		}
	}
	
	printf ("\nProgram end\n");
	system ("pause");
	
	return 0;
}