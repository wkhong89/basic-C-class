// ���α׷��� ���� 5.6
// ��Ʈ �����ڸ� �̿��� ������ ��Ÿ����

#include <stdio.h>

int main(void)
{
	int num;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	printf("%d\n", ~num + 1);

	return 0;
}