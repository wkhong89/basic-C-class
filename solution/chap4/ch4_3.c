/*
* int���� ���� x�� y�� ���� ���� ��ȯ�ϴ� ���α׷��� �ۼ��� ����.
* ������ ������ �ʿ��ϸ� ������ ����Ѵ�. 
* ���� x�� y�� 10, 20�� ������ �ʱ�ȭ �ض�.
* 
* x = 10, y = 20
* x = 20, y = 10
*/
#include <stdio.h>

int main(void)
{
	int x = 10, y = 20;
	int tmp;

	printf("swap ��: x = %d, y = %d\n", x, y);

	// swap
	tmp = x;
	x = y;
	y = tmp;

	printf("swap ��: x = %d, y = %d\n", x, y);

	return 0;
}