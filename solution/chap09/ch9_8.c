/*
*	���� 9�� ���α׷��� ���� 8
*		��ȯ�Լ��� �̿��Ͽ� �������� �ڸ��� ���ϴ� ���α׷�
*/

#include <stdio.h>

int get_num_digits(int num);

int main(void)
{
	int num;

	printf("���� �Է�: ");
	scanf("%d", &num);

	printf("%d�� �ڸ����� %d�Դϴ�. \n", num, get_num_digits(num));
	return 0;
}

int get_num_digits(int num)
{
	static int cnt = 0;

	if (num != 0) {
		cnt++;
		get_num_digits(num / 10);
	}
	return cnt;
}