#include <stdio.h>

int main() {
	char c = 0;
	int result = 0;
	int temp_num = 0;

	scanf("%d", &result);
	while(1) {
		scanf("%c", &c);

/*		if(c == '+' || c == '-' || c == '*' || c == '/') {
			if(c == '+') {
				state = 1;
			} else if(c == '-') {
				state = 2;
			} else if(c == '*') {
				state = 3;
			} else if(c == '/') {
				state = 4;
			}
		}*/

		if(c == '=') {
			break;
		}

		scanf("%d", &temp_num);

		if(c == '+') {
			result += temp_num;
		} else if(c == '-') {
			result -= temp_num;
		} else if(c == '*') {
			result *= temp_num;
		} else if(c == '/') {
			if(temp_num == 0) {
				printf("ERROR");
				return 0;
			}
			result /= temp_num;
		} else if(c != '=') {
			printf("ERROR");
			return 0;
		}
	}

	printf("%d", result);

	return 0;
}