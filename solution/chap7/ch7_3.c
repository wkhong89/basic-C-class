// ���α׷��� ���� 7�� 3��
// ����ڰ� �Է��� ������ ��� ����� ȭ�鿡 ����ϱ�

// ������ �Է��Ͻÿ�: 60
// ���: 1 2 3 .... 60
#include <stdio.h>

int main(void)
{
	int num;
	int i = 1;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	printf("���: ");

	while (i <= num) {
		if (num % i == 0)
			printf("%d ", i);
		i++;
	}
	printf("\n");

	return 0;
}