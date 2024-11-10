#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int N, M, S;
	
	printf ("Enter N: ");
	scanf ("%d", &N);
	printf ("Enter M: ");
	scanf ("%d", &M);
	printf ("Enter S: ");
	scanf ("%d", &S);
	
	for (int i = M; i >= N; i--) {
		if (i % 2 == 0 && i % 3 == 0) {
			if (i == S) {
				break;
			}
			printf("%d ", i);
		}
	}
	
	printf ("\nProgram end\n");
	system ("pause");
	
	return 0;
}