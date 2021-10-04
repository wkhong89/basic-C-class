/*
 * 사용자로부터 정수를 16진수로 입력받아서 8진수, 10진수, 16진수 형태로 출력
 * 하는 프로그램을 작성하시오.
 * 
 * 16진수 정수를 입력하시오: ff
 * 8진수로는 0377입니다.
 * 10진수로는 255입니다.
 * 16진수로는 0xff입니다.
*/
#include <stdio.h>

int main(void)
{
	int var;

	printf("16진수 정수를 입력하시오: ");
	scanf("%x", &var);

	printf("8진수로는 %#o입니다.\n", var);
	printf("10진수로는 %d입니다.\n", var);
	printf("16진수로는 %#x입니다.\n", var);

	return 0;
}