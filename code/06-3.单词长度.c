#include <stdio.h>
#include <memory.h>

int main() {
	char str[81];
	memset(str, '.', sizeof(str));
	char c = 0;

	int begin_flag = 0;
	int counter = 0;
	gets(str);

	if(str[0] == '.') return 0;

	int i = 0;
	for(i = 0; str[i] != '.'; i++) {
		c = str[i];

		if(c != ' ') {
			if(begin_flag == 0) {
				begin_flag = 1;

			}
			counter++;
		}

		if(c == ' ' && str[i+1] != ' ') {
			begin_flag = 0;
			printf("%d ", counter);
			counter = 0;
		}
	}
	if(str[i] == '.' && counter != 0) printf("%d", counter);

	return 0;
}