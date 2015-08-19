#include <stdio.h>

int main() {
	long a = 0, b = 0, c = 0;
	int total = 0;

	scanf("%d", &total);
	int i = 0;
	for(i = 0; i < total; i++) {
		scanf("%ld %ld %ld", &a, &b, &c);
		if(a + b > c) {
			printf("Case #%d: true\n", i+1);
		} else {
			printf("Case #%d: false\n", i+1);
		}
	}
	return 0;
}