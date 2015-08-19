#include <stdio.h>

int main() {
	int a = 0;	//分子
	int b = 0;	//分母
	scanf("%d/%d", &a, &b);

	int _a = 0;
	int _b = 0;

	//求最大公约数就行了
	if(a < b) {	//保证a>b
		_a = b;
		_b = a;

	} else {
		_a = a;
		_b = b;
	}

	//辗转相除开始
	int c = _a % _b;
	while(c != 0) {
		_a = _b;
		_b = c;

		c = _a % _b;
	}

	//printf("%d\n", _b);
	if(c != _a) {
		printf("%d/%d", a/_b, b/_b);
	} else {
		printf("%d/%d", a/b);
	}



	return 0;
}