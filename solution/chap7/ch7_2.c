#include <stdio.h>

int main(void)
{
	int i = 1;
	int sum = 0;

	while (i <= 100) {
		if (i % 3 == 0) {
			sum += i;
		}
		i++;
	}

	printf("1���� 100 ������ 3�� ����� ���� ");
	printf("%d �Դϴ�. ", sum);

	return 0;
}