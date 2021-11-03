/*
* 교재 8장 프로그래밍문제 5
* 소수점 이하를 반올림 연산 함수 round(double f)
*/
#include <stdio.h>

// 4.56 ==> 5, 4.31 ==> 4
int round(double f);

int main(void)
{
	double num;
	int	res;

	printf("실수를 입력하시오: ");
	scanf_s("%lf", &num);
	res = round(num);
	printf("반올림한 값은 %d입니다.\n", res);

	return 0;
}

int round(double f)
{
	return f + 0.5;
}