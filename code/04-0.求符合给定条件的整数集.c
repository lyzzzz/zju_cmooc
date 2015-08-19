#include <stdio.h>

int main() {
	int start = 0;
	scanf("%d", &start);
	int i = 0, j = 0, k = 0;
	int counter = 0;

	for(i = start; i <= start+3; i++) {
		counter = 0;
		for(j = start; j <= start+3; j++) {
			for(k = start; k <= start+3; k++) {
				if(i != j && j != k && i != k) {
					if(++counter != 6) {
						printf("%d%d%d ", i, j, k);
					} else {
						printf("%d%d%d", i, j, k);
					}

				}

			}
		}
		printf("\n");
	}

	return 0;
}