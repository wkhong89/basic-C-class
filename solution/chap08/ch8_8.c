/*
* 교재8장 프로그래밍 과제 8
* 0~180도까지 10도 단위로 sin값을 출력하는 함수
* 각도를 받아서 사인값을 반환하는 함수  sin_degree(double degree)
*/
#define _USE_MATH_DEFINES
#include <stdio.h>
// for sin()
#include <math.h>

void print_sin(void);
double sin_degree(double degree);

int main(void)
{
	printf("====== print_sin() 결과 =====\n");
	print_sin();
	printf("====== sin_degree()를 이용한 결과 =====\n");

	for (int i = 0; i <= 180; i += 10) {
		printf("sin(%d)의 결과값은 %f\n", i, sin_degree((double)i));
	}

	return 0;
}

void print_sin(void)
{
	double radian = 0;

	for (int i = 0; i <= 180; i += 10) {
		radian = M_PI * i / 180;
		printf("sin(%d)의 결과값은 %f\n", i, sin(radian));
	}
}

double sin_degree(double degree)
{
	double radian = M_PI * degree / 180;
	return sin(radian);
}