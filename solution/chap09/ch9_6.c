/*
* ��ȯ����� �̿��Ͽ� power(int base, int power_raised) ���α׷� �����
*/

#include <stdio.h>

int power(int base, int power_raised);

int main(void)
{
	int base, exp;

	printf("�ؼ�: ");
	scanf("%d", &base);
	printf("����: ");
	scanf("%d", &exp);

	printf("%d^%d = %d", base, exp, power(base, exp));

	return 0;
}

int power(int base, int power_raised)
{
	if (power_raised == 0)
		return 1;
	else
		return base * power(base, power_raised - 1);

}