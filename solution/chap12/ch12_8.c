/*
	����12�� ���α׷��ְ��� 8
		���ڿ� �ȿ� ���Ե� ������ ������ ����Ͽ� ����ϴ� ���α׷�
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[50];
	char* word;
	int word_cnt = 0;

	printf("���ڿ��� �Է��Ͻÿ�: ");
	scanf("%[^\n]s", str);

	word = strtok(str, " \t\n,");
	while (word != NULL) {
		word_cnt++;
		word = strtok(NULL, " \t\n,");
	}

	printf("�ܾ��� ���� %d�Դϴ�.\n", word_cnt);
	return 0;
}