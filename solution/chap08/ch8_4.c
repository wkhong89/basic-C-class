/*
* 교재8장 프로그래밍 문제 4
* 윤년 함수 is_leap(int year)
*/
#include <stdio.h>

// 0 if 윤년이 아님
// 1 if 윤년
int is_leap(int year);

int main(void)
{
	int year;
	int res;

	printf("연도를 입력하시오: ");
	scanf_s("%d", &year);

	res = is_leap(year);
	if (res == 0)
		printf("%d년은 365일입니다.\n", year);
	else
		printf("%d년은 366일입니다.\n", year);


	return 0;
}

int is_leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}