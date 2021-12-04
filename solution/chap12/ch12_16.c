/*
	교재12장 프로그래밍과제 16
	 광고 문자 출력: 문자열을 한칸식 옮기면서 전체 문자열을 순서대로 출력
*/
#include <stdio.h>

void advertise(char* s, int idx);

int main(void)
{
	char str[50];

	printf("광고하고 싶은 텍스트를 입력하시오: ");
	fgets(str, 50, stdin);
	str[strlen(str) - 1] = 0;
	printf("=====================\n");
	for (int i = 0; i < strlen(str); i++)
		advertise(str, i);
	return 0;
}
void advertise(char* s, int idx)
{
	int cnt = 0;

	while (cnt < strlen(s)) {
		putchar(s[idx++ % strlen(s)]);
		cnt++;
	}
	printf("\n");
}