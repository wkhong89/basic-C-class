/*
* ���� 8�� ���α׷��� ���� 2
* ���ĺ� �������� �˻��ϴ� �Լ� check_alpha()
*/
#include <stdio.h>

// 0 if ch�� ���ĺ��� �ƴ�
// 1 if ch�� ���ĺ�('a'~'z')��
int check_alpha(char ch);

int main(void)
{
	int character;
	int res;

	printf("���ڸ� �Է��Ͻÿ�: ");
	character = getchar();
	res = check_alpha(character);

	if (res == 0)
		printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.\n", character);
	else
		printf("%c�� ���ĺ� �����Դϴ�.\n", character);

	return 0;
}

int check_alpha(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return 1;
	else
		return 0;
}