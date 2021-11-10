/*
* ���� 9�� ���α׷��� ���� 11
*	binomial coefficient(���� ���)�� ����ϴ� ���α׷�
*	nCk = n-1Ck-1 + n-1Ck  if 0 < k < n
*	1					   if k = 0 or k = n
*/
#include <stdio.h>

int bi_coef(int n, int k);

int main(void)
{
	int n, k;

	printf("n? ");
	scanf("%d", &n);
	printf("k (0 <= k <= n)? ");
	scanf("%d", &k);

	printf("%dC%d = %d\n", n, k, bi_coef(n, k));
	return 0;
}

int bi_coef(int n, int k)
{
	if (k == 0 || k == n)
		return 1;
	else
		return bi_coef(n - 1, k - 1) + bi_coef(n - 1, k);
}