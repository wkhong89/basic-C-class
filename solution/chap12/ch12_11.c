/*
	����12�� ���α׷��ְ��� 11
		���ڿ��� �Է¹޾Ƽ� ������ �ܾ���� �������� ����ϴ� ���α׷�
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	char* array[10];

	printf("���ڿ��� �Է��Ͻÿ�: ");
	scanf("%[^\n]s", str);
	array[0] = strtok(str, " ");
	int i = 1;
	while (array[i] = strtok(NULL, " ")) {
		i++;
	}


	for ( i -= 1; i >= 0; i--) {
		printf("%s ", array[i]);
	}

	return 0;
}