#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x, y, z;
	if (scanf("%d%d%d", &x, &y, &z) == 3)
		printf("�������� ���� %d\n", x+y+z);
	else
		printf("�Է°��� �ùٸ��� �ʽ��ϴ�.\n");
	return 0;
}