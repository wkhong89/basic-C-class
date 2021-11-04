/*
* 교재 8장 프로그래밍 문제 18
* 덧셈, 뺄셈 곱셈, 나눗셈, 나머지 연산의 결과를 계산하는 프로그램
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
		printf("원하는 메뉴를 선택하시오 (1 ~ 5): ");
		scanf("%d", &choice);
		if (choice < 1 || choice > 5)
			continue;
		printf("숫자 2개를 입력하시오: ");
		scanf("%d %d", &num1, &num2);
		result = calc(choice, num1, num2);
		printf("연산결과: %d\n", result);
		printf("계속하려면 y를 누르시오: ");
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
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("4. 나눗셈\n");
	printf("5. 나머지\n");
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