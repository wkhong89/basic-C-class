/*
	교재12장 프로그래밍과제 8
		문자열 안에 포함된 영어의 개수를 계산하여 출력하는 프로그램
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[50];
	char* word;
	int word_cnt = 0;

	printf("문자열을 입력하시오: ");
	scanf("%[^\n]s", str);

	word = strtok(str, " \t\n,");
	while (word != NULL) {
		word_cnt++;
		word = strtok(NULL, " \t\n,");
	}

	printf("단어의 수는 %d입니다.\n", word_cnt);
	return 0;
}