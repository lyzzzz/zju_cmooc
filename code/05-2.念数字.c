#include <stdio.h>

void convert(int num, char strs[10][5], int output_space) {
	if(num == 0) {
		return ;
	}

	convert(num / 10, strs, 1);

	if(output_space) {
		printf("%s ", strs[num % 10]);
	} else {
		printf("%s", strs[num % 10]);
	}
}

int main() {
	char strs[10][5] = {
		"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"
	};

	int num = 0;
	scanf("%d", &num);

	if(num < 0) {
		printf("fu ");
		num = -num;
	}

	if(num != 0) {
		convert(num, strs, 0);
	} else {
		printf("ling");
	}




	return 0;
}