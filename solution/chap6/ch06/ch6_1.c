// 프로그램 문제 6.1
// 자모 구분

#include <stdio.h>

int main(void)
{
	char ch;

	printf("문자를 입력하시오: ");
	scanf("%c", &ch);

	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
		switch (ch) {
		case 'a': case 'e': case 'i': case 'o': case 'u':
			printf("모음입니다. \n");
			break;
		default:
			printf("자음입니다. \n");
		}
	}
	else
		printf("문자가 아닙니다.\n");

	return 0;
}