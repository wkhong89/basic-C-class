/*
* ���� 8�� ���α׷��ֹ��� 5
* �Ҽ��� ���ϸ� �ݿø� ���� �Լ� round(double f)
*/
#include <stdio.h>

// 4.56 ==> 5, 4.31 ==> 4
int round(double f);

int main(void)
{
	double num;
	int	res;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &num);
	res = round(num);
	printf("�ݿø��� ���� %d�Դϴ�.\n", res);

	return 0;
}

int round(double f)
{
	return f + 0.5;
}