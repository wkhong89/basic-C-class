#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int usd;	// �޷�ȭ
	int krw;	// ��ȭ
	
	printf("�޷�ȭ �ݾ��� �Է��Ͻÿ�: ");		// �Է� �ȳ� �޽���

	scanf("%d", &usd);				// �޷�ȭ �ݾ� �Է�
	krw = 1120 * usd;				// ��ȭ�� ȯ��	
	printf("�޷�ȭ %d�޷��� %d���Դϴ�.\n", usd, krw);	// ��� ��� ���

	return 0;					// �Լ� ����� ��ȯ 
}