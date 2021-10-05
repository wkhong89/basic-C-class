// 교재 프로그래밍 문제 5.1

#include <stdio.h>

int main(void)
{
	int op1, op2;

	printf("2개의 정수를 입력하시오: ");
	scanf("%d %d", &op1, &op2);
	printf("몫: %d, 나머지: %d", op1 / op2, op1 % op2);

	return 0;
}