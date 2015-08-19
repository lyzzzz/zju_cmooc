#include <stdio.h>

int main() {
	int a = 0, n = 0;

	scanf("%d %d", &a, &n);
	int num = a;

	int i = 0;
	int sum = 0;
	for(i=0; i<n; i++) {
		sum += num;
		//printf("%d\n", num);
		
		num = num * 10 + a;

	}

	printf("%d", sum);

	return 0;
}