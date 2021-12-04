/*
	교재 12장 프로그래밍과제 2
		표준 입력으로 부터 문자열을 읽어, 공백을 제거하고 출력하는 프로그램 작성하기
*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str[100];
	int ch;

	printf("문자열을 입력하시오: ");
	//scanf("%[^\n]s", str);
	//fgets(str, sizeof(str)/sizeof(char), stdin);
	int i = 0;
	while ((ch = getchar()) != '\n') {
		str[i++] = ch;
	}
	str[i] = 0;

	for (int i = 0; str[i] != 0; i++) {
		if (!isspace(str[i]))
			printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}