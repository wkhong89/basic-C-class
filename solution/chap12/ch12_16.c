/*
	����12�� ���α׷��ְ��� 16
	 ���� ���� ���: ���ڿ��� ��ĭ�� �ű�鼭 ��ü ���ڿ��� ������� ���
*/
#include <stdio.h>

void advertise(char* s, int idx);

int main(void)
{
	char str[50];

	printf("�����ϰ� ���� �ؽ�Ʈ�� �Է��Ͻÿ�: ");
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