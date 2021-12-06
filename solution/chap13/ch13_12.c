/*
	교재 13장 프로그래밍 문제 12
		52개의 포커게임 카드를 초기화하고 값을 출력하는 프로그램 작성하기
*/

#include <stdio.h>

struct card { 
	int value;
	char suit;
};

void init_card(struct card* c);
void init_card2(struct card c[][13]);
void print_card(struct card* c);
void print_card2(struct card c[][13]);

int main(void)
{
	struct card cards[52];
	struct card cards2[4][13];

	init_card(cards);
	print_card(cards);

	printf("\n");

	init_card2(cards2);
	print_card2(cards2);

	return 0;
}

void init_card(struct card* c)
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			if (i == 0) c[i * 13 + j].suit = 'c';
			else if (i == 1) c[i * 13 + j].suit = 'd';
			else if (i == 2) c[i * 13 + j].suit = 'h';
			else if (i == 3) c[i * 13 + j].suit = 's';

			c[i * 13 + j].value = j + 1;
		}
	}
}

void print_card(struct card* c)
{
	for (int i = 0; i < 52; i++) {
		printf("%d:%c ", c[i].value, c[i].suit);
	}
}

void init_card2(struct card c[][13])
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			if (i == 0) c[i][j].suit = 'c';
			else if (i == 1) c[i][j].suit = 'd';
			else if (i == 2) c[i][j].suit = 'h';
			else if (i == 3) c[i][j].suit = 's';

			c[i][j].value = j + 1;
		}
	}
}
void print_card2(struct card c[][13])
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			printf("%d:%c ", c[i][j].value, c[i][j].suit);
		}
		printf("\n");
	}

}
