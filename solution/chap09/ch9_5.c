/*
*	���� 9�� ���α׷��� ���� 5
*		��ȯȣ���� �̿��Ͽ� Sn = 1 + 2 + 3 + ... + n
*		== ��ȭ�� ==
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
	printf("%d���� ���� ���: %d\n", n, sum(n));
	return 0;
}

int sum(int n)
{
	if (n == 1)
		return 1;
	else
		return n + sum(n - 1);
}