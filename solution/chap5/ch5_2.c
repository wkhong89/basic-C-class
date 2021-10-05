// 프로그래밍 문제 5.2
#include <stdio.h>

int main(void)
{
	double op1, op2;

	printf("실수를 입력하시오: ");
	scanf("%lf %lf", &op1, &op2);
	printf("%f %f %f %f\n", op1 + op2, op1 - op2, op1 * op2, op1 / op2);

	return 0;
}