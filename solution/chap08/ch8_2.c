/*
* 교재 8장 프로그래밍 문제 2
* 알파벳 문자인지 검사하는 함수 check_alpha()
*/
#include <stdio.h>

// 0 if ch가 알파벳이 아님
// 1 if ch가 알파벳('a'~'z')임
int check_alpha(char ch);

int main(void)
{
	int character;
	int res;

	printf("문자를 입력하시오: ");
	character = getchar();
	res = check_alpha(character);

	if (res == 0)
		printf("%c는 알파벳 문자가 아닙니다.\n", character);
	else
		printf("%c는 알파벳 문자입니다.\n", character);

	return 0;
}

int check_alpha(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return 1;
	else
		return 0;
}