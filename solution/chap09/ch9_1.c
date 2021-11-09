/*
* 교재 9장 프로그래밍과제 1번
*  덧셈, 뺄셈, 곱셈, 나눗셈 지원하는 계산기 프로그램 작성
*  각 연산을 지원하는 함수들은 자신이 호출된 횟수를 화면에 출력
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
		printf("연산을 입력하시오: ");
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
	printf("덧셈은 총 %d번 실행되었습니다.\n", count);
	printf("연산 결과: %d\n", op1 + op2);

	return;
}

void sub(op1, op2)
{
	static int count = 0;

	count++;
	printf("뺄셈은 총 %d번 실행되었습니다.\n", count);
	printf("연산 결과: %d\n", op1 - op2);

	return;

}
void mul(op1, op2)
{
	static int count = 0;

	count++;
	printf("곱셈은 총 %d번 실행되었습니다.\n", count);
	printf("연산 결과: %d\n", op1 * op2);

	return;

}
void div(op1, op2)
{
	static int count = 0;

	count++;
	printf("나눗셈은 총 %d번 실행되었습니다.\n", count);
	printf("연산 결과: %d\n", op1 / op2);

	return;

}