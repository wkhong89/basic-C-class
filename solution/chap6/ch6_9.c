// ���α׷��� ���� 6.9
// x^2 - 9x + 2 (x <= 0)
// 7x + 2 (x > 0)

#include <stdio.h>

int main(void)
{
	double x, y;

	printf("x�� ���� �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	if (x > 0)
		y = 7 * x + 2;
	else
		y = x * x - 9 * x + 2;

	printf("f(x)�� ���� %f\n", y);

	return 0;
}