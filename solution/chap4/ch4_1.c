/* 
 * ����ڷκ��� �ϳ��� �Ǽ��� �Է¹޾Ƽ�
 * �Ҽ��� ǥ�� ����� ���� ǥ�� ������� ���ÿ� ����ϴ� ���α׷��� �ۼ��ϱ�
 * 
 * �Ǽ��� �Է��Ͻÿ�: 89.567
 * �Ǽ��������δ� 89.567000 �Դϴ�. 
 * �����������δ� 8.9567e+001�Դϴ�.
 */
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double var;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &var);
	printf("�Ǽ� �������δ� %f �Դϴ�.\n", var);
	printf("���� �������δ� %e �Դϴ�.\n", var);

	return 0;
}