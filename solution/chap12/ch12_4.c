/*
	교재 12장 프로그래밍과제 4번
		사용자로부터 받은 문자열에서 각각의 문자가 나타나는 빈도 계산
*/
#include <stdio.h>
#define STR_SIZE 100

int main(void)
{
	char str[STR_SIZE];

	printf("문자열을 입력하시오: ");
	fgets(str, STR_SIZE, stdin);
	for (int ch = 'a'; ch <= 'z'; ch++) {
		printf("%c: %d\n", ch, str_chr(str, ch));
	}

	return 0;
}

int str_chr(char* s, int c)
{
	int cnt = 0;

	return 0;
}
