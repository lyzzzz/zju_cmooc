#include <stdio.h>

int myPow(int num, int i) {
	if(num == 0) return num;

	int counter = 0;
	int result = num;
	while(counter < i-1) {
		result *= num;
		counter++;
	}
	return result;
}

int main() {
	int num = 0;
	scanf("%d", &num);

	int sum = 0;
	int i = 0;
	int max_value = myPow(10, num);
	//printf("%d", max_value);

	for(i = myPow(10, num-1); i<max_value; i++) {
		//printf("%d\n", i);
		sum = 0;

		int temp = i;
		while(temp != 0) {
			int pos = temp % 10;

			sum += myPow(pos, num);

			temp /= 10;
		}

		if(sum == i) {
			printf("%d\n", i);
		}
	}

	return 0;
}