#include <stdio.h>

int main() {
	int grade;
	scanf("%d", &grade);

	if(grade < 60) {
		printf("E");
	} else {
		if(grade >= 90) {
			printf("A");
		} else if(grade >=80) {
			printf("B");
		} else if(grade >= 70) {
			printf("C");
		} else {
			printf("D");
		}

	}

	return 0;
}