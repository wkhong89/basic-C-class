/*
	���� 12�� ���α׷��ְ��� 3
		���ڿ� �ȿ� ���Ե� Ư�� ������ ������ ���� �Լ�
		int str_chr(char *s, int c);
*/
#include <stdio.h>

int str_chr(char *s, int c);

int main(void)
{
	char str[100];
	int ch;

	printf("���ڿ��� �Է��Ͻÿ�: ");
	int i = 0;
	while ((ch = getchar()) != '\n') {
		str[i++] = ch;
	}
	str[i] = 0;
	
	printf("������ �� ���ڸ� �Է��Ͻÿ�: ");
	//scanf("%c", &ch);
	ch = getchar();
	printf("%c�� ����: %d", ch, str_chr(str, ch));

	return 0;
}		

int str_chr(char* s, int c)
{
	int cnt = 0;

	// add program code from here

	return cnt;
}