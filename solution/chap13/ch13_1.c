/*
	교재13장 프로그래밍과제 1
		구조체 book 선언
		{1, "바람과 함께 사라지다", "마가렛 미첼"}로 초기화
*/
#include <stdio.h>

struct book {
	int id;
	char title[100];
	char author[20];
};

int main(void)
{
	struct book theBook = { 1, "바람과 함께 사라지다", "마가렛 미첼" };

	printf("{ %d, %s, %s }\n", theBook.id, theBook.title, theBook.author);

	return 0;
}