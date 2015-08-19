#include <stdio.h>

void convert(int hex) {
	if(hex / 16 > 0) {
		convert(hex / 16);
	}
	printf("%d", hex % 16);
}

int main() {
	int hex = 0;
	scanf("%d", &hex);

	convert(hex);

	return 0;
}