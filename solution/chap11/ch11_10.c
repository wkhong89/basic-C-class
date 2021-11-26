/*
	���� 11�� ���α׷��� ���� 10
	2���� ������ �Է¹޾Ƽ� �ִ� ������� �ּ� ������� ��ȯ�ϴ� �Լ�
	void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd);
*/

#include <stdio.h>

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd);

int main(void)
{
	int n1, n2;
	int lcm, gcd;

	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &n1, &n2);

	get_lcm_gcd(n1, n2, &lcm, &gcd);


	printf("�ּ� ������� %d�Դϴ�.\n", lcm);
	printf("�ִ� ������� %d�Դϴ�.\n", gcd);

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