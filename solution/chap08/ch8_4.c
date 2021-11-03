/*
* ����8�� ���α׷��� ���� 4
* ���� �Լ� is_leap(int year)
*/
#include <stdio.h>

// 0 if ������ �ƴ�
// 1 if ����
int is_leap(int year);

int main(void)
{
	int year;
	int res;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &year);

	res = is_leap(year);
	if (res == 0)
		printf("%d���� 365���Դϴ�.\n", year);
	else
		printf("%d���� 366���Դϴ�.\n", year);


	return 0;
}

int is_leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}