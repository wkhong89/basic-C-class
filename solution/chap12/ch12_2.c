/*
	���� 12�� ���α׷��ְ��� 2
		ǥ�� �Է����� ���� ���ڿ��� �о�, ������ �����ϰ� ����ϴ� ���α׷� �ۼ��ϱ�
*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str[100];
	int ch;

	printf("���ڿ��� �Է��Ͻÿ�: ");
	//scanf("%[^\n]s", str);
	//fgets(str, sizeof(str)/sizeof(char), stdin);
	int i = 0;
	while ((ch = getchar()) != '\n') {
		str[i++] = ch;
	}
	str[i] = 0;

	for (int i = 0; str[i] != 0; i++) {
		if (!isspace(str[i]))
			printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}