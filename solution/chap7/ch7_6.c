/*
* ���α׷��� ���� 7�� 6��
* A, S, M, D, Q �޴��� ���� ������ ����� �ϴ� ���� ���α׷�
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
			printf("������ �����Ͻÿ�: ");
			scanf(" %c", &ch);
		} while (ch != 'A' && ch != 'S' && ch != 'M' && ch != 'D' && ch != 'Q');

		if (ch == 'Q')
			break;

		printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ");
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