#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	
	for (int i = 0; i <= n; i++) {
		printf("%d ", (int)pow(2, i));
	}
	printf("\n");
	
	printf("\nProgram end\n");
	system("pause");
	
	return 0;
}