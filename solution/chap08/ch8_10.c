/*
* ���� ������ ����
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
		// �ڵ带 �ϼ��Ͻÿ�.

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
		printf("����Ͻðڽ��ϱ�? (y �Ǵ� n): ");
		scanf("%c", &ans);

		if (ans == 'y')
			return 1;
		else if (ans == 'n')
			return 0;
	}
}