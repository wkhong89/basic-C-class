// ���α׷� ���� 6.3
// x, y, z �� �ּҰ� ã��

#include <stdio.h>

int main(void)
{
	int x, y, z;

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x < y) {
		if (x < z)
			printf("���� ���� ������ %d�Դϴ�.\n", x);
		else
			printf("���� ���� ������ %d�Դϴ�.\n", z);
	}
	else {
		if (y < z)
			printf("���� ���� ������ %d�Դϴ�.\n", y);
		else
			printf("���� ���� ������ %d�Դϴ�.\n", z);
	}

	return 0;
}