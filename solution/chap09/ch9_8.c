/*
*	교재 9장 프로그래밍 문제 8
*		순환함수를 이용하여 십진수의 자릿수 구하는 프로그램
*/

#include <stdio.h>

int get_num_digits(int num);

int main(void)
{
	int num;

	printf("정수 입력: ");
	scanf("%d", &num);

	printf("%d의 자리수는 %d입니다. \n", num, get_num_digits(num));
	return 0;
}

int get_num_digits(int num)
{
	static int cnt = 0;

	if (num != 0) {
		cnt++;
		get_num_digits(num / 10);
	}
	return cnt;
}