/*
	���� 12�� ���α׷��ְ��� 4��
		����ڷκ��� ���� ���ڿ����� ������ ���ڰ� ��Ÿ���� �� ���
*/
#include <stdio.h>
#define STR_SIZE 100

int main(void)
{
	char str[STR_SIZE];

	printf("���ڿ��� �Է��Ͻÿ�: ");
	fgets(str, STR_SIZE, stdin);
	for (int ch = 'a'; ch <= 'z'; ch++) {
		printf("%c: %d\n", ch, str_chr(str, ch));
	}

	return 0;
}

int str_chr(char* s, int c)
{
	int cnt = 0;

	return 0;
}
