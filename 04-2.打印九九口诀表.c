#include <stdio.h>

int main() {
	int max = 0;
	scanf("%d", &max);

	int i = 0, j = 0;
	for(i = 1; i <= max; i++) {
		for(j = 1; j <= i; j++) {
				printf("%d*%d=%-4d", j, i, i*j);

		}
		printf("\n");
	}

	return 0;
}