/*
* ���� 8�� ���α׷��� ���� 18
* ����, ���� ����, ������, ������ ������ ����� ����ϴ� ���α׷�
*/
#include <stdio.h>
void print_menu(void);
// operator=1: op1+op2, operator=2: op1-op2, operator=3: op1*op2, 
// operator=4: op1/op2, operator=5: op1%op2
int calc(int operator, int op1, int op2);

int main(void)
{
	int choice;
	int num1, num2;
	int result;
	char cont;

	while (1) {
		print_menu();
		printf("���ϴ� �޴��� �����Ͻÿ� (1 ~ 5): ");
		scanf("%d", &choice);
		if (choice < 1 || choice > 5)
			continue;
		printf("���� 2���� �Է��Ͻÿ�: ");
		scanf("%d %d", &num1, &num2);
		result = calc(choice, num1, num2);
		printf("������: %d\n", result);
		printf("����Ϸ��� y�� �����ÿ�: ");
		scanf(" %c", &cont);
		if (cont != 'y') break;
	}
	return 0;
}

void print_menu(void)
{
	printf("==========================================\n");
	printf("MENU\n");
	printf("==========================================\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ������\n");
	printf("5. ������\n");
}

int calc(int operator, int op1, int op2)
{
	int result;

	switch (operator) {
	case 1:
		result = op1 + op2;
		break;
	case 2:
		result = op1 - op2;
		break;
	case 3:
		result = op1 * op2;
		break;
	case 4:
		result = op1 / op2;
		break;
	case 5:
		result = op1 % op2;
		break;
	}

	return result;
}