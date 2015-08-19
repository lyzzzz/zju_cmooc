#include <stdio.h>

int main() {
	int num;

	scanf("%d", &num);

	while(num > 0) {
		int pos = num % 10;
		num = num / 10;

		if(pos != 0) {
			printf("%d", pos);
		}
	}
	return 0;
}