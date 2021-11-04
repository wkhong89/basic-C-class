/*
* 교재 8장 프로그래밍 문제 16
*  오일러의 수 e를 계산하는 함수
*/
#include <stdio.h>

double get_eulerNumber(int bound);
double factorial(int n);

int main(void)
{
	int n;
	double result;

	printf("어디까지 계산할까요? ");
	scanf("%d", &n);
	result = get_eulerNumber(n);
	printf("오일러의 수는 %f입니다.\n", result);

	return 0;
}

double get_eulerNumber(int bound)
{
	double num = 1;

	for (int i = 1; i <= bound; i++) {
		num += 1 / factorial(i);
	}

	return num;

}

double factorial(int n)
{
	double result = 1;

	for (int i = 1; i <= n; i++)
		result *= i;

	return result;
}
