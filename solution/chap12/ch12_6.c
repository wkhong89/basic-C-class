/*
	���� 12�� ���α׷��� ���� 6
		���ڿ��� �޾� ���ڿ� �ҹ��ڸ� �빮�ڷ� ��ȯ�ϴ� �Լ�
		str_upper(char *s);
*/
#include <stdio.h>
#include <ctype.h>

#define STR_SIZE 100

void str_upper(char* s);

int main(void)
{
	char str[STR_SIZE];

	printf("���ڿ� �Է�: ");
	fgets(str, STR_SIZE, stdin);
	printf("��ȯ�� ���ڿ�: ");
	str_upper(str);
	printf("%s\n", str);

	return 0;
}

void str_upper(char* s)
{
	int i = 0;

	while (s[i] != 0) {
		if (isalpha(s[i]) && islower(s[i]))
			s[i] = toupper(s[i]);
		i++;
	}
}
