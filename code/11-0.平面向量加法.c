#include <stdio.h>

int main() {
	float x1 = 0, y1 = 0, x2 = 0, y2 = 0;

	scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

	float c = x1 + x2;
	float d = y1 + y2;

	if((int)c == 0) {
		c = 0;
	}

	if((int)d == 0) {
		d = 0;
	}

	printf("(%.1f, %.1f)", c, d);


	return 0;
}