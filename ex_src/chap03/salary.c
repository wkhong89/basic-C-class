#define _CRT_SECURE_NO_WARNINGS
/* �����ɾ��� ����ϴ� ���α׷� */
#include <stdio.h>

int main(void)

{
		int ysalary;	// ���� 
		int msalary;	// �����ɾ� 
	
		printf("������ �Է��Ͻÿ�(����: ����): ");
		scanf("%d", &ysalary);

		msalary = ysalary/12;
		printf("�����ɾ�(����: ����): %d\n", msalary);

		return 0;

}
