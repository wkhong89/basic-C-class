// 프로그래밍 문제 5.5
// 제한조건: 100보다 작은 양의 정수
#include <stdio.h>

int main(void)
{
	int num;

	printf("100보다 작은 양의 정수를 입력하시오: ");
	scanf("%d", &num);
	printf("십의 자리: %d\n", num / 10);
	printf("일의 자리: %d\n", num % 10);

	return 0;
}