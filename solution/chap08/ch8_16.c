/*
* ���� 8�� ���α׷��� ���� 16
*  ���Ϸ��� �� e�� ����ϴ� �Լ�
*/
#include <stdio.h>

double get_eulerNumber(int bound);
double factorial(int n);

int main(void)
{
	int n;
	double result;

	printf("������ ����ұ��? ");
	scanf("%d", &n);
	result = get_eulerNumber(n);
	printf("���Ϸ��� ���� %f�Դϴ�.\n", result);

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
