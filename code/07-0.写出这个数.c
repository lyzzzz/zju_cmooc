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
	char str[81];
	int sum = 0;

	gets(str);
	int i = 0;
	char c = 0;
	while((c = str[i]) != '\0') {
		if(c >= '0' && c <= '9')
			sum += c - '0';
		i++;
	}

	if(sum != 0) {
		convert(sum, strs, 0);
	} else {
		printf("ling");
	}

	return 0;
}