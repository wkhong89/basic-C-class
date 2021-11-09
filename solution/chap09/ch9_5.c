/*
*	교재 9장 프로그래밍 문제 5
*		순환호출을 이용하여 Sn = 1 + 2 + 3 + ... + n
*		== 점화식 ==
*		S_{n}= S_{n-1} + n
*		S_1 = 1
*/

#include <stdio.h>

int sum(int n);

int main(void)
{
	int n;

	printf("n: ");
	scanf("%d", &n);
	printf("%d까지 합한 결과: %d\n", n, sum(n));
	return 0;
}

int sum(int n)
{
	if (n == 1)
		return 1;
	else
		return n + sum(n - 1);
}