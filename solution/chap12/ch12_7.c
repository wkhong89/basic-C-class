/*
	����12�� ���α׷��� ����7
		����ڿ��� ������ �����ϰ� �亯�� �޾� �����̸� 1, �����̸� 0�� ��ȯ
		int response(char *prompt)
*/

#include <stdio.h>
#include <ctype.h>

int response(char* prompt);

int main(void)
{
	int res;

	if ((res = response("������ �Ͻðڽ��ϱ�?")) == 1)
		printf("�������� �亯");
	else if (res == 0)
		printf("�������� �亯");
	else
		printf("�亯�� �� �� �Ǿ���");

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
