#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int c = 0;
	int hour_add = 0;

	int a_hour = a / 100;
	int a_min = a % 100;

	while(b > 0) {
		
	}

	c = a_hour * 100 + a_min;

	printf("%d", c);

	return 0;
}