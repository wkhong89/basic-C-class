/*
* ���� 9�� ���α׷��ְ��� 1��
*  ����, ����, ����, ������ �����ϴ� ���� ���α׷� �ۼ�
*  �� ������ �����ϴ� �Լ����� �ڽ��� ȣ��� Ƚ���� ȭ�鿡 ���
*/

#include <stdio.h>

void add(op1, op2);
void sub(op1, op2);
void mul(op1, op2);
void div(op1, op2);

int main(void)
{
	int op1, op2;
	char op;

	while (1) {
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d%c%d", &op1, &op, &op2);

		switch (op) {
		case '+':
			add(op1, op2);
			break;
		case '-':
			sub(op1, op2);
			break;
		case '*':
			mul(op1, op2);
			break;
		case '/':
			div(op1, op2);
			break;
		default:;
		}

		if (op1 == 0)
			break;
	}

	return 0;
}

void add(op1, op2)
{
	static int count = 0;

	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("���� ���: %d\n", op1 + op2);

	return;
}

void sub(op1, op2)
{
	static int count = 0;

	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("���� ���: %d\n", op1 - op2);

	return;

}
void mul(op1, op2)
{
	static int count = 0;

	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("���� ���: %d\n", op1 * op2);

	return;

}
void div(op1, op2)
{
	static int count = 0;

	count++;
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("���� ���: %d\n", op1 / op2);

	return;

}