/*
	����12�� ���α׷��� ���� 5
		����ڷ� ���� ������ �Է� �޾� �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ�
		���ĺ� ���ڰ� �ƴϸ� ��� �޽���
		.�̸� ���α׷� ����
*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int ch;

	while (1) {
		printf("���ڸ� �Է��Ͻÿ�: ");
		ch = getchar();
		if (!isalpha(ch)) {
			if (ch == '.')
				break;
			else
				printf("���ڸ� �� �� �Է��߽��ϴ�. \n");
		}
		else if (islower(ch)) {
			putchar(toupper(ch));
			putchar('\n');
		}
		else if (isupper(ch)) {
			putchar(tolower(ch));
			putchar('\n');
		}
		getchar(); // delete newline
	}

	return 0;
}