/*
	교재12장 프로그래밍 과제 5
		사용자로 부터 문자을 입력 받아 대문자는 소문자로, 소문자는 대문자로
		알파벳 문자가 아니면 경고 메시지
		.이면 프로그램 종료
*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int ch;

	while (1) {
		printf("문자를 입력하시오: ");
		ch = getchar();
		if (!isalpha(ch)) {
			if (ch == '.')
				break;
			else
				printf("문자를 잘 못 입력했습니다. \n");
		}
		else if (islower(ch)) {
			putchar(toupper(ch));
			putchar('\n');
		}
		else if (isupper(ch)) {
			putchar(tolower(ch));
			putchar('\n');
		}
		getchar(); // delete newline
	}

	return 0;
}