#include <stdio.h>

int main() {
	int hour = 0;
	int min = 0;
	int isPm = 0;

	scanf("%d:%d", &hour, &min);

	if(hour >= 12) {
		isPm = 1;
		if(hour != 12)
			hour -= 12;
	} 

	if(isPm) {
		printf("%d:%d PM", hour, min);
	} else {
		printf("%d:%d AM", hour, min);
	}

	return 0;
}