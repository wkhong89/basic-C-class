/*
	교재 11장 프로그래밍 과제 10
	2개의 정수를 입력받아서 최대 공약수와 최소 공배수를 반환하는 함수
	void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd);
*/

#include <stdio.h>

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd);

int main(void)
{
	int n1, n2;
	int lcm, gcd;

	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d", &n1, &n2);

	get_lcm_gcd(n1, n2, &lcm, &gcd);


	printf("최소 공배수는 %d입니다.\n", lcm);
	printf("최대 공약수는 %d입니다.\n", gcd);

	return 0;
}

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd)
{
	int tmp;
	int n;

	if (x < y) {
		tmp = x;
		x = y;
		y = tmp;
	}

	*p_lcm = x * y;

	while ((n = x % y) != 0) {
		x = y;
		y = n;
	}

	*p_gcd = y;
	*p_lcm /= y;

}