/*
	교재 12장 프로그래밍과제 3
		문자열 안에 포함된 특정 문자의 개수를 세는 함수
		int str_chr(char *s, int c);
*/
#include <stdio.h>

int str_chr(char *s, int c);

int main(void)
{
	char str[100];
	int ch;

	printf("문자열을 입력하시오: ");
	int i = 0;
	while ((ch = getchar()) != '\n') {
		str[i++] = ch;
	}
	str[i] = 0;
	
	printf("개수를 셀 문자를 입력하시오: ");
	//scanf("%c", &ch);
	ch = getchar();
	printf("%c의 갯수: %d", ch, str_chr(str, ch));

	return 0;
}		

int str_chr(char* s, int c)
{
	int cnt = 0;

	// add program code from here

	return cnt;
}