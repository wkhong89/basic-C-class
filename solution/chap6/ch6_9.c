// 프로그래밍 과제 6.9
// x^2 - 9x + 2 (x <= 0)
// 7x + 2 (x > 0)

#include <stdio.h>

int main(void)
{
	double x, y;

	printf("x의 값을 입력하시오: ");
	scanf("%lf", &x);

	if (x > 0)
		y = 7 * x + 2;
	else
		y = x * x - 9 * x + 2;

	printf("f(x)의 값은 %f\n", y);

	return 0;
}