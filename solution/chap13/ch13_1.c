/*
	����13�� ���α׷��ְ��� 1
		����ü book ����
		{1, "�ٶ��� �Բ� �������", "������ ��ÿ"}�� �ʱ�ȭ
*/
#include <stdio.h>

struct book {
	int id;
	char title[100];
	char author[20];
};

int main(void)
{
	struct book theBook = { 1, "�ٶ��� �Բ� �������", "������ ��ÿ" };

	printf("{ %d, %s, %s }\n", theBook.id, theBook.title, theBook.author);

	return 0;
}