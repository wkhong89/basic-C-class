#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char s[80];

	printf("���ڿ��� �Է��Ͻÿ�:");
	scanf("%[abc]", s);

	printf("�Էµ� ���ڿ�=%s\n", s);
	return 0;
}