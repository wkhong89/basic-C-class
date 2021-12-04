/*
	교재 12장 프로그래밍 과제 6
		문자열을 받아 문자열 소문자를 대문자로 변환하는 함수
		str_upper(char *s);
*/
#include <stdio.h>
#include <ctype.h>

#define STR_SIZE 100

void str_upper(char* s);

int main(void)
{
	char str[STR_SIZE];

	printf("문자열 입력: ");
	fgets(str, STR_SIZE, stdin);
	printf("변환된 문자열: ");
	str_upper(str);
	printf("%s\n", str);

	return 0;
}

void str_upper(char* s)
{
	int i = 0;

	while (s[i] != 0) {
		if (isalpha(s[i]) && islower(s[i]))
			s[i] = toupper(s[i]);
		i++;
	}
}
