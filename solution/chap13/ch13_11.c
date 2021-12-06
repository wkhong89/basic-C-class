/*
	교재 13장 프로그래밍 과제 11
		전화번호부: 이름, 집전화번호, 휴대폰 번호
		사용자로부터 이름을 입력받아 전화번호를 검색하는 프로그램 작성하기
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

int get_info(T_ENTRY book[]);		// 전화번호 데이터 입력
int search_user(T_ENTRY book[], int no, char *name);  // 전화번호부 검색

int main(void)
{
	T_ENTRY tbook[ENTRY_SIZE];
	int  num_entries, idx;
	char name[12];

	num_entries = get_info(tbook);

	while (1) {
		printf("검색할 이름을 입력하시오 (quit to exit): ");
		//scanf("%[^\n]s", name);
		fgets(name, 12, stdin);
		name[strlen(name) - 1] = 0;

		if (!strcmp(name, "quit"))
			break;
		idx = search_user(tbook, num_entries, name);
		if (idx != -1) {
			printf("집 전화번호: %s\n", tbook[idx].phone);
			printf("휴대폰 번호: %s\n", tbook[idx].cell);
		}
		else {
			printf("찾으려는 이름이 없습니다.\n");
		}
	}

	return 0;
}

int get_info(T_ENTRY book[])
{
	char name[12]; 
	int i = 0;

	for (i = 0; i < ENTRY_SIZE; i++) {
		printf("이름을 입력하시오(quit to exit): ");
		//scanf("%[^\n]s", name);
		fgets(name, 12, stdin);
		name[strlen(name) - 1] = 0;
		if (!strncmp(name, "quit", 4))
			break;
		strcpy(book[i].name, name);

		printf("집 전화번호를 입력하시오: ");
		fgets(book[i].phone, 14, stdin);
		book[i].phone[strlen(book[i].phone) - 1] = 0;
		printf("휴대폰번호를 입력하시오: ");
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