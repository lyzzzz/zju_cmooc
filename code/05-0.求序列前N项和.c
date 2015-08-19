#include <stdio.h>

int main() {
	int input = 0;
	scanf("%d", &input);

	int a = 2;	//分子
	int b = 1;	//分母
	double c = 0.0;	//结果

	int counter = 1;
	double sum = 0.0;	//和

	while(counter <= input) {
		c = (double)a / b;
		sum += c;

		int temp = a;
		a = a + b;
		b = temp;

		counter++;
	}
	printf("%.2lf", sum);

	return 0;
}