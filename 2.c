#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	
	int current = 1;
	
	for (int row = 1; current <= n; row++) {
		for (int col = 1; col <= row && current <= n; col++) {
			printf("%d ", current);
			current++;
		}
		printf("\n");
	}
	
	printf("\nProgram end\n");
	system("pause");
	
	return 0;
}