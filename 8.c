#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n, number, min;
	
	printf("Enter number n (n > 0): ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("Number must be greater than 0.\n");
		return 1;
	}
	
	printf("Enter number: ");
	scanf("%d", &number);
	min = number;
	
	for (int i = 1; i < n; i++) {
		printf("Enter number: ");
		scanf("%d", &number);
		if (number < min) {
			min = number;
		}
	}
	
	printf("Is the smallest number: %d\n", min);
	
	printf ("\nProgram end\n");
	system ("pause");
	
	return 0;
}