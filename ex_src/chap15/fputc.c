#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;

	fp = fopen("sample.txt", "w");
	if( fp == NULL )
		printf("���� ���� ����\n");
	else 
		printf("���� ���� ����\n");
	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	fclose(fp);
	return 0;
} 