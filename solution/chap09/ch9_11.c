/*
* 교재 9장 프로그래밍 문제 11
*	binomial coefficient(이항 계수)를 계산하는 프로그램
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