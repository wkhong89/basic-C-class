/*
* ����8�� ���α׷��� ���� 8
* 0~180������ 10�� ������ sin���� ����ϴ� �Լ�
* ������ �޾Ƽ� ���ΰ��� ��ȯ�ϴ� �Լ�  sin_degree(double degree)
*/
#define _USE_MATH_DEFINES
#include <stdio.h>
// for sin()
#include <math.h>

void print_sin(void);
double sin_degree(double degree);

int main(void)
{
	printf("====== print_sin() ��� =====\n");
	print_sin();
	printf("====== sin_degree()�� �̿��� ��� =====\n");

	for (int i = 0; i <= 180; i += 10) {
		printf("sin(%d)�� ������� %f\n", i, sin_degree((double)i));
	}

	return 0;
}

void print_sin(void)
{
	double radian = 0;

	for (int i = 0; i <= 180; i += 10) {
		radian = M_PI * i / 180;
		printf("sin(%d)�� ������� %f\n", i, sin(radian));
	}
}

double sin_degree(double degree)
{
	double radian = M_PI * degree / 180;
	return sin(radian);
}