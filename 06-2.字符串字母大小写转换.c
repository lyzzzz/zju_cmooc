#include <stdio.h>

int main() {
	char str[81];
	char c = 0;

	int i = 0;


	while((c = getchar()) != '#') {
		str[i++] = c;
	}
	str[i] = '\0';


	for(i = 0; str[i] != '\0'; i++) {
		if(str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
		} else if(str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;
		}
	}

	puts(str);

	return 0;
}