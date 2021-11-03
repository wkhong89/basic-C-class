/*
* 동전 던지기 게임
*/
#define _CRT_SECURE_NO_WARGNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand(void);
int want_continue(void);

int main(void)
{
	srand((unsigned)time(NULL));
	do {
		// 코드를 완성하시오.

	} while (want_continue());
	return 0;
}

int b_rand(void)
{
	return rand() % 2;
}

int want_continue(void)
{
	char ans;

	while (1) {
		printf("계속하시겠습니까? (y 또는 n): ");
		scanf("%c", &ans);

		if (ans == 'y')
			return 1;
		else if (ans == 'n')
			return 0;
	}
}