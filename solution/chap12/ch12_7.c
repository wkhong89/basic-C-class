/*
	교재12장 프로그래밍 과제7
		사용자에게 질문을 제시하고 답변을 받아 긍정이면 1, 부정이면 0을 반환
		int response(char *prompt)
*/

#include <stdio.h>
#include <ctype.h>

int response(char* prompt);

int main(void)
{
	int res;

	if ((res = response("게임을 하시겠습니까?")) == 1)
		printf("긍정적인 답변");
	else if (res == 0)
		printf("부정적인 답변");
	else
		printf("답변이 잘 못 되었음");

	return 0;
}

int response(char* prompt)
{
	int res;
	char str[50];

	printf(prompt);
	fgets(str, 50, stdin);

	int i = 0;
	while (str[i] != 0) {
		if (isupper(str[i]))
			str[i] = tolower(str[i]);
		i++;
	}

	if (strncmp(str, "yes", 3) == 0)
		res = 1;
	else if (strncmp(str, "ok", 2) == 0)
		res = 1;
	else if (strncmp(str, "no", 2) == 0)
		res = 0;
	else
		res = -1;

	return res;
}
