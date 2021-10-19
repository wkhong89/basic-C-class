// 프로그램 문제 6.3
// x, y, z 중 최소값 찾기

#include <stdio.h>

int main(void)
{
	int x, y, z;

	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x < y) {
		if (x < z)
			printf("제일 작은 정수는 %d입니다.\n", x);
		else
			printf("제일 작은 정수는 %d입니다.\n", z);
	}
	else {
		if (y < z)
			printf("제일 작은 정수는 %d입니다.\n", y);
		else
			printf("제일 작은 정수는 %d입니다.\n", z);
	}

	return 0;
}