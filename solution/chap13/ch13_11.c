/*
	���� 13�� ���α׷��� ���� 11
		��ȭ��ȣ��: �̸�, ����ȭ��ȣ, �޴��� ��ȣ
		����ڷκ��� �̸��� �Է¹޾� ��ȭ��ȣ�� �˻��ϴ� ���α׷� �ۼ��ϱ�
*/

#include <stdio.h>
#include <string.h>

struct tbook_entry {
	char name[12];
	char phone[14];
	char cell[15];
};

typedef struct tbook_entry T_ENTRY;

#define ENTRY_SIZE 20

int get_info(T_ENTRY book[]);		// ��ȭ��ȣ ������ �Է�
int search_user(T_ENTRY book[], int no, char *name);  // ��ȭ��ȣ�� �˻�

int main(void)
{
	T_ENTRY tbook[ENTRY_SIZE];
	int  num_entries, idx;
	char name[12];

	num_entries = get_info(tbook);

	while (1) {
		printf("�˻��� �̸��� �Է��Ͻÿ� (quit to exit): ");
		//scanf("%[^\n]s", name);
		fgets(name, 12, stdin);
		name[strlen(name) - 1] = 0;

		if (!strcmp(name, "quit"))
			break;
		idx = search_user(tbook, num_entries, name);
		if (idx != -1) {
			printf("�� ��ȭ��ȣ: %s\n", tbook[idx].phone);
			printf("�޴��� ��ȣ: %s\n", tbook[idx].cell);
		}
		else {
			printf("ã������ �̸��� �����ϴ�.\n");
		}
	}

	return 0;
}

int get_info(T_ENTRY book[])
{
	char name[12]; 
	int i = 0;

	for (i = 0; i < ENTRY_SIZE; i++) {
		printf("�̸��� �Է��Ͻÿ�(quit to exit): ");
		//scanf("%[^\n]s", name);
		fgets(name, 12, stdin);
		name[strlen(name) - 1] = 0;
		if (!strncmp(name, "quit", 4))
			break;
		strcpy(book[i].name, name);

		printf("�� ��ȭ��ȣ�� �Է��Ͻÿ�: ");
		fgets(book[i].phone, 14, stdin);
		book[i].phone[strlen(book[i].phone) - 1] = 0;
		printf("�޴�����ȣ�� �Է��Ͻÿ�: ");
		fgets(book[i].cell, 15, stdin);
		book[i].cell[strlen(book[i].cell) - 1] = 0;
	}

	return i;
}

int search_user(T_ENTRY book[], int no, char* name)
{
	int i;
	for (i = 0; i < no; i++) {
		if (!strcmp(book[i].name, name))
			return i;
	}

	return -1;
}