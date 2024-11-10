#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	for (int i = 1; i <= 7; i++) {
		printf("%d", i);
		if (i >= 1) printf(" ");
	}
	printf("\n");
	
	printf("  ");
	for (int i = 1; i <= 6; i++) {
		printf("%d", i);
		if (i >= 1) {
			printf(" ");
		}
	}
	printf("\n");
	
	printf("    ");
	for (int i = 1; i <= 5; i++) {
		printf("%d", i);
		if (i >= 1) printf(" ");
	}
	printf("\n");
	
	printf("      ");
	for (int i = 1; i <= 4; i++) {
		printf("%d", i);
		if (i >= 1) printf(" ");
	}
	printf("\n");
	
	printf("        ");
	for (int i = 1; i <= 3; i++) {
		printf("%d", i);
		if (i >= 1) printf(" ");
	}
	printf("\n");
	
	printf("          ");
	for (int i = 1; i <= 2; i++) {
		printf("%d", i);
		if (i >= 1) printf(" ");
	}
	printf("\n");
	
	printf("            ");
	for (int i = 1; i <= 1; i++) {
		printf("%d", i);
		if (i >= 1) printf(" ");
	}
	printf("\n");
	
	printf("              ");
	
	printf("\nProgram end\n");
	system("pause");
	
	return 0;
}