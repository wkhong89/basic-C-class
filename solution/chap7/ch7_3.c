// 프로그래밍 문제 7장 3번
// 사용자가 입력한 정수의 모든 약수를 화면에 출력하기

// 정수를 입력하시오: 60
// 약수: 1 2 3 .... 60
#include <stdio.h>

int main(void)
{
	int num;
	int i = 1;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	printf("약수: ");

	while (i <= num) {
		if (num % i == 0)
			printf("%d ", i);
		i++;
	}
	printf("\n");

	return 0;
}