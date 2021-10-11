// 프로그래밍 문제 5.6
// 비트 연산자를 이용해 음수를 나타내기

#include <stdio.h>

int main(void)
{
	int num;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	printf("%d\n", ~num + 1);

	return 0;
}