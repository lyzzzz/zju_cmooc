#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0;

	scanf("%d %d %d", &a, &b, &c);

	if(a != b) {
		if(a != c) {
			printf("A");
		} else {
			printf("B");
		}
	} else {
		printf("C");
	}

	return 0;
}