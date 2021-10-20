/*
* 프로그래밍 문제 7장 6번
* A, S, M, D, Q 메뉴를 열고 선택한 계산을 하는 계산기 프로그램
*/

#include <stdio.h>

int main(void)
{
	char ch;
	int num1, num2;

	while (1) {
		do {
			printf("**********************\n");
			printf("A---- Add\n");
			printf("S---- Subtract\n");
			printf("M---- Multiply\n");
			printf("D---- Divide\n");
			printf("Q---- Quit\n");
			printf("**********************\n");
			printf("연산을 선택하시오: ");
			scanf(" %c", &ch);
		} while (ch != 'A' && ch != 'S' && ch != 'M' && ch != 'D' && ch != 'Q');

		if (ch == 'Q')
			break;

		printf("두 수를 공백으로 분리하여 입력하시오: ");
		scanf("%d %d", &num1, &num2);

		switch (ch) {
		case 'A':
			printf("%d\n", num1 + num2);
			break;
		case 'S':
			printf("%d\n", num1 - num2);
			break;
		case 'M':
			printf("%d\n", num1 * num2);
			break;
		case 'D':
			printf("%d\n", num1 / num2);
			break;
		}

	}

	return 0;
}