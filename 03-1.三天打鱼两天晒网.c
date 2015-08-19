#include <stdio.h>

int main() {
	int num = 0;
	scanf("%d", &num);

	int result = num % 5;
	if(result > 0 && result <=3) {
		printf("Fishing in day %d", num);
	} else {
		printf("Drying in day %d", num);
	}

	return 0;
}