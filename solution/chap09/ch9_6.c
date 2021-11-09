/*
* 순환기법을 이용하여 power(int base, int power_raised) 프로그램 만들기
*/

#include <stdio.h>

int power(int base, int power_raised);

int main(void)
{
	int base, exp;

	printf("밑수: ");
	scanf("%d", &base);
	printf("지수: ");
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