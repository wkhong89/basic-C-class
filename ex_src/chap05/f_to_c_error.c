#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double f_temp;
	double c_temp;

	printf("ȭ���µ��� �Է��Ͻÿ�");
	scanf("%lf", &f_temp);
	c_temp = 5 / 9 * (f_temp - 32);
	printf("�����µ��� %f�Դϴ�", c_temp);
	return 0;

}