#include <stdio.h>

int main() {
	int goal = 0;
	int max_guess = 0;

	scanf("%d %d", &goal, &max_guess);

	int temp = 0;

	int counter = 0;

	while(counter < max_guess) {
		scanf("%d", &temp);

		if(temp < 0) {
			printf("Game Over");
			return 0;

		}

		if(temp < goal) {
			printf("Too small");
		} else if(temp > goal) {
			printf("Too big");
		} else {
			if(counter == 0) {
				printf("Bingo!");
				return 0;
			} else if(counter < 3) {
				printf("Lucky You!");
				return 0;
			} else {
				printf("Good Guess!");
				return 0;
			}
		}
		counter ++;
	}


	printf("Game Over");
	return 0;


}