#include <stdio.h>

int main() {
	char str[81];
	gets(str);
	int end = 0;

	while(str[end+1] != '\0') {
		end ++;
	}

	int start = 0;

	while(start < end) {
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}
	puts(str);
	return 0;
}