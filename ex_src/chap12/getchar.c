#define _CRT_SECURE_NO_WARNINGS
// getchar()�� ���
#include <stdio.h>

int main(void)
{
	int ch;		// �������� ����

	while((ch=getchar())!=EOF)
	{
		putchar(ch);
	}
	return 0;
}

