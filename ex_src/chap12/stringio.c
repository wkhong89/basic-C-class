#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main(void)
{
       char name[100];
       char address[100];
 
       printf("�̸��� �Է��Ͻÿ�: ");
       scanf("%s", name);
       printf("���� �����ϴ� ���ø� �Է��Ͻÿ�: ");
       scanf("%s", address);
 
       printf("����� %s�� ��� %s�Դϴ�.\n", address, name);
       return 0;
}