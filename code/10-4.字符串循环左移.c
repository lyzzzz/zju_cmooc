#include <stdio.h>

int main() {
	char str[81];
	int n = 0;
	gets(str);

	scanf("%d", &n);
	int end = 0;

	while(str[end + 1] != '\0') end++;

	int i = 0;
	int j = 0;
	for(i = 0; i<n; i++) {
		char temp = str[0];
		for(j = 0; j <= end; j++) {
			str[j] = str[j+1];
			//printf("%c", str[j]);
		}
		str[end] = temp;
	}

	puts(str);


	return 0;
}