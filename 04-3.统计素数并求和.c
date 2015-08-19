#include <stdio.h>

int main() {
	int start = 0, end = 0;

	int i = 0, j = 0;
	int counter = 0;
	int sum = 0;

	scanf("%d %d", &start, &end);
	if(start == 2) {
		counter++;
		sum += 2;
	}
	for(i = start; i <= end; i++) {
		for(j = 2; j < i; j++) {
			if(i % j == 0) {
				break;
			}

			if(j == i-1) {
				counter++;
				sum += i;
				//printf("%d\n", start);
			}
		}
	}
	printf("%d %d", counter, sum);

	return 0;
}