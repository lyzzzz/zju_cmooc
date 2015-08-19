#include <stdio.h>

int main() {
	int n = 0, x = 0;
	int nums[20];
	scanf("%d %d", &n, &x);

	int i = 0;

	for(i = 0; i<n; i++) {
		scanf("%d", &nums[i]);
	}

	for(i = 0; i<n; i++) {
		if(nums[i] == x) {
			printf("%d", i);
			return 0;
		}
	}
	printf("Not Found");

	return 0;
}