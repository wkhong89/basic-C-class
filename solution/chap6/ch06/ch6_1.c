// ���α׷� ���� 6.1
// �ڸ� ����

#include <stdio.h>

int main(void)
{
	char ch;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &ch);

	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
		switch (ch) {
		case 'a': case 'e': case 'i': case 'o': case 'u':
			printf("�����Դϴ�. \n");
			break;
		default:
			printf("�����Դϴ�. \n");
		}
	}
	else
		printf("���ڰ� �ƴմϴ�.\n");

	return 0;
}